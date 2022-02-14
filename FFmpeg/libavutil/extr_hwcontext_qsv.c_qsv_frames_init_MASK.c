
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mfxExtBuffer ;
struct TYPE_21__ {int pool; int sw_format; TYPE_8__* hwctx; TYPE_1__* internal; } ;
struct TYPE_20__ {int frame_type; int nb_surfaces; TYPE_6__* surfaces; } ;
struct TYPE_15__ {int BufferSz; int BufferId; } ;
struct TYPE_14__ {int NumSurface; int Type; TYPE_6__** Surfaces; } ;
struct TYPE_16__ {TYPE_3__ Header; TYPE_2__ In; TYPE_2__ Out; } ;
struct TYPE_19__ {int session_cond; int session_lock; scalar_t__ session_upload_init; scalar_t__ session_download_init; int * session_upload; int * session_download; int * mem_ids; TYPE_4__ opaque_alloc; int ** ext_buffers; TYPE_6__** surface_ptrs; } ;
struct TYPE_17__ {int MemId; } ;
struct TYPE_18__ {TYPE_5__ Data; } ;
struct TYPE_13__ {TYPE_7__* priv; } ;
typedef TYPE_7__ QSVFramesContext ;
typedef TYPE_8__ AVQSVFramesContext ;
typedef TYPE_9__ AVHWFramesContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_9__*,int ,char*) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*,int ) ;

__attribute__((used)) static int FUNC_7(AVHWFramesContext *VAR_5)
{
    QSVFramesContext *VAR_6 = VAR_5->internal->priv;
    AVQSVFramesContext *VAR_7 = VAR_5->hwctx;

    int VAR_8 = !!(VAR_7->frame_type & VAR_4);

    uint32_t VAR_9;
    int VAR_10, VAR_11;

    VAR_9 = FUNC_5(VAR_5->sw_format);
    if (!VAR_9) {
        FUNC_1(VAR_5, VAR_0, "Unsupported pixel format\n");
        return FUNC_0(VAR_2);
    }

    if (!VAR_5->pool) {
        VAR_11 = FUNC_6(VAR_5, VAR_9);
        if (VAR_11 < 0) {
            FUNC_1(VAR_5, VAR_0, "Error creating an internal frame pool\n");
            return VAR_11;
        }
    }

    if (VAR_8) {
        VAR_6->surface_ptrs = FUNC_2(VAR_7->nb_surfaces,
                                           sizeof(*VAR_6->surface_ptrs));
        if (!VAR_6->surface_ptrs)
            return FUNC_0(VAR_1);

        for (VAR_10 = 0; VAR_10 < VAR_7->nb_surfaces; VAR_10++)
            VAR_6->surface_ptrs[VAR_10] = VAR_7->surfaces + VAR_10;

        VAR_6->opaque_alloc.In.Surfaces = VAR_6->surface_ptrs;
        VAR_6->opaque_alloc.In.NumSurface = VAR_7->nb_surfaces;
        VAR_6->opaque_alloc.In.Type = VAR_7->frame_type;

        VAR_6->opaque_alloc.Out = VAR_6->opaque_alloc.In;

        VAR_6->opaque_alloc.Header.BufferId = VAR_3;
        VAR_6->opaque_alloc.Header.BufferSz = sizeof(VAR_6->opaque_alloc);

        VAR_6->ext_buffers[0] = (mfxExtBuffer*)&VAR_6->opaque_alloc;
    } else {
        VAR_6->mem_ids = FUNC_2(VAR_7->nb_surfaces, sizeof(*VAR_6->mem_ids));
        if (!VAR_6->mem_ids)
            return FUNC_0(VAR_1);

        for (VAR_10 = 0; VAR_10 < VAR_7->nb_surfaces; VAR_10++)
            VAR_6->mem_ids[VAR_10] = VAR_7->surfaces[VAR_10].Data.MemId;
    }

    VAR_6->session_download = ((void*)0);
    VAR_6->session_upload = ((void*)0);

    VAR_6->session_download_init = 0;
    VAR_6->session_upload_init = 0;






    return 0;
}
