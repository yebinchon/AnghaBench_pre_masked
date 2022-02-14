
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int flags; int pdev; int * msi_x_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ql_adapter *VAR_2)
{
 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_3(VAR_2->pdev);
  FUNC_0(VAR_0, &VAR_2->flags);
  FUNC_1(VAR_2->msi_x_entry);
  VAR_2->msi_x_entry = ((void*)0);
 } else if (FUNC_4(VAR_1, &VAR_2->flags)) {
  FUNC_2(VAR_2->pdev);
  FUNC_0(VAR_1, &VAR_2->flags);
 }
}
