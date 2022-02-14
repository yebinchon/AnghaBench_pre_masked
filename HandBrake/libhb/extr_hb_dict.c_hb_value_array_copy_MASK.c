
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_array_t ;


 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int const*,int) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(hb_value_array_t *VAR_0,
                    const hb_value_array_t *VAR_1, int VAR_2)
{
    size_t VAR_3;
    int VAR_4;


    FUNC_5(VAR_0);

    VAR_3 = FUNC_3(VAR_1);
    VAR_2 = FUNC_0(VAR_2, VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        FUNC_1(VAR_0, FUNC_4(FUNC_2(VAR_1, VAR_4)));
}
