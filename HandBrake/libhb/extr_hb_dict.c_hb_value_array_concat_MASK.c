
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_value_array_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(hb_value_array_t *VAR_1, hb_value_t *VAR_2)
{
    if (FUNC_3(VAR_2) == VAR_0)
    {
        int VAR_3;
        int VAR_4 = FUNC_1(VAR_2);

        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
        {
            hb_value_t * VAR_5 = FUNC_0(VAR_2, VAR_3);
            FUNC_4(VAR_1, FUNC_2(VAR_5));
        }
    }
    else
    {
        FUNC_4(VAR_1, FUNC_2(VAR_2));
    }
}
