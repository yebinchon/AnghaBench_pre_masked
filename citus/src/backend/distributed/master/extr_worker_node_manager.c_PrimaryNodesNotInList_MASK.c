
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WorkerNode ;
typedef int List ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;

__attribute__((used)) static List *
FUNC_6(List *VAR_1)
{
 List *VAR_2 = VAR_0;
 HTAB *VAR_3 = FUNC_0();
 WorkerNode *VAR_4 = ((void*)0);
 HASH_SEQ_STATUS VAR_5;

 FUNC_3(&VAR_5, VAR_3);

 while ((VAR_4 = FUNC_4(&VAR_5)) != ((void*)0))
 {
  if (FUNC_1(VAR_1, VAR_4))
  {
   continue;
  }

  if (FUNC_2(VAR_4))
  {
   VAR_2 = FUNC_5(VAR_2, VAR_4);
  }
 }

 return VAR_2;
}
