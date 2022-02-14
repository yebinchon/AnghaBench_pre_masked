
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_lun {int* scsi_lun; } ;
struct scsi_cmnd {scalar_t__ cmnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct sdebug_dev_info*,int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd * VAR_8,
       struct sdebug_dev_info * VAR_9)
{
 unsigned int VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned char *VAR_18 = (unsigned char *)VAR_8->cmnd;
 int VAR_19 = (int)VAR_18[2];
 struct scsi_lun *VAR_20;
 unsigned char VAR_21[VAR_4];
 unsigned char * VAR_22;

 VAR_10 = VAR_18[9] + (VAR_18[8] << 8) + (VAR_18[7] << 16) + (VAR_18[6] << 24);
 if ((VAR_10 < 4) || (VAR_19 > 2)) {
  FUNC_3(VAR_9, VAR_0, VAR_1,
           0);
  return VAR_5;
 }

 FUNC_1(VAR_21, 0, VAR_4);
 VAR_11 = VAR_6;
 if (1 == VAR_19)
  VAR_11 = 0;
 else if (VAR_7 && (VAR_11 > 0))
  --VAR_11;
 VAR_16 = (VAR_19 > 0) ? 1 : 0;
 VAR_14 = VAR_11 + VAR_16;
 VAR_21[2] = ((sizeof(struct scsi_lun) * VAR_14) >> 8) & 0xff;
 VAR_21[3] = (sizeof(struct scsi_lun) * VAR_14) & 0xff;
 VAR_15 = FUNC_2((int)((VAR_4 - 8) /
       sizeof(struct scsi_lun)), VAR_14);
 if (VAR_15 < VAR_14) {
  VAR_16 = 0;
  VAR_11 = VAR_15;
 }
 VAR_20 = (struct scsi_lun *) &VAR_21[8];
 VAR_22 = VAR_21 + VAR_4;
 for (VAR_12 = 0, VAR_17 = (VAR_7 ? 1 : 0);
             ((VAR_12 < VAR_11) && ((unsigned char *)(VAR_20 + VAR_12) < VAR_22));
      VAR_12++, VAR_17++) {
  VAR_13 = (VAR_17 >> 8) & 0x3f;
  if (VAR_13)
   VAR_20[VAR_12].scsi_lun[0] =
       (VAR_13 | (VAR_2 << 6));
  VAR_20[VAR_12].scsi_lun[1] = VAR_17 & 0xff;
 }
 if (VAR_16) {
  VAR_20[VAR_12].scsi_lun[0] = (VAR_3 >> 8) & 0xff;
  VAR_20[VAR_12].scsi_lun[1] = VAR_3 & 0xff;
  VAR_12++;
 }
 VAR_10 = (unsigned char *)(VAR_20 + VAR_12) - VAR_21;
 return FUNC_0(VAR_8, VAR_21,
        FUNC_2((int)VAR_10, VAR_4));
}
