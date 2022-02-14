
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* sds ;
typedef int buf ;
struct TYPE_2__ {char* eval; int repeat; } ;
typedef int FILE ;


 int FUNC_0 (int,char**,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 size_t FUNC_5 (char*,int,int,int *) ;
 char* FUNC_6 (char*,char*,size_t) ;
 char* FUNC_7 (char*,char*,int) ;
 char* FUNC_8 () ;
 char* FUNC_9 (char*) ;
 int VAR_2 ;
 char* FUNC_10 (int ) ;
 char** FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(int VAR_3, char **VAR_4) {
    sds VAR_5 = FUNC_8();
    FILE *VAR_6;
    char VAR_7[1024];
    size_t VAR_8;
    char **VAR_9;
    int VAR_10, VAR_11 = 0, VAR_12 = 0;


    VAR_6 = FUNC_3(VAR_0.eval,"r");
    if (!VAR_6) {
        FUNC_4(VAR_2,
            "Can't open file '%s': %s\n", VAR_0.eval, FUNC_10(VAR_1));
        FUNC_1(1);
    }
    while((VAR_8 = FUNC_5(VAR_7,1,sizeof(VAR_7),VAR_6)) != 0) {
        VAR_5 = FUNC_6(VAR_5,VAR_7,VAR_8);
    }
    FUNC_2(VAR_6);


    VAR_9 = FUNC_11(sizeof(sds)*(VAR_3+3));
    VAR_9[0] = FUNC_9("EVAL");
    VAR_9[1] = VAR_5;
    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
        if (!VAR_11 && VAR_4[VAR_10][0] == ',' && VAR_4[VAR_10][1] == 0) {
            VAR_11 = 1;
            continue;
        }
        VAR_9[VAR_10+3-VAR_11] = FUNC_9(VAR_4[VAR_10]);
        if (!VAR_11) VAR_12++;
    }
    VAR_9[2] = FUNC_7(FUNC_8(),"%d",VAR_12);


    return FUNC_0(VAR_3+3-VAR_11, VAR_9, VAR_0.repeat);
}
