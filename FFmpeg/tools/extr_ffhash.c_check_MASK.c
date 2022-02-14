
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int *,int) ;
 char* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(char *VAR_5)
{
    uint8_t VAR_6[VAR_2];
    int VAR_7, VAR_8 = VAR_1;
    int VAR_9 = 0;




    if (VAR_5) VAR_7 = FUNC_5(VAR_5, VAR_8);
    else VAR_7 = 0;
    if (VAR_7 == -1) {
        FUNC_6("%s=OPEN-FAILED: %s:", FUNC_0(VAR_4), FUNC_8(VAR_3));
        VAR_9 = 1;
        goto end;
    }

    FUNC_1(VAR_4);
    for (;;) {
        int VAR_10 = FUNC_7(VAR_7, VAR_6, VAR_2);
        if (VAR_10 < 0) {
            int VAR_11 = VAR_3;
            FUNC_3(VAR_7);
            FUNC_4();
            FUNC_6("+READ-FAILED: %s", FUNC_8(VAR_11));
            VAR_9 = 2;
            goto end;
        } else if(!VAR_10)
            break;
        FUNC_2(VAR_4, VAR_6, VAR_10);
    }
    FUNC_3(VAR_7);

    FUNC_4();
end:
    if (VAR_5)
        FUNC_6(" *%s", VAR_5);
    FUNC_6("\n");

    return VAR_9;
}
