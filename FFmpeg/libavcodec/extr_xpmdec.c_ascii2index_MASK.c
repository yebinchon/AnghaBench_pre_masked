
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const uint8_t *VAR_4, int VAR_5)
{
    const uint8_t *VAR_6 = VAR_4;
    int VAR_7 = 0, VAR_8 = 1, VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        if (*VAR_6 < VAR_2 || *VAR_6 > VAR_1)
            return VAR_0;
        VAR_7 += (*VAR_6++ - VAR_2) * VAR_8;
        VAR_8 *= VAR_3;
    }
    return VAR_7;
}
