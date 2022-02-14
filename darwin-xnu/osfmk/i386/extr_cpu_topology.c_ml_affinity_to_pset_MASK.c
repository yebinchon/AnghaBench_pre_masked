
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num; int pset; struct TYPE_3__* next; } ;
typedef TYPE_1__ x86_affinity_set_t ;
typedef scalar_t__ uint32_t ;
typedef int processor_set_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

processor_set_t
FUNC_0(uint32_t VAR_2)
{
 x86_affinity_set_t *VAR_3;

 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  if (VAR_2 == VAR_3->num)
   break;
 }
 return (VAR_3 == ((void*)0)) ? VAR_0 : VAR_3->pset;
}
