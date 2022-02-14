
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
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*,int ,int) ;

int FUNC_6(struct qlcnic_adapter *VAR_2, u32 VAR_3,
        u8 *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8, VAR_9 = VAR_3;
 ulong VAR_10;

 if (FUNC_2(VAR_2) != 0)
  return -VAR_0;

 if (VAR_9 & 0x3) {
  FUNC_1(&VAR_2->pdev->dev, "Illegal addr = 0x%x\n", VAR_9);
  FUNC_4(VAR_2);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_5(VAR_2,
       VAR_1,
       (VAR_9))) {
   FUNC_4(VAR_2);
   return -VAR_0;
  }

  VAR_10 = FUNC_0(VAR_9);
  VAR_7 = FUNC_3(VAR_2,
        VAR_10);
  if (VAR_7 == -VAR_0)
   return -VAR_0;
  VAR_8 = VAR_7;
  *(u32 *)VAR_4 = VAR_8;
  VAR_4 = VAR_4 + 4;
  VAR_9 = VAR_9 + 4;
 }

 FUNC_4(VAR_2);

 return 0;
}
