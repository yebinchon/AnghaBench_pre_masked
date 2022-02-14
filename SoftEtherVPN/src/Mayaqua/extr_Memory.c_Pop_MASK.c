
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_item; int no_compact; int num_reserved; void** p; } ;
typedef TYPE_1__ SK ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void** FUNC_1 (void**,int) ;

void *FUNC_2(SK *VAR_2)
{
 void *VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_2->num_item == 0)
 {
  return ((void*)0);
 }
 VAR_3 = VAR_2->p[VAR_2->num_item - 1];
 VAR_2->num_item--;


 if (VAR_2->no_compact == 0)
 {

  if ((VAR_2->num_item * 2) <= VAR_2->num_reserved)
  {
   if (VAR_2->num_reserved >= (VAR_0 * 2))
   {
    VAR_2->num_reserved = VAR_2->num_reserved / 2;
    VAR_2->p = FUNC_1(VAR_2->p, sizeof(void *) * VAR_2->num_reserved);
   }
  }
 }


 FUNC_0(VAR_1);

 return VAR_3;
}
