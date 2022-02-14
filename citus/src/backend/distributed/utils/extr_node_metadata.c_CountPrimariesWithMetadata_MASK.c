
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {scalar_t__ hasMetadata; } ;
typedef TYPE_1__ WorkerNode ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *) ;

uint32
FUNC_4(void)
{
 uint32 VAR_0 = 0;
 WorkerNode *VAR_1 = ((void*)0);

 HASH_SEQ_STATUS VAR_2;
 HTAB *VAR_3 = FUNC_0();

 FUNC_2(&VAR_2, VAR_3);

 while ((VAR_1 = FUNC_3(&VAR_2)) != ((void*)0))
 {
  if (VAR_1->hasMetadata && FUNC_1(VAR_1))
  {
   VAR_0++;
  }
 }

 return VAR_0;
}
