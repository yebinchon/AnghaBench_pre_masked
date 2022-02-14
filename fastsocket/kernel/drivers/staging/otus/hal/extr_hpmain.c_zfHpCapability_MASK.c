
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
struct zsHpPriv {int halCapability; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

u32_t FUNC_1(zdev_t* VAR_1)
{
    struct zsHpPriv* VAR_2;

    FUNC_0(VAR_1);
    VAR_2=VAR_0->hpPrivate;

    return VAR_2->halCapability;
}
