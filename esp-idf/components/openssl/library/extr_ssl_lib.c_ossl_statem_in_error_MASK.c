
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_6__ {TYPE_1__ statem; } ;
typedef TYPE_2__ SSL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;

int FUNC_1(const SSL *VAR_1)
{
    FUNC_0(VAR_1);

    if (VAR_1->statem.state == VAR_0)
        return 1;

    return 0;
}
