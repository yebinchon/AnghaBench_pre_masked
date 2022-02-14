
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t num_item; void** p; } ;
typedef TYPE_1__ SL_LIST ;



bool FUNC_0(SL_LIST *VAR_0, void *VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 for (VAR_2 = 0;VAR_2 < VAR_0->num_item;VAR_2++)
 {
  if (VAR_0->p[VAR_2] == VAR_1)
  {
   break;
  }
 }
 if (VAR_2 == VAR_0->num_item)
 {
  return 0;
 }

 VAR_3 = VAR_2;
 for (VAR_2 = VAR_3;VAR_2 < (VAR_0->num_item - 1);VAR_2++)
 {
  VAR_0->p[VAR_2] = VAR_0->p[VAR_2 + 1];
 }
 VAR_0->num_item--;

 return 1;
}
