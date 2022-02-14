
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isValid; } ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_1__ ConnParamsHashEntry ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(void)
{
 if (VAR_0 != ((void*)0))
 {
  ConnParamsHashEntry *VAR_1 = ((void*)0);
  HASH_SEQ_STATUS VAR_2;

  FUNC_0(&VAR_2, VAR_0);
  while ((VAR_1 = (ConnParamsHashEntry *) FUNC_1(&VAR_2)) != ((void*)0))
  {
   VAR_1->isValid = 0;
  }
 }
}
