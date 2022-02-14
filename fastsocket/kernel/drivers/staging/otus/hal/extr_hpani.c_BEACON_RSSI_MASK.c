
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_4__ {int ns_avgbrssi; } ;
struct TYPE_5__ {TYPE_1__ ast_nodestats; } ;
struct zsHpPriv {TYPE_2__ stats; } ;
typedef int s32_t ;
struct TYPE_6__ {scalar_t__ hpPrivate; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *) ;

s32_t FUNC_2(zdev_t* VAR_2)
{
    s32_t VAR_3;
    struct zsHpPriv *VAR_4;

    FUNC_1(VAR_2);
    VAR_4 = (struct zsHpPriv*)VAR_1->hpPrivate;

    VAR_3 = FUNC_0(VAR_4->stats.ast_nodestats.ns_avgbrssi, VAR_0);

    return VAR_3;
}
