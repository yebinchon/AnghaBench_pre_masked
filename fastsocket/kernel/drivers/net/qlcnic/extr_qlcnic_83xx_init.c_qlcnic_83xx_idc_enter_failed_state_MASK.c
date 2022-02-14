
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* pdev; int ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_3,
           int VAR_4)
{
 if (VAR_4) {
  if (FUNC_4(VAR_3))
   return -VAR_0;
 }

 FUNC_2(VAR_3, 0);
 FUNC_0(VAR_3->ahw, VAR_2, VAR_1);
 if (VAR_4)
  FUNC_5(VAR_3);

 FUNC_3(VAR_3);
 FUNC_1(&VAR_3->pdev->dev, "Device will enter failed state\n");

 return 0;
}
