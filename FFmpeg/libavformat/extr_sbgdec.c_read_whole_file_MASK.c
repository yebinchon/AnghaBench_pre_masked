
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int,int) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_3, int VAR_4, char **VAR_5)
{
    char *VAR_6 = ((void*)0);
    int VAR_7 = 0, VAR_8 = 0, VAR_9;

    while (1) {
        if (VAR_8 - VAR_7 < 1024) {
            VAR_8 = FUNC_2(FUNC_1(2 * VAR_8, 8192), VAR_4);
            if (VAR_8 - VAR_7 < 2) {
                VAR_7 = FUNC_0(VAR_1);
                goto fail;
            }
            VAR_6 = FUNC_4(VAR_6, VAR_8, 1);
            if (!VAR_6) {
                VAR_7 = FUNC_0(VAR_2);
                goto fail;
            }
        }
        VAR_9 = FUNC_5(VAR_3, VAR_6, VAR_8 - VAR_7 - 1);
        if (VAR_9 == VAR_0)
            break;
        if (VAR_9 < 0)
            goto fail;
        VAR_7 += VAR_9;
    }
    VAR_6[VAR_7] = 0;
    *VAR_5 = VAR_6;
    return VAR_7;
fail:
    FUNC_3(VAR_6);
    return VAR_7;
}
