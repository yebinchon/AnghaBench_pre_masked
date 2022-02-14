
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_24__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_31__ {scalar_t__ pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_30__ {int key_frame; int pict_type; int * data; } ;
struct TYPE_29__ {int size; int data; } ;
struct TYPE_28__ {TYPE_4__* frame; int skip_cursor; TYPE_24__* frame2; TYPE_1__* frame1; int gb; } ;
struct TYPE_27__ {int * data; } ;
struct TYPE_26__ {int * data; } ;
typedef TYPE_2__ RASCContext ;
typedef int GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;

 scalar_t__ VAR_5 ;


 unsigned int VAR_6 ;




 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (TYPE_5__*,TYPE_24__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*,unsigned int) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__*,unsigned int) ;
 int FUNC_8 (TYPE_5__*,TYPE_3__*,unsigned int) ;
 int FUNC_9 (TYPE_5__*,TYPE_3__*,unsigned int) ;
 int FUNC_10 (TYPE_5__*,TYPE_3__*,unsigned int) ;
 int FUNC_11 (TYPE_5__*,TYPE_3__*,unsigned int) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_14 (int ,int ,int) ;

__attribute__((used)) static int FUNC_15(AVCodecContext *VAR_7,
                        void *VAR_8, int *VAR_9,
                        AVPacket *VAR_10)
{
    RASCContext *VAR_11 = VAR_7->priv_data;
    GetByteContext *VAR_12 = &VAR_11->gb;
    int VAR_13, VAR_14 = 0;
    AVFrame *VAR_15 = VAR_8;

    FUNC_2(VAR_12, VAR_10->data, VAR_10->size);

    if (FUNC_3(VAR_12) == VAR_5)
        return VAR_10->size;

    VAR_11->frame = VAR_15;

    while (FUNC_0(VAR_12) > 0) {
        unsigned VAR_16, VAR_17 = 0;

        if (FUNC_0(VAR_12) < 8)
            return VAR_0;

        VAR_16 = FUNC_1(VAR_12);
        if (VAR_16 == VAR_6 || VAR_16 == VAR_4) {
            VAR_14 = VAR_16 == VAR_6;
            VAR_16 = FUNC_1(VAR_12);
        }

        VAR_17 = FUNC_1(VAR_12);
        if (FUNC_0(VAR_12) < VAR_17)
            return VAR_0;

        switch (VAR_16) {
        case 133:
        case 132:
            VAR_13 = FUNC_7(VAR_7, VAR_10, VAR_17);
            break;
        case 131:
            VAR_13 = FUNC_8(VAR_7, VAR_10, VAR_17);
            break;
        case 134:
            VAR_13 = FUNC_6(VAR_7, VAR_10, VAR_17);
            break;
        case 129:
            VAR_13 = FUNC_10(VAR_7, VAR_10, VAR_17);
            break;
        case 130:
            VAR_13 = FUNC_9(VAR_7, VAR_10, VAR_17);
            break;
        case 128:
            VAR_13 = FUNC_11(VAR_7, VAR_10, VAR_17);
            break;
        default:
            FUNC_4(VAR_12, VAR_17);
        }

        if (VAR_13 < 0)
            return VAR_13;
    }

    if (!VAR_11->frame2->data[0] || !VAR_11->frame1->data[0])
        return VAR_0;

    if ((VAR_13 = FUNC_13(VAR_7, VAR_11->frame, 0)) < 0)
        return VAR_13;

    FUNC_5(VAR_7, VAR_11->frame2, VAR_11->frame);
    if (VAR_7->pix_fmt == VAR_3)
        FUNC_14(VAR_11->frame->data[1], VAR_11->frame2->data[1], 1024);
    if (!VAR_11->skip_cursor)
        FUNC_12(VAR_7);

    VAR_11->frame->key_frame = VAR_14;
    VAR_11->frame->pict_type = VAR_14 ? VAR_1 : VAR_2;

    *VAR_9 = 1;

    return VAR_10->size;
}
