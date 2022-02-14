
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char*,char*,int,char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 (int,char**,char*,int ) ;
 int FUNC_6 (int,char**,char*,int ) ;
 int FUNC_7 (int ,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_8 (char*,char*,char*,int,char*) ;
 int FUNC_9 (char*,char*,char*) ;
 int FUNC_10 (char*,char*,char*,char*,int) ;
 int* FUNC_11 (char*,int*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*,char*,int) ;
 int FUNC_14 (char*,char*,char*,int,char*) ;
 int FUNC_15 (char*,char*,char*,int*,int,int) ;
 int FUNC_16 (char*,char*,char*,char*,int) ;
 int FUNC_17 (char*,char*,char*) ;
 int FUNC_18 (char*,char*,char*) ;
 int FUNC_19 (char*,char*,char*) ;
 int FUNC_20 (char*,char*,char*) ;
 int FUNC_21 (char*,char*,char*) ;

void FUNC_22(int VAR_2, char **VAR_3)
{
    if(VAR_2 < 4){
        FUNC_7(VAR_1, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_3[0], VAR_3[1]);
        return;
    }

    char *VAR_4 = FUNC_5(VAR_2, VAR_3, "-gpus", 0);
    int VAR_5;
    int *VAR_6 = FUNC_11(VAR_4, &VAR_5, VAR_0);


    int VAR_7 = FUNC_6(VAR_2, VAR_3, "-c", 0);
    int VAR_8 = FUNC_6(VAR_2, VAR_3, "-t", 0);
    int VAR_9 = FUNC_4(VAR_2, VAR_3, "-clear");
    char *VAR_10 = VAR_3[3];
    char *VAR_11 = VAR_3[4];
    char *VAR_12 = (VAR_2 > 5) ? VAR_3[5] : 0;
    char *VAR_13 = (VAR_2 > 6) ? VAR_3[6]: 0;
    char *VAR_14 = (VAR_2 > 7) ? VAR_3[7]: 0;
    int VAR_15 = VAR_14 ? FUNC_0(VAR_14) : -1;
    if(0==FUNC_12(VAR_3[2], "predict")) FUNC_10(VAR_10, VAR_11, VAR_12, VAR_13, VAR_8);
    else if(0==FUNC_12(VAR_3[2], "fout")) FUNC_3(VAR_10, VAR_11, VAR_12, VAR_13);
    else if(0==FUNC_12(VAR_3[2], "try")) FUNC_16(VAR_10, VAR_11, VAR_12, VAR_13, FUNC_0(VAR_14));
    else if(0==FUNC_12(VAR_3[2], "train")) FUNC_15(VAR_10, VAR_11, VAR_12, VAR_6, VAR_5, VAR_9);
    else if(0==FUNC_12(VAR_3[2], "demo")) FUNC_2(VAR_10, VAR_11, VAR_12, VAR_7, VAR_13);
    else if(0==FUNC_12(VAR_3[2], "gun")) FUNC_8(VAR_10, VAR_11, VAR_12, VAR_7, VAR_13);
    else if(0==FUNC_12(VAR_3[2], "threat")) FUNC_14(VAR_10, VAR_11, VAR_12, VAR_7, VAR_13);
    else if(0==FUNC_12(VAR_3[2], "test")) FUNC_13(VAR_10, VAR_11, VAR_12, VAR_15);
    else if(0==FUNC_12(VAR_3[2], "csv")) FUNC_1(VAR_10, VAR_11, VAR_12);
    else if(0==FUNC_12(VAR_3[2], "label")) FUNC_9(VAR_10, VAR_11, VAR_12);
    else if(0==FUNC_12(VAR_3[2], "valid")) FUNC_21(VAR_10, VAR_11, VAR_12);
    else if(0==FUNC_12(VAR_3[2], "validmulti")) FUNC_20(VAR_10, VAR_11, VAR_12);
    else if(0==FUNC_12(VAR_3[2], "valid10")) FUNC_17(VAR_10, VAR_11, VAR_12);
    else if(0==FUNC_12(VAR_3[2], "validcrop")) FUNC_18(VAR_10, VAR_11, VAR_12);
    else if(0==FUNC_12(VAR_3[2], "validfull")) FUNC_19(VAR_10, VAR_11, VAR_12);
}
