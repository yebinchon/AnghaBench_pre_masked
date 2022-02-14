
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_4__ {int dev_class; } ;
struct TYPE_6__ {TYPE_1__ devcb; } ;
struct TYPE_5__ {int (* get_is_ready ) () ;} ;
typedef int DEV_CLASS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;

tBTM_STATUS FUNC_5 (DEV_CLASS VAR_5)
{
    if (!FUNC_2 (VAR_4.devcb.dev_class, VAR_5, VAR_3)) {
        return (VAR_2);
    }

    FUNC_3 (VAR_4.devcb.dev_class, VAR_5, VAR_3);

    if (!FUNC_1()->get_is_ready()) {
        return (VAR_0);
    }

    if (!FUNC_0 (VAR_5)) {
        return (VAR_1);
    }

    return (VAR_2);
}
