
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
struct zsHpPriv {int initFastChannelChangeControl; int initRIFSSearchParams; int initSearchStartDelay; int initAgcControl; int initAGC; int initDesiredSigSize; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_1)
{
    FUNC_2(VAR_1);





    FUNC_0(0x9850, ((struct zsHpPriv*)VAR_0->hpPrivate)->initDesiredSigSize);


    FUNC_0(0x985c, ((struct zsHpPriv*)VAR_0->hpPrivate)->initAGC);


    FUNC_0(0x9800+(24<<2), ((struct zsHpPriv*)VAR_0->hpPrivate)->initAgcControl);


    FUNC_0(0x9800+(70<<2), ((struct zsHpPriv*)VAR_0->hpPrivate)->initSearchStartDelay);


    FUNC_0 (0x99ec, ((struct zsHpPriv*)VAR_0->hpPrivate)->initRIFSSearchParams);


    FUNC_0 (0x9800+(738<<2), ((struct zsHpPriv*)VAR_0->hpPrivate)->initFastChannelChangeControl);

    FUNC_1(VAR_1);

    return;
}
