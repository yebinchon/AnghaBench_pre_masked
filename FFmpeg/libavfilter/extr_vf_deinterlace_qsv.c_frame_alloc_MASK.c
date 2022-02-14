
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mfxStatus ;
typedef TYPE_1__* mfxHDL ;
struct TYPE_10__ {int NumFrameActual; int mids; } ;
typedef TYPE_2__ mfxFrameAllocResponse ;
struct TYPE_11__ {int Type; } ;
typedef TYPE_3__ mfxFrameAllocRequest ;
struct TYPE_12__ {int nb_mem_ids; int mem_ids; } ;
struct TYPE_9__ {TYPE_4__* priv; } ;
typedef TYPE_4__ QSVDeintContext ;
typedef TYPE_1__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static mfxStatus FUNC_0(mfxHDL VAR_6, mfxFrameAllocRequest *VAR_7,
                             mfxFrameAllocResponse *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_6;
    QSVDeintContext *VAR_10 = VAR_9->priv;

    if (!(VAR_7->Type & VAR_5) ||
        !(VAR_7->Type & (VAR_3 | VAR_4)) ||
        !(VAR_7->Type & VAR_2))
        return VAR_1;

    VAR_8->mids = VAR_10->mem_ids;
    VAR_8->NumFrameActual = VAR_10->nb_mem_ids;

    return VAR_0;
}
