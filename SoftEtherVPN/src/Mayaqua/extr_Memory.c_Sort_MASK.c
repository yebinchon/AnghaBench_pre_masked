
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sorted; int * cmp; int num_item; int p; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int (*) (void const*,void const*)) ;

void FUNC_2(LIST *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_1->cmp == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1->p, VAR_1->num_item, sizeof(void *), (int(*)(const void *, const void *))VAR_1->cmp);
 VAR_1->sorted = 1;


 FUNC_0(VAR_0);
}
