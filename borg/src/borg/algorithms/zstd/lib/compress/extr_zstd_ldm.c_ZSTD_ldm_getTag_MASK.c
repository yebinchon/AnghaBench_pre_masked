
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef int U32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static U32 FUNC_1(U64 VAR_0, U32 VAR_1, U32 VAR_2)
{
    FUNC_0(VAR_2 < 32 && VAR_1 <= 32);
    if (32 - VAR_1 < VAR_2) {
        return VAR_0 & (((U32)1 << VAR_2) - 1);
    } else {
        return (VAR_0 >> (32 - VAR_1 - VAR_2)) & (((U32)1 << VAR_2) - 1);
    }
}
