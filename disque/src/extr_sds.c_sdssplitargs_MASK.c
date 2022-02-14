
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sds ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char**) ;
 char** FUNC_4 (int) ;
 char** FUNC_5 (char**,int) ;
 char* FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 () ;
 int FUNC_8 (char*) ;

sds *FUNC_9(const char *VAR_0, int *VAR_1) {
    const char *VAR_2 = VAR_0;
    char *VAR_3 = ((void*)0);
    char **VAR_4 = ((void*)0);

    *VAR_1 = 0;
    while(1) {

        while(*VAR_2 && FUNC_2(*VAR_2)) VAR_2++;
        if (*VAR_2) {

            int VAR_5=0;
            int VAR_6=0;
            int VAR_7=0;

            if (VAR_3 == ((void*)0)) VAR_3 = FUNC_7();
            while(!VAR_7) {
                if (VAR_5) {
                    if (*VAR_2 == '\\' && *(VAR_2+1) == 'x' &&
                                             FUNC_1(*(VAR_2+2)) &&
                                             FUNC_1(*(VAR_2+3)))
                    {
                        unsigned char VAR_8;

                        VAR_8 = (FUNC_0(*(VAR_2+2))*16)+
                                FUNC_0(*(VAR_2+3));
                        VAR_3 = FUNC_6(VAR_3,(char*)&VAR_8,1);
                        VAR_2 += 3;
                    } else if (*VAR_2 == '\\' && *(VAR_2+1)) {
                        char VAR_9;

                        VAR_2++;
                        switch(*VAR_2) {
                        case 'n': VAR_9 = '\n'; break;
                        case 'r': VAR_9 = '\r'; break;
                        case 't': VAR_9 = '\t'; break;
                        case 'b': VAR_9 = '\b'; break;
                        case 'a': VAR_9 = '\a'; break;
                        default: VAR_9 = *VAR_2; break;
                        }
                        VAR_3 = FUNC_6(VAR_3,&VAR_9,1);
                    } else if (*VAR_2 == '"') {


                        if (*(VAR_2+1) && !FUNC_2(*(VAR_2+1))) goto err;
                        VAR_7=1;
                    } else if (!*VAR_2) {

                        goto err;
                    } else {
                        VAR_3 = FUNC_6(VAR_3,VAR_2,1);
                    }
                } else if (VAR_6) {
                    if (*VAR_2 == '\\' && *(VAR_2+1) == '\'') {
                        VAR_2++;
                        VAR_3 = FUNC_6(VAR_3,"'",1);
                    } else if (*VAR_2 == '\'') {


                        if (*(VAR_2+1) && !FUNC_2(*(VAR_2+1))) goto err;
                        VAR_7=1;
                    } else if (!*VAR_2) {

                        goto err;
                    } else {
                        VAR_3 = FUNC_6(VAR_3,VAR_2,1);
                    }
                } else {
                    switch(*VAR_2) {
                    case ' ':
                    case '\n':
                    case '\r':
                    case '\t':
                    case '\0':
                        VAR_7=1;
                        break;
                    case '"':
                        VAR_5=1;
                        break;
                    case '\'':
                        VAR_6=1;
                        break;
                    default:
                        VAR_3 = FUNC_6(VAR_3,VAR_2,1);
                        break;
                    }
                }
                if (*VAR_2) VAR_2++;
            }

            VAR_4 = FUNC_5(VAR_4,((*VAR_1)+1)*sizeof(char*));
            VAR_4[*VAR_1] = VAR_3;
            (*VAR_1)++;
            VAR_3 = ((void*)0);
        } else {

            if (VAR_4 == ((void*)0)) VAR_4 = FUNC_4(sizeof(void*));
            return VAR_4;
        }
    }

err:
    while((*VAR_1)--)
        FUNC_8(VAR_4[*VAR_1]);
    FUNC_3(VAR_4);
    if (VAR_3) FUNC_8(VAR_3);
    *VAR_1 = 0;
    return ((void*)0);
}
