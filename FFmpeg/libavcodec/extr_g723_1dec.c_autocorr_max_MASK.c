
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_2(const int16_t *VAR_2, int VAR_3, int *VAR_4,
                        int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = 0;
    int VAR_11;

    VAR_5 = FUNC_0(VAR_1 - 3, VAR_5);
    if (VAR_7 > 0)
        VAR_8 = FUNC_0(VAR_0 + VAR_1 - VAR_3 - VAR_6, VAR_5 + 3);
    else
        VAR_8 = VAR_5 + 3;

    for (VAR_11 = VAR_5 - 3; VAR_11 <= VAR_8; VAR_11++) {
        VAR_9 = FUNC_1(VAR_2, VAR_2 + VAR_7 * VAR_11, VAR_6);

        if (VAR_9 > *VAR_4) {
            *VAR_4 = VAR_9;
            VAR_10 = VAR_11;
        }
    }
    return VAR_10;
}
