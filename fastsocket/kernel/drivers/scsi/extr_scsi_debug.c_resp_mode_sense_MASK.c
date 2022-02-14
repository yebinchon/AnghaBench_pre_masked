
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdebug_dev_info {int target; TYPE_2__* sdbg_host; } ;
struct scsi_cmnd {scalar_t__ cmnd; } ;
struct TYPE_4__ {TYPE_1__* shost; } ;
struct TYPE_3__ {int host_no; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct scsi_cmnd*,int,struct sdebug_dev_info*) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct sdebug_dev_info*,int ,int ,int ) ;
 int FUNC_7 (unsigned char*,int,int) ;
 int FUNC_8 (unsigned char*,int,int) ;
 int FUNC_9 (unsigned char*,int,int) ;
 int FUNC_10 (unsigned char*,int,int) ;
 int FUNC_11 (unsigned char*,int,int) ;
 int FUNC_12 (unsigned char*,int,int) ;
 int FUNC_13 (unsigned char*,int,int,int) ;
 int FUNC_14 (unsigned char*,int,int) ;
 int FUNC_15 (unsigned char*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_16(struct scsi_cmnd * VAR_9, int VAR_10,
      struct sdebug_dev_info * VAR_11)
{
 unsigned char VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned char VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 unsigned char * VAR_26;
 unsigned char VAR_27[VAR_4];
 unsigned char *VAR_28 = (unsigned char *)VAR_9->cmnd;

 if ((VAR_24 = FUNC_1(VAR_9, 1, VAR_11)))
  return VAR_24;
 VAR_12 = !!(VAR_28[1] & 0x8);
 VAR_14 = (VAR_28[2] & 0xc0) >> 6;
 VAR_15 = VAR_28[2] & 0x3f;
 VAR_16 = VAR_28[3];
 VAR_21 = (VAR_2 == VAR_28[0]);
 VAR_13 = VAR_21 ? 0 : !!(VAR_28[1] & 0x10);
 if ((0 == VAR_6) && (0 == VAR_12))
  VAR_17 = VAR_13 ? 16 : 8;
 else
  VAR_17 = 0;
 VAR_20 = VAR_21 ? VAR_28[4] : ((VAR_28[7] << 8) | VAR_28[8]);
 FUNC_4(VAR_27, 0, VAR_4);
 if (0x3 == VAR_14) {
  FUNC_6(VAR_11, VAR_0, VAR_3,
           0);
  return VAR_5;
 }
 VAR_25 = ((VAR_11->sdbg_host->shost->host_no + 1) * 2000) +
   (VAR_11->target * 1000) - 3;

 if (0 == VAR_6)
  VAR_18 = (FUNC_0(VAR_10) ? 0x80 : 0x0) | 0x10;
 else
  VAR_18 = 0x0;
 if (VAR_21) {
  VAR_27[2] = VAR_18;
  VAR_27[3] = VAR_17;
  VAR_22 = 4;
 } else {
  VAR_27[3] = VAR_18;
  if (16 == VAR_17)
   VAR_27[4] = 0x1;
  VAR_27[7] = VAR_17;
  VAR_22 = 8;
 }
 VAR_26 = VAR_27 + VAR_22;
 if ((VAR_17 > 0) && (!VAR_8))
  VAR_8 = FUNC_3();

 if (8 == VAR_17) {
  if (VAR_8 > 0xfffffffe) {
   VAR_26[0] = 0xff;
   VAR_26[1] = 0xff;
   VAR_26[2] = 0xff;
   VAR_26[3] = 0xff;
  } else {
   VAR_26[0] = (VAR_8 >> 24) & 0xff;
   VAR_26[1] = (VAR_8 >> 16) & 0xff;
   VAR_26[2] = (VAR_8 >> 8) & 0xff;
   VAR_26[3] = VAR_8 & 0xff;
  }
  VAR_26[6] = (VAR_7 >> 8) & 0xff;
  VAR_26[7] = VAR_7 & 0xff;
  VAR_22 += VAR_17;
  VAR_26 = VAR_27 + VAR_22;
 } else if (16 == VAR_17) {
  unsigned long long VAR_29 = VAR_8;

         for (VAR_19 = 0; VAR_19 < 8; ++VAR_19, VAR_29 >>= 8)
                 VAR_26[7 - VAR_19] = VAR_29 & 0xff;
  VAR_26[12] = (VAR_7 >> 24) & 0xff;
  VAR_26[13] = (VAR_7 >> 16) & 0xff;
  VAR_26[14] = (VAR_7 >> 8) & 0xff;
  VAR_26[15] = VAR_7 & 0xff;
  VAR_22 += VAR_17;
  VAR_26 = VAR_27 + VAR_22;
 }

 if ((VAR_16 > 0x0) && (VAR_16 < 0xff) && (0x19 != VAR_15)) {

  FUNC_6(VAR_11, VAR_0, VAR_1,
           0);
  return VAR_5;
 }
 switch (VAR_15) {
 case 0x1:
  VAR_23 = FUNC_10(VAR_26, VAR_14, VAR_10);
  VAR_22 += VAR_23;
  break;
 case 0x2:
  VAR_23 = FUNC_9(VAR_26, VAR_14, VAR_10);
  VAR_22 += VAR_23;
  break;
        case 0x3:
                VAR_23 = FUNC_11(VAR_26, VAR_14, VAR_10);
                VAR_22 += VAR_23;
                break;
 case 0x8:
  VAR_23 = FUNC_7(VAR_26, VAR_14, VAR_10);
  VAR_22 += VAR_23;
  break;
 case 0xa:
  VAR_23 = FUNC_8(VAR_26, VAR_14, VAR_10);
  VAR_22 += VAR_23;
  break;
 case 0x19:
  if ((VAR_16 > 0x2) && (VAR_16 < 0xff)) {
          FUNC_6(VAR_11, VAR_0,
     VAR_1, 0);
   return VAR_5;
         }
  VAR_23 = 0;
  if ((0x0 == VAR_16) || (0xff == VAR_16))
   VAR_23 += FUNC_14(VAR_26 + VAR_23, VAR_14, VAR_10);
  if ((0x1 == VAR_16) || (0xff == VAR_16))
   VAR_23 += FUNC_13(VAR_26 + VAR_23, VAR_14, VAR_10,
        VAR_25);
  if ((0x2 == VAR_16) || (0xff == VAR_16))
   VAR_23 += FUNC_15(VAR_26 + VAR_23, VAR_14);
  VAR_22 += VAR_23;
  break;
 case 0x1c:
  VAR_23 = FUNC_12(VAR_26, VAR_14, VAR_10);
  VAR_22 += VAR_23;
  break;
 case 0x3f:
  if ((0 == VAR_16) || (0xff == VAR_16)) {
   VAR_23 = FUNC_10(VAR_26, VAR_14, VAR_10);
   VAR_23 += FUNC_9(VAR_26 + VAR_23, VAR_14, VAR_10);
   VAR_23 += FUNC_11(VAR_26 + VAR_23, VAR_14, VAR_10);
   VAR_23 += FUNC_7(VAR_26 + VAR_23, VAR_14, VAR_10);
   VAR_23 += FUNC_8(VAR_26 + VAR_23, VAR_14, VAR_10);
   VAR_23 += FUNC_14(VAR_26 + VAR_23, VAR_14, VAR_10);
   if (0xff == VAR_16) {
    VAR_23 += FUNC_13(VAR_26 + VAR_23, VAR_14,
        VAR_10, VAR_25);
    VAR_23 += FUNC_15(VAR_26 + VAR_23, VAR_14);
   }
   VAR_23 += FUNC_12(VAR_26 + VAR_23, VAR_14, VAR_10);
  } else {
   FUNC_6(VAR_11, VAR_0,
     VAR_1, 0);
   return VAR_5;
                }
  VAR_22 += VAR_23;
  break;
 default:
  FUNC_6(VAR_11, VAR_0, VAR_1,
           0);
  return VAR_5;
 }
 if (VAR_21)
  VAR_27[0] = VAR_22 - 1;
 else {
  VAR_27[0] = ((VAR_22 - 2) >> 8) & 0xff;
  VAR_27[1] = (VAR_22 - 2) & 0xff;
 }
 return FUNC_2(VAR_9, VAR_27, FUNC_5(VAR_20, VAR_22));
}
