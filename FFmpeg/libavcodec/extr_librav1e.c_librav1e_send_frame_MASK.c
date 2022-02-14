
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int ctx; } ;
typedef TYPE_2__ librav1eContext ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {int height; int* linesize; int * data; int format; } ;
struct TYPE_12__ {int nb_components; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; } ;
typedef int RaFrame ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int,int,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_5, const AVFrame *VAR_6)
{
    librav1eContext *VAR_7 = VAR_5->priv_data;
    RaFrame *VAR_8 = ((void*)0);
    int VAR_9;

    if (VAR_6) {
        const AVPixFmtDescriptor *VAR_10 = FUNC_2(VAR_6->format);

        VAR_8 = FUNC_4(VAR_7->ctx);
        if (!VAR_8) {
            FUNC_1(VAR_5, VAR_2, "Could not allocate new rav1e frame.\n");
            return FUNC_0(VAR_4);
        }

        for (int VAR_11 = 0; VAR_11 < VAR_10->nb_components; VAR_11++) {
            int VAR_12 = VAR_11 ? VAR_10->log2_chroma_h : 0;
            int VAR_13 = VAR_10->comp[0].depth == 8 ? 1 : 2;
            FUNC_3(VAR_8, VAR_11, VAR_6->data[VAR_11],
                                   (VAR_6->height >> VAR_12) * VAR_6->linesize[VAR_11],
                                   VAR_6->linesize[VAR_11], VAR_13);
        }
    }

    VAR_9 = FUNC_6(VAR_7->ctx, VAR_8);
    if (VAR_8)
         FUNC_5(VAR_8);

    switch (VAR_9) {
    case 128:
        break;
    case 130:
        return FUNC_0(VAR_3);
    case 129:
        FUNC_1(VAR_5, VAR_2, "Could not send frame: %s\n", FUNC_7(VAR_9));
        return VAR_0;
    default:
        FUNC_1(VAR_5, VAR_2, "Unknown return code %d from rav1e_send_frame: %s\n", VAR_9, FUNC_7(VAR_9));
        return VAR_1;
    }

    return 0;
}
