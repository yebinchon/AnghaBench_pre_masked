
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
struct zsMicVar {int dummy; } ;
struct TYPE_3__ {scalar_t__ encryMode; scalar_t__ wpaState; struct zsMicVar txMicKey; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;

struct zsMicVar* FUNC_1(zdev_t* VAR_3, zbuf_t* VAR_4)
{
    FUNC_0(VAR_3);




    if ( (VAR_2->sta.encryMode != VAR_1) || (VAR_2->sta.wpaState < VAR_0) )
    {
        return ((void*)0);
    }

    return (&VAR_2->sta.txMicKey);
}
