
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XXH64_hash_t ;
typedef int XXH64_canonical_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(XXH64_canonical_t* VAR_1, XXH64_hash_t VAR_2)
{
    FUNC_0(sizeof(XXH64_canonical_t) == sizeof(XXH64_hash_t));
    if (VAR_0) VAR_2 = FUNC_1(VAR_2);
    FUNC_2(VAR_1, &VAR_2, sizeof(*VAR_1));
}
