
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;


 float FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,float) ;
 char* FUNC_2 (int *,char*) ;
 int VAR_0 ;

float FUNC_3(list *VAR_1, char *VAR_2, float VAR_3)
{
    char *VAR_4 = FUNC_2(VAR_1, VAR_2);
    if(VAR_4) return FUNC_0(VAR_4);
    FUNC_1(VAR_0, "%s: Using default '%f'\n", VAR_2, VAR_3);
    return VAR_3;
}
