
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* preview; } ;
typedef TYPE_2__ signal_user_data_t ;
struct TYPE_4__ {int * current; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(signal_user_data_t *VAR_0)
{
    if (VAR_0->preview->current)
    {
        FUNC_0(VAR_0->preview->current);
        VAR_0->preview->current = ((void*)0);
    }
}
