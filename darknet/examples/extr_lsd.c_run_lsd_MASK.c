
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 char* FUNC_1 (int,char**,char*,char*) ;
 int FUNC_2 (int,char**,char*,int ) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,char*,int) ;
 int FUNC_8 (char*,char*,char*,char*,int,int) ;
 int FUNC_9 (char*,char*,char*,char*,int,int,char*,int) ;
 int FUNC_10 (char*,char*,char*,char*,int,int,char*,int) ;

void FUNC_11(int VAR_1, char **VAR_2)
{
    if(VAR_1 < 4){
        FUNC_3(VAR_0, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_2[0], VAR_2[1]);
        return;
    }

    int VAR_3 = FUNC_0(VAR_1, VAR_2, "-clear");
    int VAR_4 = FUNC_0(VAR_1, VAR_2, "-display");
    int VAR_5 = FUNC_2(VAR_1, VAR_2, "-b", 0);
    char *VAR_6 = FUNC_1(VAR_1, VAR_2, "-file", "/home/pjreddie/data/imagenet/imagenet1k.train.list");

    char *VAR_7 = VAR_2[3];
    char *VAR_8 = (VAR_1 > 4) ? VAR_2[4] : 0;
    char *VAR_9 = (VAR_1 > 5) ? VAR_2[5] : 0;
    char *VAR_10 = VAR_2[5];
    char *VAR_11 = (VAR_1 > 6) ? VAR_2[6] : 0;




    if(0==FUNC_5(VAR_2[2], "traingan")) FUNC_9(VAR_7, VAR_8, VAR_10, VAR_11, VAR_3, VAR_4, VAR_6, VAR_5);
    else if(0==FUNC_5(VAR_2[2], "trainprog")) FUNC_10(VAR_7, VAR_8, VAR_10, VAR_11, VAR_3, VAR_4, VAR_6, VAR_5);
    else if(0==FUNC_5(VAR_2[2], "traincolor")) FUNC_8(VAR_7, VAR_8, VAR_10, VAR_11, VAR_3, VAR_4);
    else if(0==FUNC_5(VAR_2[2], "gan")) FUNC_6(VAR_7, VAR_8);
    else if(0==FUNC_5(VAR_2[2], "inter")) FUNC_4(VAR_7, VAR_8);
    else if(0==FUNC_5(VAR_2[2], "test")) FUNC_7(VAR_7, VAR_8, VAR_9, 0);
    else if(0==FUNC_5(VAR_2[2], "color")) FUNC_7(VAR_7, VAR_8, VAR_9, 1);



}
