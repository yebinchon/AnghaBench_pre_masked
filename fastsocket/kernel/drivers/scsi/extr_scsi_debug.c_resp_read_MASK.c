
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdebug_dev_info {int* sense_buff; } ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sdebug_dev_info*,unsigned long long,unsigned int) ;
 int FUNC_1 (struct scsi_cmnd*,struct sdebug_dev_info*,unsigned long long,unsigned int,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct sdebug_dev_info*,int ,int,int) ;
 int FUNC_3 (struct scsi_cmnd*,unsigned long long,unsigned int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_10, unsigned long long VAR_11,
       unsigned int VAR_12, struct sdebug_dev_info *VAR_13,
       u32 VAR_14)
{
 unsigned long VAR_15;
 int VAR_16;

 VAR_16 = FUNC_0(VAR_13, VAR_11, VAR_12);
 if (VAR_16)
  return VAR_16;

 if ((VAR_3 & VAR_9) &&
     (VAR_11 <= VAR_2) &&
     ((VAR_11 + VAR_12) > VAR_2)) {

  FUNC_2(VAR_13, VAR_1, VAR_4,
    0);

  if (0x70 == (VAR_13->sense_buff[0] & 0x7f)) {
   VAR_13->sense_buff[0] |= 0x80;
   VAR_16 = VAR_2;
   VAR_13->sense_buff[3] = (VAR_16 >> 24) & 0xff;
   VAR_13->sense_buff[4] = (VAR_16 >> 16) & 0xff;
   VAR_13->sense_buff[5] = (VAR_16 >> 8) & 0xff;
   VAR_13->sense_buff[6] = VAR_16 & 0xff;
  }
  return VAR_6;
 }


 if (VAR_8 && FUNC_6(VAR_10)) {
  int VAR_17 = FUNC_3(VAR_10, VAR_11, VAR_12, VAR_14);

  if (VAR_17) {
   FUNC_2(VAR_13, VAR_0, 0x10, VAR_17);
   return VAR_7;
  }
 }

 FUNC_4(&VAR_5, VAR_15);
 VAR_16 = FUNC_1(VAR_10, VAR_13, VAR_11, VAR_12, 0);
 FUNC_5(&VAR_5, VAR_15);
 return VAR_16;
}
