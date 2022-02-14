
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(uint64_t VAR_1)
{
    int VAR_2, VAR_3;
    int64_t VAR_4;

    if (VAR_1 == VAR_0)
    {
        return 0;
    }
    for (VAR_2 = 0, VAR_3 = 0, VAR_4 = 1;
         VAR_2 < 64 && VAR_3 < 2; VAR_2++, VAR_4 <<= 1)
    {
        if (VAR_1 & VAR_4)
        {
            VAR_3++;
        }
    }
    return VAR_3 == 1;
}
