
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;


 int FUNC_0 (int ,char*,char*,char*) ;
 char* FUNC_1 (int *,char*) ;
 int VAR_0 ;

char *FUNC_2(list *VAR_1, char *VAR_2, char *VAR_3)
{
    char *VAR_4 = FUNC_1(VAR_1, VAR_2);
    if(VAR_4) return VAR_4;
    if(VAR_3) FUNC_0(VAR_0, "%s: Using default '%s'\n", VAR_2, VAR_3);
    return VAR_3;
}
