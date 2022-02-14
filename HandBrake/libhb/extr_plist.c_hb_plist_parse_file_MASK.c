
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ) ;
 size_t FUNC_5 (int *) ;
 int * FUNC_6 (char*,size_t) ;
 char* FUNC_7 (size_t) ;

hb_value_t*
FUNC_8(const char *VAR_2)
{
    char *VAR_3;
    size_t VAR_4;
    hb_value_t *VAR_5;
    FILE *VAR_6;

    VAR_6 = FUNC_1(VAR_2, "r");
    if (VAR_6 == ((void*)0))
    {

        return ((void*)0);
    }
    FUNC_4(VAR_6, 0, VAR_0);
    VAR_4 = FUNC_5(VAR_6);
    FUNC_4(VAR_6, 0, VAR_1);
    VAR_3 = FUNC_7(VAR_4+1);
    VAR_4 = FUNC_2(VAR_3, 1, VAR_4, VAR_6);
    VAR_3[VAR_4] = 0;
    VAR_5 = FUNC_6(VAR_3, VAR_4);
    FUNC_3(VAR_3);
    FUNC_0(VAR_6);
    return VAR_5;
}
