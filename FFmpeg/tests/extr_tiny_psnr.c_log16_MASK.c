
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;


 int* VAR_0 ;

__attribute__((used)) static int64_t FUNC_0(uint64_t VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;

    if (VAR_1 < 1 << 16)
        return -FUNC_0((1LL << 32) / VAR_1);
    VAR_1 <<= 16;

    for (VAR_2 = 20; VAR_2 >= 0; VAR_2--) {
        int64_t VAR_4 = VAR_0[VAR_2];
        if (VAR_1 < (VAR_4 << 16))
            continue;
        VAR_3 |= 1 << VAR_2;
        VAR_1 = ((VAR_1 / VAR_4) << 16) + (((VAR_1 % VAR_4) << 16) + VAR_4 / 2) / VAR_4;
    }
    return VAR_3;
}
