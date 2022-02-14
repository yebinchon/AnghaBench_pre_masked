
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_4__ {int abort_request; int interrupt_callback; } ;
typedef TYPE_2__ Context ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
    URLContext *VAR_1 = VAR_0;
    Context *VAR_2 = VAR_1->priv_data;

    if (VAR_2->abort_request)
        return 1;

    if (FUNC_0(&VAR_2->interrupt_callback))
        VAR_2->abort_request = 1;

    return VAR_2->abort_request;
}
