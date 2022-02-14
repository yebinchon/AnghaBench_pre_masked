
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsHpPriv {int disableDfsCh; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_1, u8_t VAR_2)
{
    struct zsHpPriv* VAR_3;

    FUNC_0(VAR_1);
    VAR_3=VAR_0->hpPrivate;
    VAR_3->disableDfsCh = VAR_2;
    return;
}
