
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int mfxStatus ;
typedef TYPE_5__* mfxHDL ;
struct TYPE_17__ {int NumFrameActual; int * mids; } ;
typedef TYPE_6__ mfxFrameAllocResponse ;
struct TYPE_18__ {int Type; } ;
typedef TYPE_7__ mfxFrameAllocRequest ;
struct TYPE_16__ {int nb_surface_ptrs_in; int nb_surface_ptrs_out; TYPE_4__** surface_ptrs_out; TYPE_2__** surface_ptrs_in; } ;
struct TYPE_14__ {int MemId; } ;
struct TYPE_15__ {TYPE_3__ Data; } ;
struct TYPE_12__ {int MemId; } ;
struct TYPE_13__ {TYPE_1__ Data; } ;
typedef TYPE_5__ QSVVPPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static mfxStatus FUNC_2(mfxHDL VAR_7, mfxFrameAllocRequest *VAR_8,
                             mfxFrameAllocResponse *VAR_9)
{
    QSVVPPContext *VAR_10 = VAR_7;
    int VAR_11;

    if (!(VAR_8->Type & VAR_6) ||
        !(VAR_8->Type & (VAR_4 | VAR_5)) ||
        !(VAR_8->Type & VAR_3))
        return VAR_2;

    if (VAR_8->Type & VAR_4) {
        VAR_9->mids = FUNC_1(VAR_10->nb_surface_ptrs_in * sizeof(*VAR_9->mids));
        if (!VAR_9->mids)
            return FUNC_0(VAR_0);

        for (VAR_11 = 0; VAR_11 < VAR_10->nb_surface_ptrs_in; VAR_11++)
            VAR_9->mids[VAR_11] = VAR_10->surface_ptrs_in[VAR_11]->Data.MemId;

        VAR_9->NumFrameActual = VAR_10->nb_surface_ptrs_in;
    } else {
        VAR_9->mids = FUNC_1(VAR_10->nb_surface_ptrs_out * sizeof(*VAR_9->mids));
        if (!VAR_9->mids)
            return FUNC_0(VAR_0);

        for (VAR_11 = 0; VAR_11 < VAR_10->nb_surface_ptrs_out; VAR_11++)
            VAR_9->mids[VAR_11] = VAR_10->surface_ptrs_out[VAR_11]->Data.MemId;

        VAR_9->NumFrameActual = VAR_10->nb_surface_ptrs_out;
    }

    return VAR_1;
}
