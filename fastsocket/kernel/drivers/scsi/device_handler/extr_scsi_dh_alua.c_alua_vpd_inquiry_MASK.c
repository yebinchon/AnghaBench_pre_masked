
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_dh_data {int* buff; int bufflen; unsigned char rel_port; unsigned char group_id; int tpgs; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct alua_dh_data*,int) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ,...) ;
 unsigned int FUNC_2 (struct scsi_device*,struct alua_dh_data*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_8, struct alua_dh_data *VAR_9)
{
 int VAR_10;
 unsigned VAR_11;
 unsigned char *VAR_12;

 retry:
 VAR_11 = FUNC_2(VAR_8, VAR_9);

 if (VAR_11 != VAR_5)
  return VAR_11;


 VAR_10 = (VAR_9->buff[2] << 8) + VAR_9->buff[3] + 4;
 if (VAR_10 > VAR_9->bufflen) {

  if (FUNC_0(VAR_9, VAR_10)) {
   FUNC_1(VAR_2, VAR_8,
        "%s: kmalloc buffer failed\n",
        VAR_0);

   return VAR_3;
  }
  goto retry;
 }




 VAR_12 = VAR_9->buff + 4;
 while (VAR_12 < VAR_9->buff + VAR_10) {
  switch (VAR_12[1] & 0xf) {
  case 0x4:

   VAR_9->rel_port = (VAR_12[6] << 8) + VAR_12[7];
   break;
  case 0x5:

   VAR_9->group_id = (VAR_12[6] << 8) + VAR_12[7];
   break;
  default:
   break;
  }
  VAR_12 += VAR_12[3] + 4;
 }

 if (VAR_9->group_id == -1) {





  FUNC_1(VAR_1, VAR_8,
       "%s: No target port descriptors found\n",
       VAR_0);
  VAR_9->state = VAR_7;
  VAR_9->tpgs = VAR_6;
  VAR_11 = VAR_4;
 } else {
  FUNC_1(VAR_1, VAR_8,
       "%s: port group %02x rel port %02x\n",
       VAR_0, VAR_9->group_id, VAR_9->rel_port);
 }

 return VAR_11;
}
