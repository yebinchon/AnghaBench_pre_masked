
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relationAccessMode; } ;
typedef TYPE_1__ RelationAccessHashEntry ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool
FUNC_4(void)
{
 HASH_SEQ_STATUS VAR_2;
 RelationAccessHashEntry *VAR_3;

 if (!FUNC_0() || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(&VAR_2, VAR_1);

 VAR_3 = (RelationAccessHashEntry *) FUNC_2(&VAR_2);
 while (VAR_3 != ((void*)0))
 {
  int VAR_4 = VAR_3->relationAccessMode;
  if ((VAR_4 & VAR_0))
  {
   FUNC_3(&VAR_2);
   return 1;
  }

  VAR_3 = (RelationAccessHashEntry *) FUNC_2(&VAR_2);
 }

 return 0;
}
