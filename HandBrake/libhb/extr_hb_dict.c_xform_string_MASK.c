
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_type_t ;
typedef int hb_value_t ;







 int * FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (char const*) ;
 char* FUNC_5 (int const*) ;
 int * FUNC_6 () ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*,int *) ;
 int FUNC_9 (char const*,int *,int ) ;

__attribute__((used)) static hb_value_t* FUNC_10(const hb_value_t *VAR_0, hb_value_type_t VAR_1)
{
    const char *VAR_2 = FUNC_5(VAR_0);
    switch (VAR_1)
    {
        default:
        case 129:
        {
            return FUNC_2();
        }
        case 132:
        {
            if (!FUNC_7(VAR_2, "true") ||
                !FUNC_7(VAR_2, "yes") ||
                !FUNC_7(VAR_2, "1"))
            {
                return FUNC_6();
            }
            return FUNC_0();
        }
        case 130:
        {
            return FUNC_1(FUNC_9(VAR_2, ((void*)0), 0));
        }
        case 131:
        {
            return FUNC_3(FUNC_8(VAR_2, ((void*)0)));
        }
        case 128:
        {
            return FUNC_4(VAR_2);
        }
    }
}
