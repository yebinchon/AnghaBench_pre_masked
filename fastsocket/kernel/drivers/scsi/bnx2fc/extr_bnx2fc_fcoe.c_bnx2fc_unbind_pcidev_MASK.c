
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2fc_hba {char* chip_num; int * pcidev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bnx2fc_hba *VAR_0)
{
 if (VAR_0->pcidev) {
  VAR_0->chip_num[0] = '\0';
  FUNC_0(VAR_0->pcidev);
 }
 VAR_0->pcidev = ((void*)0);
}
