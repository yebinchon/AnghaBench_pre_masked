
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct adapter {int pdev_dev; TYPE_1__* pdev; } ;
typedef int __be64 ;
struct TYPE_2__ {scalar_t__ error_state; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int const,int) ;
 int FUNC_9 (struct adapter*,int,int) ;
 int FUNC_10 (struct adapter*,int) ;
 int FUNC_11 (struct adapter*,void*,int,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 scalar_t__ VAR_13 ;
 int FUNC_14 (struct adapter*,int) ;
 int FUNC_15 (struct adapter*,int) ;
 int FUNC_16 (struct adapter*,int,int) ;
 int FUNC_17 (struct adapter*,int,int ) ;

int FUNC_18(struct adapter *VAR_14, int VAR_15, const void *VAR_16, int VAR_17,
      void *VAR_18, bool VAR_19)
{
 static const int VAR_20[] = {
  1, 1, 3, 5, 10, 10, 20, 50, 100, 200
 };

 u32 VAR_21;
 u64 VAR_22;
 int VAR_23, VAR_24, VAR_25;
 const __be64 *VAR_26 = VAR_16;
 u32 VAR_27 = FUNC_6(VAR_15, VAR_1);
 u32 VAR_28 = FUNC_6(VAR_15, VAR_0);

 if ((VAR_17 & 15) || VAR_17 > VAR_9)
  return -VAR_3;





 if (VAR_14->pdev->error_state != VAR_13)
  return -VAR_4;

 VAR_21 = FUNC_5(FUNC_14(VAR_14, VAR_28));
 for (VAR_23 = 0; VAR_21 == VAR_12 && VAR_23 < 3; VAR_23++)
  VAR_21 = FUNC_5(FUNC_14(VAR_14, VAR_28));

 if (VAR_21 != VAR_10)
  return VAR_21 ? -VAR_2 : -VAR_5;

 for (VAR_23 = 0; VAR_23 < VAR_17; VAR_23 += 8)
  FUNC_17(VAR_14, VAR_27 + VAR_23, FUNC_7(*VAR_26++));

 FUNC_16(VAR_14, VAR_28, VAR_8 | FUNC_4(VAR_11));
 FUNC_14(VAR_14, VAR_28);

 VAR_25 = 0;
 VAR_24 = VAR_20[0];

 for (VAR_23 = 0; VAR_23 < VAR_6; VAR_23 += VAR_24) {
  if (VAR_19) {
   VAR_24 = VAR_20[VAR_25];
   if (VAR_25 < FUNC_0(VAR_20) - 1)
    VAR_25++;
   FUNC_13(VAR_24);
  } else
   FUNC_12(VAR_24);

  VAR_21 = FUNC_14(VAR_14, VAR_28);
  if (FUNC_5(VAR_21) == VAR_10) {
   if (!(VAR_21 & VAR_8)) {
    FUNC_16(VAR_14, VAR_28, 0);
    continue;
   }

   VAR_22 = FUNC_15(VAR_14, VAR_27);
   if (FUNC_1(VAR_22 >> 32) == VAR_7) {
    FUNC_10(VAR_14, VAR_27);
    VAR_22 = FUNC_2(VAR_4);
   } else if (VAR_18)
    FUNC_11(VAR_14, VAR_18, VAR_17 / 8, VAR_27);

   if (FUNC_3((int)VAR_22))
    FUNC_9(VAR_14, VAR_15, VAR_27);
   FUNC_16(VAR_14, VAR_28, 0);
   return -FUNC_3((int)VAR_22);
  }
 }

 FUNC_9(VAR_14, VAR_15, VAR_27);
 FUNC_8(VAR_14->pdev_dev, "command %#x in mailbox %d timed out\n",
  *(const u8 *)VAR_16, VAR_15);
 return -VAR_5;
}
