
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int,float,float,float,int,int) ;
 int FUNC_3 (int,char**,char*) ;
 char* FUNC_4 (int,char**,char*,int ) ;
 float FUNC_5 (int,char**,char*,double) ;
 int FUNC_6 (int,char**,char*,int) ;
 int FUNC_7 (int ,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*,char*,char*,int) ;
 int VAR_1 ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char*,char*,int*,int,int) ;
 int FUNC_15 (char*,char*,int,char*) ;

void FUNC_16(int VAR_2, char **VAR_3)
{

    if(VAR_2 < 4){
        FUNC_7(VAR_1, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_3[0], VAR_3[1]);
        return;
    }

    char *VAR_4 = FUNC_4(VAR_2, VAR_3, "-gpus", 0);
    int *VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    if(VAR_4){
        FUNC_8("%s\n", VAR_4);
        int VAR_8 = FUNC_12(VAR_4);
        VAR_7 = 1;
        int VAR_9;
        for(VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9){
            if (VAR_4[VAR_9] == ',') ++VAR_7;
        }
        VAR_5 = FUNC_1(VAR_7, sizeof(int));
        for(VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9){
            VAR_5[VAR_9] = FUNC_0(VAR_4);
            VAR_4 = FUNC_10(VAR_4, ',')+1;
        }
    } else {
        VAR_6 = VAR_0;
        VAR_5 = &VAR_6;
        VAR_7 = 1;
    }
    int VAR_10 = FUNC_3(VAR_2, VAR_3, "-clear");

    char *VAR_11 = VAR_3[3];
    char *VAR_12 = (VAR_2 > 4) ? VAR_3[4] : 0;
    char *VAR_13 = (VAR_2 > 5) ? VAR_3[5] : 0;
    char *VAR_14 = (VAR_2 > 6) ? VAR_3[6] : 0;
    int VAR_15 = FUNC_3(VAR_2, VAR_3, "-multi");
    int VAR_16 = FUNC_3(VAR_2, VAR_3, "-anon");
    int VAR_17 = FUNC_6(VAR_2, VAR_3, "-iters", 500);
    int VAR_18 = FUNC_6(VAR_2, VAR_3, "-resign", 175);
    float VAR_19 = FUNC_5(VAR_2, VAR_3, "-cpuct", 5);
    float VAR_20 = FUNC_5(VAR_2, VAR_3, "-temp", .1);
    float VAR_21 = FUNC_5(VAR_2, VAR_3, "-time", 0);
    if(0==FUNC_11(VAR_3[2], "train")) FUNC_14(VAR_11, VAR_12, VAR_13, VAR_5, VAR_7, VAR_10);
    else if(0==FUNC_11(VAR_3[2], "valid")) FUNC_15(VAR_11, VAR_12, VAR_15, VAR_13);
    else if(0==FUNC_11(VAR_3[2], "self")) FUNC_9(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
    else if(0==FUNC_11(VAR_3[2], "test")) FUNC_13(VAR_11, VAR_12, VAR_15);
    else if(0==FUNC_11(VAR_3[2], "engine")) FUNC_2(VAR_11, VAR_12, VAR_17, VAR_21, VAR_20, VAR_19, VAR_16, VAR_18);
}
