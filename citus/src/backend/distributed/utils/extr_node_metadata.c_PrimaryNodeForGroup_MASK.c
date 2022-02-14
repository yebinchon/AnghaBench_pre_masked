
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {scalar_t__ groupId; } ;
typedef TYPE_1__ WorkerNode ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

WorkerNode *
FUNC_5(int32 VAR_0, bool *VAR_1)
{
 WorkerNode *VAR_2 = ((void*)0);
 HASH_SEQ_STATUS VAR_3;
 HTAB *VAR_4 = FUNC_0();

 FUNC_2(&VAR_3, VAR_4);

 while ((VAR_2 = FUNC_3(&VAR_3)) != ((void*)0))
 {
  int32 VAR_5 = VAR_2->groupId;
  if (VAR_5 != VAR_0)
  {
   continue;
  }

  if (VAR_1 != ((void*)0))
  {
   *VAR_1 = 1;
  }

  if (FUNC_1(VAR_2))
  {
   FUNC_4(&VAR_3);
   return VAR_2;
  }
 }

 return ((void*)0);
}
