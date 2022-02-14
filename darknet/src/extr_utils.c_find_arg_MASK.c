
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(int VAR_0, char* VAR_1[], char *VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        if(!VAR_1[VAR_3]) continue;
        if(0==FUNC_1(VAR_1[VAR_3], VAR_2)) {
            FUNC_0(VAR_0, VAR_1, VAR_3);
            return 1;
        }
    }
    return 0;
}
