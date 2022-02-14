
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ codec_id; int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int key_frame; int pict_type; int * linesize; int * data; } ;
struct TYPE_12__ {int size; int data; } ;
struct TYPE_11__ {int vflip; } ;
typedef TYPE_1__ MvcContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_4__*,int *,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, void *VAR_3, int *VAR_4,
                            AVPacket *VAR_5)
{
    MvcContext *VAR_6 = VAR_2->priv_data;
    AVFrame *VAR_7 = VAR_3;
    GetByteContext VAR_8;
    int VAR_9;

    if ((VAR_9 = FUNC_3(VAR_2, VAR_7, 0)) < 0)
        return VAR_9;

    FUNC_0(&VAR_8, VAR_5->data, VAR_5->size);
    if (VAR_2->codec_id == VAR_0)
        VAR_9 = FUNC_1(VAR_2, &VAR_8, VAR_7->data[0],
                          VAR_2->width, VAR_2->height, VAR_7->linesize[0]);
    else
        VAR_9 = FUNC_2(VAR_2, &VAR_8, VAR_7->data[0],
                          VAR_2->width, VAR_2->height, VAR_7->linesize[0],
                          VAR_6->vflip);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_7->pict_type = VAR_1;
    VAR_7->key_frame = 1;

    *VAR_4 = 1;

    return VAR_5->size;
}
