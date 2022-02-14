
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline uint64_t FUNC_1(GetBitContext *VAR_0, int VAR_1)
{
    if (VAR_1 <= 32) {
        return FUNC_0(VAR_0, VAR_1);
    } else {




        uint64_t VAR_2 = (uint64_t) FUNC_0(VAR_0, VAR_1 - 32) << 32;
        return VAR_2 | FUNC_0(VAR_0, 32);

    }
}
