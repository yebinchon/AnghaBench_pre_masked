
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int * mfxMemId ;
struct TYPE_10__ {int NumFrameActual; int ** mids; } ;
typedef TYPE_1__ mfxFrameAllocResponse ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_2__* hwctx; } ;
struct TYPE_11__ {int nb_surfaces; } ;
typedef int QSVMid ;
typedef TYPE_2__ AVQSVFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (int ***) ;
 int ** FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(mfxFrameAllocResponse *VAR_1, AVBufferRef *VAR_2,
                          AVBufferRef *VAR_3)
{
    AVHWFramesContext *VAR_4 = (AVHWFramesContext*)VAR_2->data;
    AVQSVFramesContext *VAR_5 = VAR_4->hwctx;
    QSVMid *VAR_6 = (QSVMid*)VAR_3->data;
    int VAR_7 = VAR_5->nb_surfaces;
    int VAR_8;




    VAR_1->mids = FUNC_4(VAR_7 + 2, sizeof(*VAR_1->mids));
    if (!VAR_1->mids)
        return FUNC_0(VAR_0);

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
        VAR_1->mids[VAR_8] = &VAR_6[VAR_8];
    VAR_1->NumFrameActual = VAR_7;

    VAR_1->mids[VAR_1->NumFrameActual] = (mfxMemId)FUNC_1(VAR_2);
    if (!VAR_1->mids[VAR_1->NumFrameActual]) {
        FUNC_3(&VAR_1->mids);
        return FUNC_0(VAR_0);
    }

    VAR_1->mids[VAR_1->NumFrameActual + 1] = FUNC_1(VAR_3);
    if (!VAR_1->mids[VAR_1->NumFrameActual + 1]) {
        FUNC_2((AVBufferRef**)&VAR_1->mids[VAR_1->NumFrameActual]);
        FUNC_3(&VAR_1->mids);
        return FUNC_0(VAR_0);
    }

    return 0;
}
