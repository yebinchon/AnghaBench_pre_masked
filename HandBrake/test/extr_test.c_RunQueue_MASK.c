
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_handle_t ;
typedef int hb_dict_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_3 ;

int FUNC_7(hb_handle_t *VAR_4, const char *VAR_5)
{
    hb_value_t * VAR_6 = FUNC_5(VAR_5);

    if (FUNC_6(VAR_6) == VAR_1)
    {
        return FUNC_0(VAR_4, FUNC_2(VAR_6, "Job"));
    }
    else if (FUNC_6(VAR_6) == VAR_0)
    {
        int VAR_7, VAR_8, VAR_9 = 0;

        VAR_8 = FUNC_4(VAR_6);
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        {
            hb_dict_t * VAR_10 = FUNC_3(VAR_6, VAR_7);
            int VAR_11 = FUNC_0(VAR_4, FUNC_2(VAR_10, "Job"));
            if (VAR_11 < 0)
            {
                VAR_9 = VAR_11;
            }
            if (VAR_2)
            {
                break;
            }
        }
        return VAR_9;
    }
    else
    {
        FUNC_1(VAR_3, "Error: Invalid queue file %s\n", VAR_5);
        return -1;
    }
    return 0;
}
