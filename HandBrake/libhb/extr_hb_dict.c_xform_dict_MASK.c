
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_type_t ;
typedef int hb_value_t ;
typedef scalar_t__ hb_dict_iter_t ;


 scalar_t__ VAR_0 ;





 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int const*) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int const*,scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 char* FUNC_5 (char*,char*,char const*,char*,char const*) ;
 int FUNC_6 (int **) ;
 char* FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;
 int * FUNC_9 () ;
 int * FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static hb_value_t* FUNC_13(const hb_value_t *VAR_1, hb_value_type_t VAR_2)
{
    hb_value_t *VAR_3 = ((void*)0);
    hb_dict_iter_t VAR_4 = FUNC_1(VAR_1);

    if (VAR_4 != VAR_0)
        VAR_3 = FUNC_4(VAR_4);

    switch (VAR_2)
    {
        default:
        case 129:
        case 132:
        case 130:
        case 131:
            return FUNC_8(VAR_3, VAR_2);
        case 128:
        {
            char *VAR_5 = FUNC_11("");
            hb_dict_iter_t VAR_6;
            for (VAR_6 = FUNC_1(VAR_1);
                 VAR_6 != VAR_0;
                 VAR_6 = FUNC_3(VAR_1, VAR_6))
            {
                const char *VAR_7 = FUNC_2(VAR_6);
                hb_value_t *VAR_8 = FUNC_4(VAR_6);
                hb_value_t *VAR_9 = FUNC_8(VAR_8, VAR_2);
                const char *VAR_10 = FUNC_7(VAR_9);

                char *VAR_11 = VAR_5;
                VAR_5 = FUNC_5("%s%s%s%s:",
                                     VAR_5,
                                     VAR_7,
                                     VAR_10 ? "=" : "",
                                     VAR_10 ? VAR_10 : "");
                FUNC_0(VAR_11);
                FUNC_6(&VAR_9);
            }
            int VAR_12 = FUNC_12(VAR_5);
            hb_value_t *VAR_13;
            if (VAR_12 > 0)
            {

                VAR_5[VAR_12 - 1] = 0;
                VAR_13 = FUNC_10(VAR_5);
            }
            else
            {
                FUNC_0(VAR_5);
                VAR_5 = ((void*)0);
                VAR_13 = FUNC_9();
            }
            FUNC_0(VAR_5);
            return VAR_13;
        }
    }
}
