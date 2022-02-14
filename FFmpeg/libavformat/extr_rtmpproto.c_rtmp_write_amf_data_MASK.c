
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,char*) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **,char*) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int **,char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,int *) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_2, char *VAR_3, uint8_t **VAR_4)
{
    char *VAR_5, *VAR_6;
    char VAR_7;
    if (VAR_3[0] && VAR_3[1] == ':') {
        VAR_7 = VAR_3[0];
        VAR_6 = VAR_3 + 2;
    } else if (VAR_3[0] == 'N' && VAR_3[1] && VAR_3[2] == ':') {
        VAR_7 = VAR_3[1];
        VAR_5 = VAR_3 + 3;
        VAR_6 = FUNC_9(VAR_5, ':');
        if (!VAR_6)
            goto fail;
        *VAR_6 = '\0';
        VAR_6++;

        FUNC_3(VAR_4, VAR_5);
    } else {
        goto fail;
    }

    switch (VAR_7) {
    case 'B':
        FUNC_2(VAR_4, VAR_6[0] != '0');
        break;
    case 'S':
        FUNC_8(VAR_4, VAR_6);
        break;
    case 'N':
        FUNC_5(VAR_4, FUNC_10(VAR_6, ((void*)0)));
        break;
    case 'Z':
        FUNC_4(VAR_4);
        break;
    case 'O':
        if (VAR_6[0] != '0')
            FUNC_7(VAR_4);
        else
            FUNC_6(VAR_4);
        break;
    default:
        goto fail;
        break;
    }

    return 0;

fail:
    FUNC_1(VAR_2, VAR_0, "Invalid AMF parameter: %s\n", VAR_3);
    return FUNC_0(VAR_1);
}
