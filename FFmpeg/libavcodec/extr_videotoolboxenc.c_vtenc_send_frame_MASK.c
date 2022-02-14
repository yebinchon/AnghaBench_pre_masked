
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int session; scalar_t__ a53_cc; } ;
typedef TYPE_2__ VTEncContext ;
struct TYPE_20__ {int num; int den; } ;
struct TYPE_25__ {TYPE_1__ time_base; } ;
struct TYPE_24__ {int pts; } ;
struct TYPE_23__ {scalar_t__ size; } ;
struct TYPE_22__ {int size; int data; } ;
typedef TYPE_3__ ExtraSEI ;
typedef int * CVPixelBufferRef ;
typedef int CMTime ;
typedef int * CFDictionaryRef ;
typedef TYPE_4__ AVFrameSideData ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int *,TYPE_3__*,int *) ;
 TYPE_4__* FUNC_3 (TYPE_5__ const*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_6__*,int ,char*,...) ;
 TYPE_3__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__ const*,int **) ;
 int FUNC_8 (TYPE_5__ const*,int **) ;
 int FUNC_9 (TYPE_5__ const*,int ,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_4,
                            VTEncContext *VAR_5,
                            const AVFrame *VAR_6)
{
    CMTime VAR_7;
    CFDictionaryRef VAR_8;
    CVPixelBufferRef VAR_9 = ((void*)0);
    AVFrameSideData *VAR_10 = ((void*)0);
    ExtraSEI *VAR_11 = ((void*)0);
    int VAR_12 = FUNC_7(VAR_4, VAR_6, &VAR_9);

    if (VAR_12) return VAR_12;

    VAR_12 = FUNC_8(VAR_6, &VAR_8);
    if (VAR_12) {
        FUNC_0(VAR_9);
        return VAR_12;
    }

    VAR_10 = FUNC_3(VAR_6, VAR_1);
    if (VAR_5->a53_cc && VAR_10 && VAR_10->size) {
        VAR_11 = FUNC_6(sizeof(*VAR_11));
        if (!VAR_11) {
            FUNC_5(VAR_4, VAR_2, "Not enough memory for closed captions, skipping\n");
        } else {
            int VAR_13 = FUNC_9(VAR_6, 0, &VAR_11->data, &VAR_11->size);
            if (VAR_13 < 0) {
                FUNC_5(VAR_4, VAR_2, "Not enough memory for closed captions, skipping\n");
                FUNC_4(VAR_11);
                VAR_11 = ((void*)0);
            }
        }
    }

    VAR_7 = FUNC_1(VAR_6->pts * VAR_4->time_base.num, VAR_4->time_base.den);
    VAR_12 = FUNC_2(
        VAR_5->session,
        VAR_9,
        VAR_7,
        VAR_3,
        VAR_8,
        VAR_11,
        ((void*)0)
    );

    if (VAR_8) FUNC_0(VAR_8);
    FUNC_0(VAR_9);

    if (VAR_12) {
        FUNC_5(VAR_4, VAR_2, "Error: cannot encode frame: %d\n", VAR_12);
        return VAR_0;
    }

    return 0;
}
