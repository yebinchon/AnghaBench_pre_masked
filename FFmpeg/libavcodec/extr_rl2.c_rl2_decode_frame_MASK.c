
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_1__* priv_data; } ;
struct TYPE_12__ {int * data; int * linesize; } ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_10__ {int palette; int video_base; } ;
typedef TYPE_1__ Rl2Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int const*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1,
                            void *VAR_2, int *VAR_3,
                            AVPacket *VAR_4)
{
    AVFrame *VAR_5 = VAR_2;
    const uint8_t *VAR_6 = VAR_4->data;
    int VAR_7, VAR_8 = VAR_4->size;
    Rl2Context *VAR_9 = VAR_1->priv_data;

    if ((VAR_7 = FUNC_0(VAR_1, VAR_5, 0)) < 0)
        return VAR_7;


    FUNC_2(VAR_9, VAR_6, VAR_8, VAR_5->data[0], VAR_5->linesize[0],
                   VAR_9->video_base);


    FUNC_1(VAR_5->data[1], VAR_9->palette, VAR_0);

    *VAR_3 = 1;


    return VAR_8;
}
