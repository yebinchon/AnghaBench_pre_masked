
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
struct zsHpPriv {scalar_t__ extBusy; scalar_t__ ctlBusy; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;

u32_t FUNC_3(zdev_t* VAR_1)
{
    struct zsHpPriv* VAR_2;

    FUNC_2(VAR_1);
    VAR_2=VAR_0->hpPrivate;

    FUNC_0(VAR_1, FUNC_1(VAR_2->ctlBusy, VAR_2->extBusy));

    VAR_2->ctlBusy = 0;
    VAR_2->extBusy = 0;

    return 0;
}
