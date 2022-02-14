
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(int VAR_1, char **VAR_2)
{
    if(VAR_1 < 4){
        FUNC_0(VAR_0, "usage: %s %s [train/test/valid] [cfg] [weights (optional)]\n", VAR_2[0], VAR_2[1]);
        return;
    }

    char *VAR_3 = VAR_2[3];
    char *VAR_4 = (VAR_1 > 4) ? VAR_2[4] : 0;
    if(0==FUNC_1(VAR_2[2], "train")) FUNC_2(VAR_3, VAR_4);
}
