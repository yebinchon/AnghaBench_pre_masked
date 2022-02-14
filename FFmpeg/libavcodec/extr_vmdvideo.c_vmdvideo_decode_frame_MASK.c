
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int size; int prev_frame; int palette; int const* buf; } ;
typedef TYPE_1__ VmdVideoContext ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {int * data; } ;
struct TYPE_13__ {int size; int * data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3,
                                 void *VAR_4, int *VAR_5,
                                 AVPacket *VAR_6)
{
    const uint8_t *VAR_7 = VAR_6->data;
    int VAR_8 = VAR_6->size;
    VmdVideoContext *VAR_9 = VAR_3->priv_data;
    AVFrame *VAR_10 = VAR_4;
    int VAR_11;

    VAR_9->buf = VAR_7;
    VAR_9->size = VAR_8;

    if (VAR_8 < 16)
        return VAR_0;

    if ((VAR_11 = FUNC_2(VAR_3, VAR_10, VAR_1)) < 0)
        return VAR_11;

    if ((VAR_11 = FUNC_4(VAR_9, VAR_10)) < 0)
        return VAR_11;


    FUNC_3(VAR_10->data[1], VAR_9->palette, VAR_2 * 4);


    FUNC_1(VAR_9->prev_frame);
    if ((VAR_11 = FUNC_0(VAR_9->prev_frame, VAR_10)) < 0)
        return VAR_11;

    *VAR_5 = 1;


    return VAR_8;
}
