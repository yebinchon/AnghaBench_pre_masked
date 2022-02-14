
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*) ;

void FUNC_5(int VAR_1, char **VAR_2)
{
    if(VAR_1 < 4){
        FUNC_1(VAR_0, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_2[0], VAR_2[1]);
        return;
    }

    char *VAR_3 = VAR_2[3];
    char *VAR_4 = (VAR_1 > 4) ? VAR_2[4] : 0;
    char *VAR_5 = (VAR_1 > 5) ? VAR_2[5] : 0;
    if(0==FUNC_2(VAR_2[2], "train")) FUNC_4(VAR_3, VAR_4);
    else if(0==FUNC_2(VAR_2[2], "test")) FUNC_3(VAR_3, VAR_4, VAR_5);
    else if(0==FUNC_2(VAR_2[2], "extract")) FUNC_0(VAR_2[3], VAR_2[4], VAR_2[5]);



}
