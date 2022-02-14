
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scsi_device*,unsigned char const*,int,void*,unsigned int,char*,int,int,int ,int*) ;
 int FUNC_3 (char*,int ,struct scsi_sense_hdr*) ;

int FUNC_4(struct scsi_device *VAR_3, const unsigned char *VAR_4,
       int VAR_5, void *VAR_6, unsigned VAR_7,
       struct scsi_sense_hdr *VAR_8, int VAR_9, int VAR_10,
       int *VAR_11)
{
 char *VAR_12 = ((void*)0);
 int VAR_13;

 if (VAR_8) {
  VAR_12 = FUNC_1(VAR_2, VAR_1);
  if (!VAR_12)
   return VAR_0 << 24;
 }
 VAR_13 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_12, VAR_9, VAR_10, 0, VAR_11);
 if (VAR_8)
  FUNC_3(VAR_12, VAR_2, VAR_8);

 FUNC_0(VAR_12);
 return VAR_13;
}
