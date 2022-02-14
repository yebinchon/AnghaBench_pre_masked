
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int data; int extended_data; } ;
struct TYPE_9__ {int buffer_mutex; } ;
struct TYPE_8__ {size_t num_released_buffers; TYPE_4__* released_buffers; TYPE_1__* avctx; TYPE_3__* parent; } ;
struct TYPE_7__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ PerThreadContext ;
typedef TYPE_3__ FrameThreadContext ;
typedef TYPE_4__ AVFrame ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(PerThreadContext *VAR_2)
{
    FrameThreadContext *VAR_3 = VAR_2->parent;

    while (VAR_2->num_released_buffers > 0) {
        AVFrame *VAR_4;

        FUNC_2(&VAR_3->buffer_mutex);


        FUNC_0(VAR_2->avctx->codec_type == VAR_1 ||
                   VAR_2->avctx->codec_type == VAR_0);
        VAR_4 = &VAR_2->released_buffers[--VAR_2->num_released_buffers];
        VAR_4->extended_data = VAR_4->data;
        FUNC_1(VAR_4);

        FUNC_3(&VAR_3->buffer_mutex);
    }
}
