
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int HTAB ;
typedef int CopyShardState ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int*) ;

__attribute__((used)) static CopyShardState *
FUNC_2(uint64 VAR_1, HTAB *VAR_2,
     HTAB *VAR_3, bool VAR_4, bool *VAR_5)
{
 CopyShardState *VAR_6 = ((void*)0);

 VAR_6 = (CopyShardState *) FUNC_1(VAR_2, &VAR_1,
            VAR_0, VAR_5);
 if (!*VAR_5)
 {
  FUNC_0(VAR_6, VAR_3,
         VAR_1, VAR_4);
 }

 return VAR_6;
}
