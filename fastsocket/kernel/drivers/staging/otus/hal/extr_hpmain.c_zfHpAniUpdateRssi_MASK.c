
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct TYPE_4__ {int ns_avgbrssi; } ;
struct TYPE_5__ {TYPE_1__ ast_nodestats; } ;
struct zsHpPriv {TYPE_2__ stats; } ;
struct TYPE_6__ {struct zsHpPriv* hpPrivate; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;

u32_t FUNC_1(zdev_t* VAR_1, u8_t VAR_2)
{
    struct zsHpPriv* VAR_3;

    FUNC_0(VAR_1);
    VAR_3=VAR_0->hpPrivate;

    VAR_3->stats.ast_nodestats.ns_avgbrssi = VAR_2;

    return 0;
}
