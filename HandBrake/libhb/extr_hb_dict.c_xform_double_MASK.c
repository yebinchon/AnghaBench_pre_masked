
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_type_t ;
typedef int hb_value_t ;







 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,double) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (double) ;
 int * FUNC_4 () ;
 int * FUNC_5 (double) ;
 double FUNC_6 (int const*) ;
 int * FUNC_7 (char*) ;

__attribute__((used)) static hb_value_t* FUNC_8(const hb_value_t *VAR_0, hb_value_type_t VAR_1)
{
    double VAR_2 = FUNC_6(VAR_0);
    switch (VAR_1)
    {
        default:
        case 129:
            return FUNC_4();
        case 132:
            return FUNC_2((int)VAR_2 != 0);
        case 130:
            return FUNC_3(VAR_2);
        case 131:
            return FUNC_5(VAR_2);
        case 128:
        {
            char *VAR_3 = FUNC_1("%g", VAR_2);
            hb_value_t *VAR_4 = FUNC_7(VAR_3);
            FUNC_0(VAR_3);
            return VAR_4;
        }
    }
}
