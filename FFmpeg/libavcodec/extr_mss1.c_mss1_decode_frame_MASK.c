
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int* linesize; int key_frame; int palette_has_changed; scalar_t__* data; int pict_type; } ;
struct TYPE_14__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int size; int data; } ;
struct TYPE_12__ {int pal_stride; int keyframe; int pal; scalar_t__ corrupted; scalar_t__ pal_pic; } ;
struct TYPE_11__ {TYPE_8__* pic; int sc; TYPE_2__ ctx; } ;
typedef TYPE_1__ MSS1Context ;
typedef TYPE_2__ MSS12Context ;
typedef int GetBitContext ;
typedef int ArithCoder ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (void*,TYPE_8__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,TYPE_8__*,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6,
                             AVPacket *VAR_7)
{
    MSS1Context *VAR_8 = VAR_4->priv_data;
    MSS12Context *VAR_9 = &VAR_8->ctx;
    GetBitContext VAR_10;
    ArithCoder VAR_11;
    int VAR_12 = 0;
    int VAR_13;

    if ((VAR_13 = FUNC_7(&VAR_10, VAR_7->data, VAR_7->size)) < 0)
        return VAR_13;

    FUNC_1(&VAR_11, &VAR_10);

    if ((VAR_13 = FUNC_6(VAR_4, VAR_8->pic, 0)) < 0)
        return VAR_13;

    VAR_9->pal_pic = VAR_8->pic->data[0] + VAR_8->pic->linesize[0] * (VAR_4->height - 1);
    VAR_9->pal_stride = -VAR_8->pic->linesize[0];
    VAR_9->keyframe = !FUNC_0(&VAR_11);
    if (VAR_9->keyframe) {
        VAR_9->corrupted = 0;
        FUNC_5(&VAR_8->sc);
        VAR_12 = FUNC_3(VAR_9, &VAR_11);
        VAR_8->pic->key_frame = 1;
        VAR_8->pic->pict_type = VAR_2;
    } else {
        if (VAR_9->corrupted)
            return VAR_0;
        VAR_8->pic->key_frame = 0;
        VAR_8->pic->pict_type = VAR_3;
    }
    VAR_9->corrupted = FUNC_4(&VAR_8->sc, &VAR_11, 0, 0,
                                        VAR_4->width, VAR_4->height);
    if (VAR_9->corrupted)
        return VAR_0;
    FUNC_8(VAR_8->pic->data[1], VAR_9->pal, VAR_1);
    VAR_8->pic->palette_has_changed = VAR_12;

    if ((VAR_13 = FUNC_2(VAR_5, VAR_8->pic)) < 0)
        return VAR_13;

    *VAR_6 = 1;


    return VAR_7->size;
}
