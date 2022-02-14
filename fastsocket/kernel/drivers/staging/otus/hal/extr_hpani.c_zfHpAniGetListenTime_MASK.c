
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u32_t ;
struct TYPE_3__ {int ast_ani_lzero; } ;
struct zsHpPriv {TYPE_1__ stats; struct zsAniState* curani; } ;
struct zsAniState {scalar_t__ cycleCount; scalar_t__ rxFrameCount; scalar_t__ txFrameCount; } ;
typedef int s32_t ;
struct TYPE_4__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;

s32_t FUNC_1(zdev_t* VAR_2)
{
    struct zsAniState *VAR_3;
    u32_t VAR_4, VAR_5, VAR_6;
    s32_t VAR_7;
    struct zsHpPriv *VAR_8;

    FUNC_0(VAR_2);
    VAR_8 = (struct zsHpPriv*)VAR_1->hpPrivate;

    VAR_4 = 0;
    VAR_5 = 0;
    VAR_6 = 0;

    VAR_3 = VAR_8->curani;
    if (VAR_3->cycleCount == 0 || VAR_3->cycleCount > VAR_6)
    {





        VAR_7 = 0;
        VAR_8->stats.ast_ani_lzero++;
    }
    else
    {
        s32_t VAR_9 = VAR_6 - VAR_3->cycleCount;
        s32_t VAR_10 = VAR_5 - VAR_3->rxFrameCount;
        s32_t VAR_11 = VAR_4 - VAR_3->txFrameCount;
        VAR_7 = (VAR_9 - VAR_10 - VAR_11) / VAR_0;
    }
    VAR_3->cycleCount = VAR_6;
    VAR_3->txFrameCount = VAR_4;
    VAR_3->rxFrameCount = VAR_5;
    return VAR_7;
}
