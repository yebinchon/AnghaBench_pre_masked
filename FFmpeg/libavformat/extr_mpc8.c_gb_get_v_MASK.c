
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline int64_t FUNC_2(GetBitContext *VAR_0)
{
    uint64_t VAR_1 = 0;
    int VAR_2 = 0;
    while(FUNC_1(VAR_0) && VAR_2 < 64-7){
        VAR_1 <<= 7;
        VAR_1 |= FUNC_0(VAR_0, 7);
        VAR_2 += 7;
    }
    VAR_1 <<= 7;
    VAR_1 |= FUNC_0(VAR_0, 7);

    return VAR_1;
}
