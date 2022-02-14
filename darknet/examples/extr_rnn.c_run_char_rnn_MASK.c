
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 char* FUNC_1 (int,char**,char*,char*) ;
 float FUNC_2 (int,char**,char*,double) ;
 int FUNC_3 (int,char**,char*,int) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int,char*,float,int,char*) ;
 int FUNC_7 (char*,char*,int,float,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,char*,int,int) ;
 int FUNC_10 (char*,char*,char*) ;
 int FUNC_11 (char*,char*,char*) ;
 int FUNC_12 (char*,char*,char*) ;

void FUNC_13(int VAR_1, char **VAR_2)
{
    if(VAR_1 < 4){
        FUNC_4(VAR_0, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_2[0], VAR_2[1]);
        return;
    }
    char *VAR_3 = FUNC_1(VAR_1, VAR_2, "-file", "data/shakespeare.txt");
    char *VAR_4 = FUNC_1(VAR_1, VAR_2, "-seed", "\n\n");
    int VAR_5 = FUNC_3(VAR_1, VAR_2, "-len", 1000);
    float VAR_6 = FUNC_2(VAR_1, VAR_2, "-temp", .7);
    int VAR_7 = FUNC_3(VAR_1, VAR_2, "-srand", FUNC_8(0));
    int VAR_8 = FUNC_0(VAR_1, VAR_2, "-clear");
    int VAR_9 = FUNC_0(VAR_1, VAR_2, "-tokenized");
    char *VAR_10 = FUNC_1(VAR_1, VAR_2, "-tokens", 0);

    char *VAR_11 = VAR_2[3];
    char *VAR_12 = (VAR_1 > 4) ? VAR_2[4] : 0;
    if(0==FUNC_5(VAR_2[2], "train")) FUNC_9(VAR_11, VAR_12, VAR_3, VAR_8, VAR_9);
    else if(0==FUNC_5(VAR_2[2], "valid")) FUNC_10(VAR_11, VAR_12, VAR_4);
    else if(0==FUNC_5(VAR_2[2], "validtactic")) FUNC_11(VAR_11, VAR_12, VAR_4);
    else if(0==FUNC_5(VAR_2[2], "vec")) FUNC_12(VAR_11, VAR_12, VAR_4);
    else if(0==FUNC_5(VAR_2[2], "generate")) FUNC_6(VAR_11, VAR_12, VAR_5, VAR_4, VAR_6, VAR_7, VAR_10);
    else if(0==FUNC_5(VAR_2[2], "generatetactic")) FUNC_7(VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_10);
}
