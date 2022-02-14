
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,float,int,char*,int ,int,int,char*,int,double,int ,int ,int ,int ) ;
 char* FUNC_1 (int,char**,char*,int ) ;
 float FUNC_2 (int,char**,char*,double) ;
 int FUNC_3 (int,char**,char*,int) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,char*,float) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;

void FUNC_10(int VAR_2, char **VAR_3)
{
    char *VAR_4 = FUNC_1(VAR_2, VAR_3, "-prefix", 0);
    float VAR_5 = FUNC_2(VAR_2, VAR_3, "-thresh", .2);
    int VAR_6 = FUNC_3(VAR_2, VAR_3, "-c", 0);
    int VAR_7 = FUNC_3(VAR_2, VAR_3, "-s", 0);

    if(VAR_2 < 4){
        FUNC_4(VAR_1, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_3[0], VAR_3[1]);
        return;
    }

    char *VAR_8 = VAR_3[3];
    char *VAR_9 = (VAR_2 > 4) ? VAR_3[4] : 0;
    char *VAR_10 = (VAR_2 > 5) ? VAR_3[5]: 0;
    int VAR_11 = FUNC_3(VAR_2, VAR_3, "-avg", 1);
    if(0==FUNC_5(VAR_3[2], "test")) FUNC_6(VAR_8, VAR_9, VAR_10, VAR_5);
    else if(0==FUNC_5(VAR_3[2], "train")) FUNC_7(VAR_8, VAR_9);
    else if(0==FUNC_5(VAR_3[2], "valid")) FUNC_8(VAR_8, VAR_9);
    else if(0==FUNC_5(VAR_3[2], "recall")) FUNC_9(VAR_8, VAR_9);
    else if(0==FUNC_5(VAR_3[2], "demo")) FUNC_0(VAR_8, VAR_9, VAR_5, VAR_6, VAR_10, VAR_0, 80, VAR_7, VAR_4, VAR_11, .5, 0,0,0,0);
}
