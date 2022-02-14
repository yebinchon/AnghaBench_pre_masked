
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_18__ {int Info; } ;
typedef TYPE_5__ mfxFrameSurface1 ;
typedef int mfxExtBuffer ;
struct TYPE_21__ {TYPE_7__* hwaccel_context; } ;
struct TYPE_20__ {int nb_opaque_surfaces; int opaque_alloc_type; TYPE_12__* opaque_surfaces; } ;
struct TYPE_17__ {int NumFrameSuggested; int Type; int Info; } ;
struct TYPE_15__ {int NumSurface; int Type; TYPE_5__** Surfaces; } ;
struct TYPE_14__ {int BufferSz; int BufferId; } ;
struct TYPE_16__ {TYPE_2__ In; TYPE_1__ Header; } ;
struct TYPE_19__ {TYPE_4__ req; TYPE_12__* opaque_alloc_buf; TYPE_3__ opaque_alloc; int nb_extparam_internal; int ** extparam_internal; TYPE_5__** opaque_surfaces; } ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef TYPE_6__ QSVEncContext ;
typedef TYPE_7__ AVQSVContext ;
typedef TYPE_8__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__* FUNC_1 (int) ;
 TYPE_5__** FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, QSVEncContext *VAR_3)
{
    AVQSVContext *VAR_4 = VAR_2->hwaccel_context;
    mfxFrameSurface1 *VAR_5;
    int VAR_6, VAR_7;

    VAR_6 = VAR_4->nb_opaque_surfaces + VAR_3->req.NumFrameSuggested;

    VAR_3->opaque_alloc_buf = FUNC_1(sizeof(*VAR_5) * VAR_6);
    if (!VAR_3->opaque_alloc_buf)
        return FUNC_0(VAR_0);

    VAR_3->opaque_surfaces = FUNC_2(VAR_6, sizeof(*VAR_3->opaque_surfaces));
    if (!VAR_3->opaque_surfaces)
        return FUNC_0(VAR_0);

    VAR_5 = (mfxFrameSurface1*)VAR_3->opaque_alloc_buf->data;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        VAR_5[VAR_7].Info = VAR_3->req.Info;
        VAR_3->opaque_surfaces[VAR_7] = VAR_5 + VAR_7;
    }

    VAR_3->opaque_alloc.Header.BufferId = VAR_1;
    VAR_3->opaque_alloc.Header.BufferSz = sizeof(VAR_3->opaque_alloc);
    VAR_3->opaque_alloc.In.Surfaces = VAR_3->opaque_surfaces;
    VAR_3->opaque_alloc.In.NumSurface = VAR_6;
    VAR_3->opaque_alloc.In.Type = VAR_3->req.Type;

    VAR_3->extparam_internal[VAR_3->nb_extparam_internal++] = (mfxExtBuffer *)&VAR_3->opaque_alloc;

    VAR_4->nb_opaque_surfaces = VAR_6;
    VAR_4->opaque_surfaces = VAR_3->opaque_alloc_buf;
    VAR_4->opaque_alloc_type = VAR_3->req.Type;

    return 0;
}
