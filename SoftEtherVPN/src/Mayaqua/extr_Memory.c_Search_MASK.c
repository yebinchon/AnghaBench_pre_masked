
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sorted; int * cmp; int num_item; int p; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (void**,int ,int ,int,int (*) (void const*,void const*)) ;

void *FUNC_3(LIST *VAR_1, void *VAR_2)
{
 void **VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_1->cmp == ((void*)0))
 {
  return ((void*)0);
 }


 if (VAR_1->sorted == 0)
 {

  FUNC_1(VAR_1);
 }

 VAR_3 = (void **)FUNC_2(&VAR_2, VAR_1->p, VAR_1->num_item, sizeof(void *),
  (int(*)(const void *, const void *))VAR_1->cmp);


 FUNC_0(VAR_0);

 if (VAR_3 != ((void*)0))
 {
  return *VAR_3;
 }
 else
 {
  return ((void*)0);
 }
}
