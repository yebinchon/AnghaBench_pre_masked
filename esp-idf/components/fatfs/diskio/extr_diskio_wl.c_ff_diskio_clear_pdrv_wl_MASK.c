
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wl_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;

void FUNC_0(wl_handle_t VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_3 == VAR_2[VAR_4]) {
            VAR_2[VAR_4] = VAR_1;
        }
    }
}
