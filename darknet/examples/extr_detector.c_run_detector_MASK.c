
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;


 int FUNC_0 (char*) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,float,int,char*,char**,int,int,char*,int,float,int,int,int,int) ;
 int FUNC_3 (int,char**,char*) ;
 char* FUNC_4 (int,char**,char*,int ) ;
 float FUNC_5 (int,char**,char*,double) ;
 int FUNC_6 (int,char**,char*,int) ;
 int FUNC_7 (int ,char*,char*,char*) ;
 char** FUNC_8 (char*) ;
 int VAR_0 ;
 int FUNC_9 (int *,char*,int) ;
 char* FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int * FUNC_12 (char*) ;
 int VAR_1 ;
 char* FUNC_13 (char*,char) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,char*,char*,float,float,char*,int) ;
 int FUNC_17 (char*,char*,char*,int*,int,int) ;
 int FUNC_18 (char*,char*,char*,char*) ;
 int FUNC_19 (char*,char*,char*,char*) ;
 int FUNC_20 (char*,char*) ;

void FUNC_21(int VAR_2, char **VAR_3)
{
    char *VAR_4 = FUNC_4(VAR_2, VAR_3, "-prefix", 0);
    float VAR_5 = FUNC_5(VAR_2, VAR_3, "-thresh", .5);
    float VAR_6 = FUNC_5(VAR_2, VAR_3, "-hier", .5);
    int VAR_7 = FUNC_6(VAR_2, VAR_3, "-c", 0);
    int VAR_8 = FUNC_6(VAR_2, VAR_3, "-s", 0);
    int VAR_9 = FUNC_6(VAR_2, VAR_3, "-avg", 3);
    if(VAR_2 < 4){
        FUNC_7(VAR_1, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_3[0], VAR_3[1]);
        return;
    }
    char *VAR_10 = FUNC_4(VAR_2, VAR_3, "-gpus", 0);
    char *VAR_11 = FUNC_4(VAR_2, VAR_3, "-out", 0);
    int *VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = 0;
    if(VAR_10){
        FUNC_11("%s\n", VAR_10);
        int VAR_15 = FUNC_15(VAR_10);
        VAR_14 = 1;
        int VAR_16;
        for(VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16){
            if (VAR_10[VAR_16] == ',') ++VAR_14;
        }
        VAR_12 = FUNC_1(VAR_14, sizeof(int));
        for(VAR_16 = 0; VAR_16 < VAR_14; ++VAR_16){
            VAR_12[VAR_16] = FUNC_0(VAR_10);
            VAR_10 = FUNC_13(VAR_10, ',')+1;
        }
    } else {
        VAR_13 = VAR_0;
        VAR_12 = &VAR_13;
        VAR_14 = 1;
    }

    int VAR_17 = FUNC_3(VAR_2, VAR_3, "-clear");
    int VAR_18 = FUNC_3(VAR_2, VAR_3, "-fullscreen");
    int VAR_19 = FUNC_6(VAR_2, VAR_3, "-w", 0);
    int VAR_20 = FUNC_6(VAR_2, VAR_3, "-h", 0);
    int VAR_21 = FUNC_6(VAR_2, VAR_3, "-fps", 0);


    char *VAR_22 = VAR_3[3];
    char *VAR_23 = VAR_3[4];
    char *VAR_24 = (VAR_2 > 5) ? VAR_3[5] : 0;
    char *VAR_25 = (VAR_2 > 6) ? VAR_3[6]: 0;
    if(0==FUNC_14(VAR_3[2], "test")) FUNC_16(VAR_22, VAR_23, VAR_24, VAR_25, VAR_5, VAR_6, VAR_11, VAR_18);
    else if(0==FUNC_14(VAR_3[2], "train")) FUNC_17(VAR_22, VAR_23, VAR_24, VAR_12, VAR_14, VAR_17);
    else if(0==FUNC_14(VAR_3[2], "valid")) FUNC_18(VAR_22, VAR_23, VAR_24, VAR_11);
    else if(0==FUNC_14(VAR_3[2], "valid2")) FUNC_19(VAR_22, VAR_23, VAR_24, VAR_11);
    else if(0==FUNC_14(VAR_3[2], "recall")) FUNC_20(VAR_23, VAR_24);
    else if(0==FUNC_14(VAR_3[2], "demo")) {
        list *VAR_26 = FUNC_12(VAR_22);
        int VAR_27 = FUNC_9(VAR_26, "classes", 20);
        char *VAR_28 = FUNC_10(VAR_26, "names", "data/names.list");
        char **VAR_29 = FUNC_8(VAR_28);
        FUNC_2(VAR_23, VAR_24, VAR_5, VAR_7, VAR_25, VAR_29, VAR_27, VAR_8, VAR_4, VAR_9, VAR_6, VAR_19, VAR_20, VAR_21, VAR_18);
    }


}
