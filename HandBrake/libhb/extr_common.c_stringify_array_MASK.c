
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_value_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int *) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static char * FUNC_7(int VAR_2, hb_value_array_t * VAR_3)
{
    char * VAR_4 = FUNC_6("");
    int VAR_5;
    int VAR_6 = FUNC_4(VAR_3);
    int VAR_7 = 1;

    if (FUNC_4(VAR_3) == 0)
    {
        return VAR_4;
    }
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
        hb_value_t * VAR_8 = FUNC_3(VAR_3, VAR_5);
        char * VAR_9 = FUNC_2(VAR_2, VAR_8);
        if (VAR_9 != ((void*)0))
        {
            if (!VAR_7)
            {
                VAR_4 = FUNC_0(VAR_4, ",");
            }
            VAR_7 = 0;
            if (FUNC_5(VAR_8) == VAR_1)
            {
                VAR_4 = FUNC_0(VAR_4, VAR_9);
            }
            else if (FUNC_5(VAR_8) == VAR_0)
            {
                VAR_4 = FUNC_0(VAR_4, "[");
                VAR_4 = FUNC_0(VAR_4, VAR_9);
                VAR_4 = FUNC_0(VAR_4, "]");
            }
            else
            {
                VAR_4 = FUNC_0(VAR_4, VAR_9);
            }
            FUNC_1(VAR_9);
        }
    }

    return VAR_4;
}
