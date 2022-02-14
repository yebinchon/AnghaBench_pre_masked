
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct BitpackedContext {int (* decode ) (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;} ;
struct TYPE_11__ {struct BitpackedContext* priv_data; } ;
struct TYPE_10__ {int key_frame; int pict_type; } ;
struct TYPE_9__ {int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, void *VAR_2, int *VAR_3,
                            AVPacket *VAR_4)
{
    struct BitpackedContext *VAR_5 = VAR_1->priv_data;
    int VAR_6 = VAR_4->size;
    AVFrame *VAR_7 = VAR_2;
    int VAR_8;

    VAR_7->pict_type = VAR_0;
    VAR_7->key_frame = 1;

    VAR_8 = VAR_5->decode(VAR_1, VAR_7, VAR_4);
    if (VAR_8)
        return VAR_8;

    *VAR_3 = 1;
    return VAR_6;

}
