
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,void*,int ,int*) ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (int *) ;

void
FUNC_4(HTAB *VAR_1)
{
 HASH_SEQ_STATUS VAR_2;
 void *VAR_3 = ((void*)0);

 FUNC_2(&VAR_2, VAR_1);
 while ((VAR_3 = FUNC_3(&VAR_2)) != 0)
 {
  bool VAR_4 = 0;

  FUNC_1(VAR_1, VAR_3, VAR_0, &VAR_4);
  FUNC_0(VAR_4);
 }
}
