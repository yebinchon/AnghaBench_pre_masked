
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsHpPriv {int halRxInfo; } ;
struct zsHalRxInfo {int dummy; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u8_t *VAR_2)
{
    FUNC_1(VAR_1);
    FUNC_0(VAR_2,
                (u8_t*)&(((struct zsHpPriv*)VAR_0->hpPrivate)->halRxInfo),
                sizeof(struct zsHalRxInfo));
}
