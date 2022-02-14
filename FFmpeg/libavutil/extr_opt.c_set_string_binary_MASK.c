
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVOption ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, const AVOption *VAR_3, const char *VAR_4, uint8_t **VAR_5)
{
    int *VAR_6 = (int *)(VAR_5 + 1);
    uint8_t *VAR_7, *VAR_8;
    int VAR_9;

    FUNC_2(VAR_5);
    *VAR_6 = 0;

    if (!VAR_4 || !(VAR_9 = FUNC_5(VAR_4)))
        return 0;

    if (VAR_9 & 1)
        return FUNC_0(VAR_0);
    VAR_9 /= 2;

    VAR_8 = VAR_7 = FUNC_3(VAR_9);
    if (!VAR_8)
        return FUNC_0(VAR_1);
    while (*VAR_4) {
        int VAR_10 = FUNC_4(*VAR_4++);
        int VAR_11 = FUNC_4(*VAR_4++);
        if (VAR_10 < 0 || VAR_11 < 0) {
            FUNC_1(VAR_7);
            return FUNC_0(VAR_0);
        }
        *VAR_8++ = (VAR_10 << 4) | VAR_11;
    }
    *VAR_5 = VAR_7;
    *VAR_6 = VAR_9;

    return 0;
}
