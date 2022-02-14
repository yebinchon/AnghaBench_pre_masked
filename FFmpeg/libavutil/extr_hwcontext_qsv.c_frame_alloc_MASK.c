
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


typedef int mfxStatus ;
typedef TYPE_3__* mfxHDL ;
struct TYPE_17__ {scalar_t__ Width; scalar_t__ Height; scalar_t__ FourCC; scalar_t__ ChromaFormat; } ;
typedef TYPE_4__ mfxFrameInfo ;
struct TYPE_18__ {int NumFrameActual; int mids; } ;
typedef TYPE_5__ mfxFrameAllocResponse ;
struct TYPE_19__ {int Type; TYPE_4__ Info; } ;
typedef TYPE_6__ mfxFrameAllocRequest ;
struct TYPE_21__ {int nb_surfaces; TYPE_2__* surfaces; } ;
struct TYPE_20__ {int mem_ids; } ;
struct TYPE_16__ {TYPE_8__* hwctx; TYPE_1__* internal; } ;
struct TYPE_15__ {TYPE_4__ Info; } ;
struct TYPE_14__ {TYPE_7__* priv; } ;
typedef TYPE_7__ QSVFramesContext ;
typedef TYPE_8__ AVQSVFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static mfxStatus FUNC_1(mfxHDL VAR_7, mfxFrameAllocRequest *VAR_8,
                             mfxFrameAllocResponse *VAR_9)
{
    AVHWFramesContext *VAR_10 = VAR_7;
    QSVFramesContext *VAR_11 = VAR_10->internal->priv;
    AVQSVFramesContext *VAR_12 = VAR_10->hwctx;
    mfxFrameInfo *VAR_13 = &VAR_8->Info;
    mfxFrameInfo *VAR_14 = &VAR_12->surfaces[0].Info;

    if (!(VAR_8->Type & VAR_6) ||
        !(VAR_8->Type & (VAR_4 | VAR_5)) ||
        !(VAR_8->Type & VAR_3))
        return VAR_2;
    if (VAR_13->Width > VAR_14->Width || VAR_13->Height > VAR_14->Height ||
        VAR_13->FourCC != VAR_14->FourCC || VAR_13->ChromaFormat != VAR_14->ChromaFormat) {
        FUNC_0(VAR_10, VAR_0, "Mismatching surface properties in an "
               "allocation request: %dx%d %d %d vs %dx%d %d %d\n",
               VAR_13->Width, VAR_13->Height, VAR_13->FourCC, VAR_13->ChromaFormat,
               VAR_14->Width, VAR_14->Height, VAR_14->FourCC, VAR_14->ChromaFormat);
        return VAR_2;
    }

    VAR_9->mids = VAR_11->mem_ids;
    VAR_9->NumFrameActual = VAR_12->nb_surfaces;

    return VAR_1;
}
