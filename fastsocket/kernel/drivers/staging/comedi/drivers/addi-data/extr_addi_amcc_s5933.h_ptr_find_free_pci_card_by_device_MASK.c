
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {unsigned short device; unsigned short vendor; int used; struct pcilst_struct* next; } ;


 struct pcilst_struct* VAR_0 ;

struct pcilst_struct *FUNC_0(unsigned short VAR_1,
             unsigned short VAR_2)
{
 struct pcilst_struct *VAR_3, *VAR_4;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->next;
  if ((!VAR_3->used) && (VAR_3->device == VAR_2)
      && (VAR_3->vendor == VAR_1))
   return VAR_3;

 }

 return ((void*)0);
}
