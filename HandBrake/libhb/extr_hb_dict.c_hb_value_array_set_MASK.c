
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_value_t ;
typedef int hb_value_array_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(hb_value_array_t *VAR_0, int VAR_1, hb_value_t *VAR_2)
{
    if (VAR_1 < 0 || VAR_1 >= FUNC_2(VAR_0))
    {
        FUNC_0("hb_value_array_set: invalid index %d size %zu",
                 VAR_1, FUNC_2(VAR_0));
        return;
    }
    FUNC_1(VAR_0, VAR_1, VAR_2);
}
