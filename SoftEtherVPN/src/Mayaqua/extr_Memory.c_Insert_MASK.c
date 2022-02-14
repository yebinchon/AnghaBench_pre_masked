
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int (* cmp ) (void**,void**) ;int sorted; int num_item; int num_reserved; void** p; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (TYPE_1__*,void*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 void** FUNC_3 (void**,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void**,void**) ;

void FUNC_6(LIST *VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 UINT VAR_7;
 int VAR_8;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_2->cmp == ((void*)0))
 {

  FUNC_0(VAR_2, VAR_3);
  return;
 }


 if (VAR_2->sorted == 0)
 {
  FUNC_4(VAR_2);
 }

 VAR_4 = 0;
 VAR_5 = FUNC_2(VAR_2) - 1;

 VAR_7 = VAR_0;

 while (VAR_4 <= VAR_5)
 {
  int VAR_9;

  VAR_6 = (VAR_4 + VAR_5) / 2;
  VAR_9 = VAR_2->cmp(&(VAR_2->p[VAR_6]), &VAR_3);

  if (VAR_9 == 0)
  {
   VAR_7 = VAR_6;
   break;
  }
  else if (VAR_9 > 0)
  {
   VAR_5 = VAR_6 - 1;
  }
  else
  {
   VAR_4 = VAR_6 + 1;
  }
 }

 if (VAR_7 == VAR_0)
 {
  VAR_7 = VAR_4;
 }

 VAR_2->num_item++;
 if (VAR_2->num_item > VAR_2->num_reserved)
 {
  VAR_2->num_reserved *= 2;
  VAR_2->p = FUNC_3(VAR_2->p, sizeof(void *) * VAR_2->num_reserved);
 }

 if (FUNC_2(VAR_2) >= 2)
 {
  for (VAR_8 = (FUNC_2(VAR_2) - 2);VAR_8 >= (int)VAR_7;VAR_8--)
  {
   VAR_2->p[VAR_8 + 1] = VAR_2->p[VAR_8];
  }
 }

 VAR_2->p[VAR_7] = VAR_3;


 FUNC_1(VAR_1);
}
