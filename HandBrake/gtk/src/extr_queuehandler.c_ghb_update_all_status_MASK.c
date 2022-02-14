
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue; } ;
typedef TYPE_1__ signal_user_data_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

void
FUNC_2(signal_user_data_t *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;

    VAR_2 = FUNC_0(VAR_0->queue);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
        FUNC_1(VAR_0, VAR_3, VAR_1);
    }
}
