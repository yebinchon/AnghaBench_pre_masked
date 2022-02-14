
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* type; void* options; } ;
typedef TYPE_1__ section ;
typedef int list ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 void* FUNC_7 () ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (char*,void*) ;
 int VAR_0 ;
 int FUNC_10 (char*) ;

list *FUNC_11(char *VAR_1)
{
    FILE *VAR_2 = FUNC_3(VAR_1, "r");
    if(VAR_2 == 0) FUNC_2(VAR_1);
    char *VAR_3;
    int VAR_4 = 0;
    list *VAR_5 = FUNC_7();
    section *VAR_6 = 0;
    while((VAR_3=FUNC_1(VAR_2)) != 0){
        ++ VAR_4;
        FUNC_10(VAR_3);
        switch(VAR_3[0]){
            case '[':
                VAR_6 = FUNC_8(sizeof(section));
                FUNC_6(VAR_5, VAR_6);
                VAR_6->options = FUNC_7();
                VAR_6->type = VAR_3;
                break;
            case '\0':
            case '#':
            case ';':
                FUNC_5(VAR_3);
                break;
            default:
                if(!FUNC_9(VAR_3, VAR_6->options)){
                    FUNC_4(VAR_0, "Config file error line %d, could parse: %s\n", VAR_4, VAR_3);
                    FUNC_5(VAR_3);
                }
                break;
        }
    }
    FUNC_0(VAR_2);
    return VAR_5;
}
