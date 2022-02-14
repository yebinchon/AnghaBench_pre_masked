
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {int * lkb_resource; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dlm_lkb *VAR_0)
{
 if (VAR_0->lkb_resource) {
  FUNC_0(VAR_0->lkb_resource);
  VAR_0->lkb_resource = ((void*)0);
 }
}
