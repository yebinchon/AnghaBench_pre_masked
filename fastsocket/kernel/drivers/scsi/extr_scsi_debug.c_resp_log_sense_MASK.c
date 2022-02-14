
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {scalar_t__ cmnd; } ;
typedef int arr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_cmnd*,int,struct sdebug_dev_info*) ;
 int FUNC_1 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct sdebug_dev_info*,int ,int ,int ) ;
 unsigned char FUNC_5 (unsigned char*) ;
 unsigned char FUNC_6 (unsigned char*) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd * VAR_5,
                          struct sdebug_dev_info * VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned char VAR_16[VAR_3];
 unsigned char *VAR_17 = (unsigned char *)VAR_5->cmnd;

 if ((VAR_13 = FUNC_0(VAR_5, 1, VAR_6)))
  return VAR_13;
 FUNC_2(VAR_16, 0, sizeof(VAR_16));
 VAR_7 = VAR_17[1] & 0x2;
 VAR_8 = VAR_17[1] & 0x1;
 if (VAR_7 || VAR_8) {
  FUNC_4(VAR_6, VAR_0,
    VAR_1, 0);
  return VAR_4;
 }
 VAR_9 = (VAR_17[2] & 0xc0) >> 6;
 VAR_10 = VAR_17[2] & 0x3f;
 VAR_11 = VAR_17[3] & 0xff;
 VAR_12 = (VAR_17[7] << 8) + VAR_17[8];
 VAR_16[0] = VAR_10;
 if (0 == VAR_11) {
  switch (VAR_10) {
  case 0x0:
   VAR_15 = 4;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[VAR_15++] = 0xd;
   VAR_16[VAR_15++] = 0x2f;
   VAR_16[3] = VAR_15 - 4;
   break;
  case 0xd:
   VAR_16[3] = FUNC_6(VAR_16 + 4);
   break;
  case 0x2f:
   VAR_16[3] = FUNC_5(VAR_16 + 4);
   break;
  default:
   FUNC_4(VAR_6, VAR_0,
     VAR_1, 0);
   return VAR_4;
  }
 } else if (0xff == VAR_11) {
  VAR_16[0] |= 0x40;
  VAR_16[1] = VAR_11;
  switch (VAR_10) {
  case 0x0:
   VAR_15 = 4;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[VAR_15++] = 0xff;
   VAR_16[VAR_15++] = 0xd;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[VAR_15++] = 0x2f;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[3] = VAR_15 - 4;
   break;
  case 0xd:
   VAR_15 = 4;
   VAR_16[VAR_15++] = 0xd;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[3] = VAR_15 - 4;
   break;
  case 0x2f:
   VAR_15 = 4;
   VAR_16[VAR_15++] = 0x2f;
   VAR_16[VAR_15++] = 0x0;
   VAR_16[3] = VAR_15 - 4;
   break;
  default:
   FUNC_4(VAR_6, VAR_0,
     VAR_1, 0);
   return VAR_4;
  }
 } else {
  FUNC_4(VAR_6, VAR_0,
    VAR_1, 0);
  return VAR_4;
 }
 VAR_14 = FUNC_3(((VAR_16[2] << 8) + VAR_16[3]) + 4, VAR_12);
 return FUNC_1(VAR_5, VAR_16,
      FUNC_3(VAR_14, VAR_2));
}
