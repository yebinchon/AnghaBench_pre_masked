
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int faultinfo; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int ,int,int *) ;

__attribute__((used)) static void FUNC_2(int VAR_0, struct uml_pt_regs * VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->faultinfo);
 FUNC_1(VAR_1->faultinfo, 0, 1, ((void*)0));
}
