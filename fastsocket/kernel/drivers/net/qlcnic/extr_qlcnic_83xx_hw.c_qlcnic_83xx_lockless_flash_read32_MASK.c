
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*,int ,int) ;

int FUNC_4(struct qlcnic_adapter *VAR_3,
          u32 VAR_4, u8 *VAR_5,
          int VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12 = VAR_4;
 ulong VAR_13, VAR_14;

 VAR_11 = VAR_12 & (VAR_1 - 1);
 if (VAR_12 & 0x3) {
  FUNC_1(&VAR_3->pdev->dev, "Illegal addr = 0x%x\n", VAR_12);
  return -VAR_0;
 }

 FUNC_3(VAR_3, VAR_2,
         (VAR_12));

 VAR_10 = VAR_11 + (VAR_6 * sizeof(u32));

 if (VAR_10 > (VAR_1 - 1)) {


  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_13 = FUNC_0(VAR_12);
   VAR_8 = FUNC_2(VAR_3,
         VAR_13);
   if (VAR_8 == -VAR_0)
    return -VAR_0;

   VAR_9 = VAR_8;
   *(u32 *)VAR_5 = VAR_9;
   VAR_5 = VAR_5 + 4;
   VAR_12 = VAR_12 + 4;
   VAR_11 = VAR_11 + 4;

   if (VAR_11 > (VAR_1 - 1)) {
    VAR_14 = VAR_2;

    FUNC_3(VAR_3,
            VAR_14,
            (VAR_12));
    VAR_11 = 0;
   }
  }
 } else {

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_13 = FUNC_0(VAR_12);
   VAR_8 = FUNC_2(VAR_3,
         VAR_13);
   if (VAR_8 == -VAR_0)
    return -VAR_0;

   VAR_9 = VAR_8;
   *(u32 *)VAR_5 = VAR_9;
   VAR_5 = VAR_5 + 4;
   VAR_12 = VAR_12 + 4;
  }
 }

 return 0;
}
