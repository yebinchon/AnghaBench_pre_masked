
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_dict_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(int *VAR_1, int VAR_2,
                              const hb_dict_t * VAR_3, const char * VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_1 == ((void*)0))
    {
        return 0;
    }

    hb_value_t *VAR_5 = FUNC_0(VAR_3, VAR_4);
    if (FUNC_4(VAR_5) != VAR_0)
    {
        return 0;
    }

    int VAR_6 = FUNC_2(VAR_5);
    VAR_2 = VAR_2 < VAR_6 ? VAR_2 : VAR_6;

    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    {
        VAR_1[VAR_7] = FUNC_3(FUNC_1(VAR_5, VAR_7));
    }
    return 1;
}
