
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char* sds ;
typedef int robj ;
struct TYPE_5__ {char* querybuf; char** argv; size_t argc; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*,size_t,int) ;
 char** FUNC_6 (char*,int*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char**) ;
 char** FUNC_10 (int) ;

int FUNC_11(client *VAR_4) {
    char *VAR_5;
    int VAR_6, VAR_7;
    sds *VAR_8, VAR_9;
    size_t VAR_10;


    VAR_5 = FUNC_8(VAR_4->querybuf,'\n');


    if (VAR_5 == ((void*)0)) {
        if (FUNC_3(VAR_4->querybuf) > VAR_3) {
            FUNC_0(VAR_4,"Protocol error: too big inline request");
            FUNC_7(VAR_4,0);
        }
        return VAR_0;
    }


    if (VAR_5 && VAR_5 != VAR_4->querybuf && *(VAR_5-1) == '\r')
        VAR_5--;


    VAR_10 = VAR_5-(VAR_4->querybuf);
    VAR_9 = FUNC_4(VAR_4->querybuf,VAR_10);
    VAR_8 = FUNC_6(VAR_9,&VAR_6);
    FUNC_2(VAR_9);
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_4,"Protocol error: unbalanced quotes in request");
        FUNC_7(VAR_4,0);
        return VAR_0;
    }


    FUNC_5(VAR_4->querybuf,VAR_10+2,-1);


    if (VAR_4->argv) FUNC_9(VAR_4->argv);
    VAR_4->argv = FUNC_10(sizeof(robj*)*VAR_6);


    for (VAR_4->argc = 0, VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        if (FUNC_3(VAR_8[VAR_7])) {
            VAR_4->argv[VAR_4->argc] = FUNC_1(VAR_2,VAR_8[VAR_7]);
            VAR_4->argc++;
        } else {
            FUNC_2(VAR_8[VAR_7]);
        }
    }
    FUNC_9(VAR_8);
    return VAR_1;
}
