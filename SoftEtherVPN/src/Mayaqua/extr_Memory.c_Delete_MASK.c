
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t num_item; void** p; int num_reserved; } ;
typedef TYPE_1__ LIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void** FUNC_1 (void**,int) ;

bool FUNC_2(LIST *VAR_2, void *VAR_3)
{
 UINT VAR_4, VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 for (VAR_4 = 0;VAR_4 < VAR_2->num_item;VAR_4++)
 {
  if (VAR_2->p[VAR_4] == VAR_3)
  {
   break;
  }
 }
 if (VAR_4 == VAR_2->num_item)
 {
  return 0;
 }

 VAR_5 = VAR_4;
 for (VAR_4 = VAR_5;VAR_4 < (VAR_2->num_item - 1);VAR_4++)
 {
  VAR_2->p[VAR_4] = VAR_2->p[VAR_4 + 1];
 }
 VAR_2->num_item--;
 if ((VAR_2->num_item * 2) <= VAR_2->num_reserved)
 {
  if (VAR_2->num_reserved > (VAR_0 * 2))
  {
   VAR_2->num_reserved = VAR_2->num_reserved / 2;
   VAR_2->p = FUNC_1(VAR_2->p, sizeof(void *) * VAR_2->num_reserved);
  }
 }


 FUNC_0(VAR_1);

 return 1;
}
