
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int pdev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_0, int VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_0))
  return 0;

 VAR_2 = FUNC_0(VAR_0->pdev, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0);

 return VAR_2;
}
