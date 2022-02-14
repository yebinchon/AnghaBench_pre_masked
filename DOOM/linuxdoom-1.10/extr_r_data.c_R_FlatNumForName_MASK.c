
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3 (char* VAR_1)
{
    int VAR_2;
    char VAR_3[9];

    VAR_2 = FUNC_1 (VAR_1);

    if (VAR_2 == -1)
    {
 VAR_3[8] = 0;
 FUNC_2 (VAR_3, VAR_1,8);
 FUNC_0 ("R_FlatNumForName: %s not found",VAR_3);
    }
    return VAR_2 - VAR_0;
}
