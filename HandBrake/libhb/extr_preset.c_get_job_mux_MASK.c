
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_dict_t ;
typedef int hb_container_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(hb_dict_t *VAR_2)
{
    int VAR_3;

    hb_dict_t *VAR_4 = FUNC_4(VAR_2, "Destination");
    hb_value_t *VAR_5 = FUNC_4(VAR_4, "Mux");
    if (FUNC_9(VAR_5) == VAR_1)
    {
        VAR_3 = FUNC_3(FUNC_7(VAR_5));
        if (VAR_3 == 0)
            VAR_3 = FUNC_1(
                                                FUNC_7(VAR_5));
    }
    else
    {
        VAR_3 = FUNC_6(VAR_5);
    }
    hb_container_t *VAR_6 = FUNC_2(VAR_3);
    if (VAR_6 == ((void*)0))
    {
        char *VAR_7 = FUNC_8(VAR_5);
        FUNC_5("Invalid container (%s)", VAR_7);
        FUNC_0(VAR_7);
        return VAR_0;
    }
    return VAR_3;
}
