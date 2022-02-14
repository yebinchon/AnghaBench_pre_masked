
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_6,
       u32 VAR_7, u32 *VAR_8)
{
 FUNC_1(VAR_6, VAR_2, VAR_7);
 FUNC_1(VAR_6, VAR_3, 0);
 FUNC_1(VAR_6, VAR_1, 3);
 FUNC_1(VAR_6, VAR_4, 0xb);
 if (FUNC_3(VAR_6)) {
  FUNC_2(&VAR_6->pdev->dev, "Error waiting for rom done\n");
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_1, 0);
 FUNC_4(10);
 FUNC_1(VAR_6, VAR_3, 0);

 *VAR_8 = FUNC_0(VAR_6, VAR_5);
 return 0;
}
