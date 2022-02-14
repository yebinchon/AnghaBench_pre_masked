
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int **,scalar_t__ const*,scalar_t__ const*,int ) ;
 int FUNC_1 (scalar_t__ const*) ;

int FUNC_2(const uint8_t *VAR_1, int VAR_2, AVDictionary **VAR_3)
{
    const uint8_t *VAR_4;
    int VAR_5 = 0;

    if (!VAR_3 || !VAR_1 || !VAR_2)
        return VAR_5;
    VAR_4 = VAR_1 + VAR_2;
    if (VAR_2 && VAR_4[-1])
        return VAR_0;
    while (VAR_1 < VAR_4) {
        const uint8_t *VAR_6 = VAR_1;
        const uint8_t *VAR_7 = VAR_1 + FUNC_1(VAR_6) + 1;

        if (VAR_7 >= VAR_4 || !*VAR_6)
            return VAR_0;

        VAR_5 = FUNC_0(VAR_3, VAR_6, VAR_7, 0);
        if (VAR_5 < 0)
            break;
        VAR_1 = VAR_7 + FUNC_1(VAR_7) + 1;
    }

    return VAR_5;
}
