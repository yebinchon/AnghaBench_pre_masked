
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int flags; int pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct bnx2x *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->pdev);
 if (VAR_2) {
  FUNC_0("MSI is not attainable\n");
  return -1;
 }
 VAR_1->flags |= VAR_0;

 return 0;
}
