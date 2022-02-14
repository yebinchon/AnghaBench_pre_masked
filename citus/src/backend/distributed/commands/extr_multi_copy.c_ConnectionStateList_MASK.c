
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;
typedef int CopyConnectionState ;


 int * VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;

__attribute__((used)) static List *
FUNC_3(HTAB *VAR_1)
{
 List *VAR_2 = VAR_0;
 HASH_SEQ_STATUS VAR_3;
 CopyConnectionState *VAR_4 = ((void*)0);

 FUNC_0(&VAR_3, VAR_1);

 VAR_4 = (CopyConnectionState *) FUNC_1(&VAR_3);
 while (VAR_4 != ((void*)0))
 {
  VAR_2 = FUNC_2(VAR_2, VAR_4);

  VAR_4 = (CopyConnectionState *) FUNC_1(&VAR_3);
 }

 return VAR_2;
}
