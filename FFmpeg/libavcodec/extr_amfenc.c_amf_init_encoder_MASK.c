
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_16__ {TYPE_3__* pVtbl; } ;
struct TYPE_15__ {int pix_fmt; TYPE_1__* codec; TYPE_4__* priv_data; } ;
struct TYPE_14__ {int sw_format; } ;
struct TYPE_13__ {scalar_t__ format; int encoder; int context; TYPE_7__* factory; TYPE_2__* hw_frames_ctx; } ;
struct TYPE_12__ {scalar_t__ (* CreateComponent ) (TYPE_7__*,int ,int const*,int *) ;} ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {int id; } ;
typedef TYPE_4__ AmfContext ;
typedef TYPE_5__ AVHWFramesContext ;
typedef TYPE_6__ AVCodecContext ;
typedef scalar_t__ AMF_RESULT ;


 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int,int ,char*,int,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int ,int const*,int *) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_6)
{
    AmfContext *VAR_7 = VAR_6->priv_data;
    const wchar_t *VAR_8 = ((void*)0);
    AMF_RESULT VAR_9;
    enum AVPixelFormat VAR_10;

    switch (VAR_6->codec->id) {
        case 129:
            VAR_8 = VAR_0;
            break;
        case 128:
            VAR_8 = VAR_1;
            break;
        default:
            break;
    }
    FUNC_0(VAR_7, VAR_8 != ((void*)0), FUNC_1(VAR_5), "Codec %d is not supported\n", VAR_6->codec->id);

    if (VAR_7->hw_frames_ctx)
        VAR_10 = ((AVHWFramesContext*)VAR_7->hw_frames_ctx->data)->sw_format;
    else
        VAR_10 = VAR_6->pix_fmt;

    VAR_7->format = FUNC_2(VAR_10);
    FUNC_0(VAR_7, VAR_7->format != VAR_3, FUNC_1(VAR_5),
                        "Format %s is not supported\n", FUNC_3(VAR_10));

    VAR_9 = VAR_7->factory->pVtbl->CreateComponent(VAR_7->factory, VAR_7->context, VAR_8, &VAR_7->encoder);
    FUNC_0(VAR_7, VAR_9 == VAR_2, VAR_4, "CreateComponent(%ls) failed with error %d\n", VAR_8, VAR_9);

    return 0;
}
