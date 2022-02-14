
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int formats; } ;
typedef TYPE_2__ VAAPIDeviceContext ;
struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_3__ AVHWDeviceContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVHWDeviceContext *VAR_0)
{
    VAAPIDeviceContext *VAR_1 = VAR_0->internal->priv;

    FUNC_0(&VAR_1->formats);
}
