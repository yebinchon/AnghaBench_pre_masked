
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

char *FUNC_2(int VAR_0, char **VAR_1, char *VAR_2, char *VAR_3)
{
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0-1; ++VAR_4){
        if(!VAR_1[VAR_4]) continue;
        if(0==FUNC_1(VAR_1[VAR_4], VAR_2)){
            VAR_3 = VAR_1[VAR_4+1];
            FUNC_0(VAR_0, VAR_1, VAR_4);
            FUNC_0(VAR_0, VAR_1, VAR_4);
            break;
        }
    }
    return VAR_3;
}
