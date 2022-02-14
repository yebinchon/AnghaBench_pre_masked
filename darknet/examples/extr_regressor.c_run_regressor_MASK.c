
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,char*,int,char*) ;
 int FUNC_3 (int,char**,char*) ;
 char* FUNC_4 (int,char**,char*,int ) ;
 int FUNC_5 (int,char**,char*,int ) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int VAR_1 ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,char*,int*,int,int) ;

void FUNC_13(int VAR_2, char **VAR_3)
{
    if(VAR_2 < 4){
        FUNC_6(VAR_1, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_3[0], VAR_3[1]);
        return;
    }

    char *VAR_4 = FUNC_4(VAR_2, VAR_3, "-gpus", 0);
    int *VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    if(VAR_4){
        FUNC_8("%s\n", VAR_4);
        int VAR_8 = FUNC_11(VAR_4);
        VAR_7 = 1;
        int VAR_9;
        for(VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9){
            if (VAR_4[VAR_9] == ',') ++VAR_7;
        }
        VAR_5 = FUNC_1(VAR_7, sizeof(int));
        for(VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9){
            VAR_5[VAR_9] = FUNC_0(VAR_4);
            VAR_4 = FUNC_9(VAR_4, ',')+1;
        }
    } else {
        VAR_6 = VAR_0;
        VAR_5 = &VAR_6;
        VAR_7 = 1;
    }

    int VAR_10 = FUNC_5(VAR_2, VAR_3, "-c", 0);
    int VAR_11 = FUNC_3(VAR_2, VAR_3, "-clear");
    char *VAR_12 = VAR_3[3];
    char *VAR_13 = VAR_3[4];
    char *VAR_14 = (VAR_2 > 5) ? VAR_3[5] : 0;
    char *VAR_15 = (VAR_2 > 6) ? VAR_3[6]: 0;
    if(0==FUNC_10(VAR_3[2], "test")) FUNC_7(VAR_12, VAR_13, VAR_14);
    else if(0==FUNC_10(VAR_3[2], "train")) FUNC_12(VAR_12, VAR_13, VAR_14, VAR_5, VAR_7, VAR_11);
    else if(0==FUNC_10(VAR_3[2], "demo")) FUNC_2(VAR_12, VAR_13, VAR_14, VAR_10, VAR_15);
}
