
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sorted; int num_reserved; int num_item; int p; int cmp; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

LIST *FUNC_4(LIST *VAR_0)
{
 LIST *VAR_1 = FUNC_2(VAR_0->cmp);


 FUNC_0(VAR_1->p);
 VAR_1->p = FUNC_3(VAR_0);
 VAR_1->num_item = VAR_1->num_reserved = FUNC_1(VAR_0);
 VAR_1->sorted = VAR_0->sorted;

 return VAR_1;
}
