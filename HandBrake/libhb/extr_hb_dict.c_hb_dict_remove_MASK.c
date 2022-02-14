
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_dict_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char const*) ;

int FUNC_3(hb_dict_t * VAR_0, const char * VAR_1)
{
    int VAR_2;


    VAR_2 = FUNC_1(VAR_0, VAR_1) == 0;
    if (!VAR_2)
    {

        char * VAR_3 = FUNC_2(VAR_1);
        VAR_2 = FUNC_1(VAR_0, VAR_3) == 0;
        FUNC_0(VAR_3);
    }
    return VAR_2;
}
