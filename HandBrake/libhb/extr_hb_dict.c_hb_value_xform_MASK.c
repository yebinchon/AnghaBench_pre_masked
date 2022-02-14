
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_type_t ;
typedef int hb_value_t ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int) ;
 int * FUNC_3 (int const*,int) ;
 int * FUNC_4 (int const*,int) ;
 int * FUNC_5 (int const*,int) ;
 int * FUNC_6 (int const*,int) ;
 int * FUNC_7 (int) ;
 int * FUNC_8 (int const*,int) ;

hb_value_t* FUNC_9(const hb_value_t *VAR_0, hb_value_type_t VAR_1)
{
    hb_value_type_t VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == VAR_1 && VAR_0 != ((void*)0))
    {
        FUNC_1((hb_value_t*)VAR_0);
        return (hb_value_t*)VAR_0;
    }
    switch (VAR_2)
    {
        default:
        case 129:
        {
            return FUNC_7(VAR_1);
        }
        case 133:
        {
            return FUNC_3(VAR_0, VAR_1);
        }
        case 130:
        {
            return FUNC_6(VAR_0, VAR_1);
        }
        case 131:
        {
            return FUNC_5(VAR_0, VAR_1);
        }
        case 128:
        {
            return FUNC_8(VAR_0, VAR_1);
        }
        case 134:
        {
            return FUNC_2(VAR_0, VAR_1);
        }
        case 132:
        {
            return FUNC_4(VAR_0, VAR_1);
        }
    }
}
