
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* priv_data; } ;
struct TYPE_16__ {int size; int flags; int data; } ;
struct TYPE_15__ {int tex_size; int max_snappy; int chunk_count; scalar_t__ opt_compressor; int tex_buf; TYPE_1__* chunks; } ;
struct TYPE_14__ {scalar_t__ compressor; } ;
typedef TYPE_2__ HapContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int,int const*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_2, AVPacket *VAR_3,
                      const AVFrame *VAR_4, int *VAR_5)
{
    HapContext *VAR_6 = VAR_2->priv_data;
    int VAR_7 = FUNC_5(VAR_6);
    int VAR_8, VAR_9;
    int VAR_10 = FUNC_0(VAR_6->tex_size, VAR_6->max_snappy * VAR_6->chunk_count) + VAR_7;


    VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_10, VAR_7);
    if (VAR_9 < 0)
        return VAR_9;

    if (VAR_6->opt_compressor == VAR_1) {

        VAR_9 = FUNC_2(VAR_2, VAR_3->data + VAR_7, VAR_3->size - VAR_7, VAR_4);
        if (VAR_9 < 0)
            return VAR_9;

        VAR_6->chunks[0].compressor = VAR_1;
        VAR_8 = VAR_6->tex_size;
    } else {

        VAR_9 = FUNC_2(VAR_2, VAR_6->tex_buf, VAR_6->tex_size, VAR_4);
        if (VAR_9 < 0)
            return VAR_9;


        VAR_8 = FUNC_4(VAR_2, VAR_3->data + VAR_7);
        if (VAR_8 < 0)
            return VAR_8;
    }


    FUNC_6(VAR_6, VAR_3->data, VAR_8 + VAR_7);

    FUNC_1(VAR_3, VAR_8 + VAR_7);
    VAR_3->flags |= VAR_0;
    *VAR_5 = 1;
    return 0;
}
