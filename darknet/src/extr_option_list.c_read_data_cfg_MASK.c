
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,int,char*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 () ;
 int FUNC_7 (char*,int *) ;
 int VAR_0 ;
 int FUNC_8 (char*) ;

list *FUNC_9(char *VAR_1)
{
    FILE *VAR_2 = FUNC_3(VAR_1, "r");
    if(VAR_2 == 0) FUNC_2(VAR_1);
    char *VAR_3;
    int VAR_4 = 0;
    list *VAR_5 = FUNC_6();
    while((VAR_3=FUNC_1(VAR_2)) != 0){
        ++ VAR_4;
        FUNC_8(VAR_3);
        switch(VAR_3[0]){
            case '\0':
            case '#':
            case ';':
                FUNC_5(VAR_3);
                break;
            default:
                if(!FUNC_7(VAR_3, VAR_5)){
                    FUNC_4(VAR_0, "Config file error line %d, could parse: %s\n", VAR_4, VAR_3);
                    FUNC_5(VAR_3);
                }
                break;
        }
    }
    FUNC_0(VAR_2);
    return VAR_5;
}
