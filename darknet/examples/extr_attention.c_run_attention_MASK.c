
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 char* FUNC_1 (int,char**,char*,int ) ;
 int FUNC_2 (int,char**,char*,int ) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,char*,char*,char*,int) ;
 int* FUNC_5 (char*,int*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,char*,int*,int,int) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*,char*,char*) ;

void FUNC_10(int VAR_2, char **VAR_3)
{
    if(VAR_2 < 4){
        FUNC_3(VAR_1, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_3[0], VAR_3[1]);
        return;
    }

    char *VAR_4 = FUNC_1(VAR_2, VAR_3, "-gpus", 0);
    int VAR_5;
    int *VAR_6 = FUNC_5(VAR_4, &VAR_5, VAR_0);


    int VAR_7 = FUNC_2(VAR_2, VAR_3, "-t", 0);
    int VAR_8 = FUNC_0(VAR_2, VAR_3, "-clear");
    char *VAR_9 = VAR_3[3];
    char *VAR_10 = VAR_3[4];
    char *VAR_11 = (VAR_2 > 5) ? VAR_3[5] : 0;
    char *VAR_12 = (VAR_2 > 6) ? VAR_3[6]: 0;
    char *VAR_13 = (VAR_2 > 7) ? VAR_3[7]: 0;
    if(0==FUNC_6(VAR_3[2], "predict")) FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12, VAR_7);
    else if(0==FUNC_6(VAR_3[2], "train")) FUNC_7(VAR_9, VAR_10, VAR_11, VAR_6, VAR_5, VAR_8);
    else if(0==FUNC_6(VAR_3[2], "valid")) FUNC_9(VAR_9, VAR_10, VAR_11);
    else if(0==FUNC_6(VAR_3[2], "validmulti")) FUNC_8(VAR_9, VAR_10, VAR_11);
}
