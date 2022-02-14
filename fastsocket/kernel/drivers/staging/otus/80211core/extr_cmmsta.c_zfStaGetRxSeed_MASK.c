
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
struct zsTkipSeed {int dummy; } ;
struct TYPE_3__ {scalar_t__ encryMode; scalar_t__ wpaState; struct zsTkipSeed* rxSeed; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,scalar_t__) ;

struct zsTkipSeed* FUNC_2(zdev_t* VAR_6, zbuf_t* VAR_7)
{
    u8_t VAR_8;
    u8_t VAR_9;

    FUNC_0(VAR_6);


    if ( ((VAR_5->sta.encryMode != VAR_2)&&(VAR_5->sta.encryMode != VAR_0))||
         (VAR_5->sta.wpaState < VAR_1) )
    {
        return ((void*)0);
    }

    VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_3);

    if ((FUNC_1(VAR_6, VAR_7, 0) & 0x80) == 0x80)
        VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_4+5);
    else
        VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_4+3);
    VAR_8 = (VAR_8 & 0xc0) >> 6;

    return (&VAR_5->sta.rxSeed[VAR_8]);
}
