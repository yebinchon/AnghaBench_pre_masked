
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char const*,int) ;
 scalar_t__ FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_1, int *VAR_2, int *VAR_3,
                            const char *VAR_4, int VAR_5, int VAR_6)
{
    char VAR_7[1024];
    int VAR_8, VAR_9, VAR_10, VAR_11;


    for (VAR_11 = VAR_5; VAR_11 < VAR_5 + VAR_6; VAR_11++) {
        if (FUNC_0(VAR_7, sizeof(VAR_7), VAR_4, VAR_11) < 0) {
            *VAR_2 =
            *VAR_3 = 1;
            if (VAR_1 || FUNC_1(VAR_7, VAR_0) > 0)
                return 0;
            return -1;
        }
        if (FUNC_1(VAR_7, VAR_0) > 0)
            break;
    }
    if (VAR_11 == VAR_5 + VAR_6)
        goto fail;


    VAR_9 = VAR_11;
    for (;;) {
        VAR_8 = 0;
        for (;;) {
            if (!VAR_8)
                VAR_10 = 1;
            else
                VAR_10 = 2 * VAR_8;
            if (FUNC_0(VAR_7, sizeof(VAR_7), VAR_4,
                                      VAR_9 + VAR_10) < 0)
                goto fail;
            if (FUNC_1(VAR_7, VAR_0) <= 0)
                break;
            VAR_8 = VAR_10;

            if (VAR_8 >= (1 << 30))
                goto fail;
        }

        if (!VAR_8)
            break;
        VAR_9 += VAR_8;
    }
    *VAR_2 = VAR_11;
    *VAR_3 = VAR_9;
    return 0;

fail:
    return -1;
}
