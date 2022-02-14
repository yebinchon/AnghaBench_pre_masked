
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int mb_width; int mb_height; TYPE_4__** framep; int avctx; int keyframe; } ;
typedef TYPE_2__ VP8Context ;
struct TYPE_11__ {TYPE_3__* f; } ;
struct TYPE_14__ {TYPE_1__ tf; } ;
struct TYPE_13__ {int * linesize; int * data; } ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int,int) ;
 int FUNC_2 (int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,int) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(VP8Context *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;

    if (!VAR_4->keyframe && (VAR_5 || VAR_6)) {
        int VAR_8 = VAR_4->mb_width * 16;
        int VAR_9 = VAR_4->mb_height * 16;
        AVFrame *VAR_10, *VAR_11;

        if (!VAR_4->framep[VAR_3] ||
            !VAR_4->framep[VAR_2]) {
            FUNC_0(VAR_4->avctx, VAR_1, "Discarding interframe without a prior keyframe!\n");
            return VAR_0;
        }

        VAR_11 =
        VAR_10 = VAR_4->framep[VAR_3]->tf.f;


        if (VAR_4->framep[VAR_2] == VAR_4->framep[VAR_3]) {
            VAR_4->framep[VAR_3] = FUNC_4(VAR_4);
            if ((VAR_7 = FUNC_3(VAR_4, VAR_4->framep[VAR_3], 1)) < 0)
                return VAR_7;

            VAR_11 = VAR_4->framep[VAR_3]->tf.f;

            FUNC_1(VAR_11, VAR_10, VAR_8, VAR_9);
        }

        FUNC_2(VAR_11->data[0], VAR_11->linesize[0],
             VAR_10->data[0], VAR_10->linesize[0],
             VAR_8, VAR_9, VAR_5, VAR_6);
    }

    return 0;
}
