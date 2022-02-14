
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int *,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(const char *VAR_2, const char *VAR_3)
{
    regex_t VAR_4;

    if (FUNC_1(&VAR_4, VAR_2, VAR_0|VAR_1) == 0)
    {
        if (FUNC_2(&VAR_4, VAR_3, 0, ((void*)0), 0) == 0)
        {
            FUNC_3(&VAR_4);
            return 0;
        }
    }
    else
    {
        FUNC_0("hb_validate_param_string: Error compiling regex for pattern (%s).\n", VAR_3);
    }

    FUNC_3(&VAR_4);
    return 1;
}
