
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;

void FUNC_10(int VAR_1, char **VAR_2)
{
    if(VAR_1 < 4){
        FUNC_2(VAR_0, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_2[0], VAR_2[1]);
        return;
    }

    char *VAR_3 = VAR_2[3];
    char *VAR_4 = (VAR_1 > 4) ? VAR_2[4] : 0;
    if(0==FUNC_3(VAR_2[2], "train")) FUNC_8(VAR_3, VAR_4);
    else if(0==FUNC_3(VAR_2[2], "extract")) FUNC_1();
    else if(0==FUNC_3(VAR_2[2], "distill")) FUNC_9(VAR_3, VAR_4);
    else if(0==FUNC_3(VAR_2[2], "test")) FUNC_4(VAR_3, VAR_4);
    else if(0==FUNC_3(VAR_2[2], "multi")) FUNC_7(VAR_3, VAR_4);
    else if(0==FUNC_3(VAR_2[2], "csv")) FUNC_5(VAR_3, VAR_4);
    else if(0==FUNC_3(VAR_2[2], "csvtrain")) FUNC_6(VAR_3, VAR_4);
    else if(0==FUNC_3(VAR_2[2], "eval")) FUNC_0();
}
