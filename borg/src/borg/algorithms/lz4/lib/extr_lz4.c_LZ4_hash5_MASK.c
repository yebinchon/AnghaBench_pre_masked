
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tableType_t ;
typedef int U64 ;
typedef int U32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ const VAR_1 ;

__attribute__((used)) static U32 FUNC_1(U64 VAR_2, tableType_t const VAR_3)
{
    static const U64 VAR_4 = 889523592379ULL;
    static const U64 VAR_5 = 11400714785074694791ULL;
    const U32 VAR_6 = (VAR_3 == VAR_1) ? VAR_0+1 : VAR_0;
    if (FUNC_0())
        return (U32)(((VAR_2 << 24) * VAR_4) >> (64 - VAR_6));
    else
        return (U32)(((VAR_2 >> 24) * VAR_5) >> (64 - VAR_6));
}
