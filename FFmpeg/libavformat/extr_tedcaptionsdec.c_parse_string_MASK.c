
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (int *,int*,char) ;
 int FUNC_10 (int *,int*) ;

__attribute__((used)) static int FUNC_11(AVIOContext *VAR_4, int *VAR_5, AVBPrint *VAR_6, int VAR_7)
{
    int VAR_8;

    FUNC_6(VAR_6, 0, VAR_7 ? VAR_2 : VAR_1);
    VAR_8 = FUNC_9(VAR_4, VAR_5, '"');
    if (VAR_8 < 0)
        goto fail;
    while (*VAR_5 > 0 && *VAR_5 != '"') {
        if (*VAR_5 == '\\') {
            FUNC_10(VAR_4, VAR_5);
            if (*VAR_5 < 0) {
                VAR_8 = VAR_0;
                goto fail;
            }
            if ((*VAR_5 | 32) == 'u') {
                unsigned VAR_9 = 0, VAR_10;
                for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
                    FUNC_10(VAR_4, VAR_5);
                    if (!FUNC_2(*VAR_5)) {
                        VAR_8 = FUNC_1(*VAR_5);
                        goto fail;
                    }
                    VAR_9 = VAR_9 * 16 + FUNC_3(*VAR_5);
                }
                FUNC_8(VAR_6, VAR_9);
            } else {
                FUNC_4(VAR_6, *VAR_5, 1);
            }
        } else {
            FUNC_4(VAR_6, *VAR_5, 1);
        }
        FUNC_10(VAR_4, VAR_5);
    }
    VAR_8 = FUNC_9(VAR_4, VAR_5, '"');
    if (VAR_8 < 0)
        goto fail;
    if (VAR_7 && !FUNC_7(VAR_6)) {
        VAR_8 = FUNC_0(VAR_3);
        goto fail;
    }
    return 0;

fail:
    FUNC_5(VAR_6, ((void*)0));
    return VAR_8;
}
