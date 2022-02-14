
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(char *VAR_1, int VAR_2)
{
    int VAR_3;
    char *VAR_4 = FUNC_3(sizeof(char) * VAR_2);
    if (!VAR_4)
        return FUNC_0(VAR_0);
    FUNC_4(VAR_4, VAR_1, VAR_2);
    VAR_3 = FUNC_1(VAR_4);
    FUNC_2(VAR_4);
    return VAR_3;
}
