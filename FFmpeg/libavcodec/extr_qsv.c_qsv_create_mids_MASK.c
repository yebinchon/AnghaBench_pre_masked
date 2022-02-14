
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {scalar_t__ data; } ;
struct TYPE_20__ {TYPE_4__* hwctx; } ;
struct TYPE_19__ {int nb_surfaces; TYPE_2__* surfaces; } ;
struct TYPE_18__ {TYPE_6__* hw_frames_ref; int handle; } ;
struct TYPE_16__ {int MemId; } ;
struct TYPE_17__ {TYPE_1__ Data; } ;
typedef TYPE_3__ QSVMid ;
typedef TYPE_4__ AVQSVFramesContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef TYPE_6__ AVBufferRef ;


 TYPE_6__* FUNC_0 (int *,int,int ,TYPE_6__*,int ) ;
 TYPE_6__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__**) ;
 int FUNC_3 (TYPE_3__**) ;
 TYPE_3__* FUNC_4 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static AVBufferRef *FUNC_5(AVBufferRef *VAR_1)
{
    AVHWFramesContext *VAR_2 = (AVHWFramesContext*)VAR_1->data;
    AVQSVFramesContext *VAR_3 = VAR_2->hwctx;
    int VAR_4 = VAR_3->nb_surfaces;

    AVBufferRef *VAR_5, *VAR_6;
    QSVMid *VAR_7;
    int VAR_8;

    VAR_6 = FUNC_1(VAR_1);
    if (!VAR_6)
        return ((void*)0);

    VAR_7 = FUNC_4(VAR_4, sizeof(*VAR_7));
    if (!VAR_7) {
        FUNC_2(&VAR_6);
        return ((void*)0);
    }

    VAR_5 = FUNC_0((uint8_t*)VAR_7, VAR_4 * sizeof(*VAR_7),
                                VAR_0, VAR_6, 0);
    if (!VAR_5) {
        FUNC_2(&VAR_6);
        FUNC_3(&VAR_7);
        return ((void*)0);
    }

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        QSVMid *VAR_9 = &VAR_7[VAR_8];
        VAR_9->handle = VAR_3->surfaces[VAR_8].Data.MemId;
        VAR_9->hw_frames_ref = VAR_6;
    }

    return VAR_5;
}
