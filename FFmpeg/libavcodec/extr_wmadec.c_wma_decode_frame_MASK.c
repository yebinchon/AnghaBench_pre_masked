
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int frame_len; int ** frame_out; TYPE_4__* avctx; scalar_t__ block_pos; scalar_t__ block_num; int frame_count; } ;
typedef TYPE_1__ WMACodecContext ;
struct TYPE_7__ {int channels; } ;


 int FUNC_0 (TYPE_1__*,char*,int,float*,int) ;
 int FUNC_1 (TYPE_4__*,char*,int ,int) ;
 int FUNC_2 (float*,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(WMACodecContext *VAR_0, float **VAR_1,
                            int VAR_2)
{
    int VAR_3, VAR_4;







    VAR_0->block_num = 0;
    VAR_0->block_pos = 0;
    for (;;) {
        VAR_3 = FUNC_4(VAR_0);
        if (VAR_3 < 0)
            return -1;
        if (VAR_3)
            break;
    }

    for (VAR_4 = 0; VAR_4 < VAR_0->avctx->channels; VAR_4++) {

        FUNC_2(VAR_1[VAR_4] + VAR_2, VAR_0->frame_out[VAR_4],
               VAR_0->frame_len * sizeof(*VAR_0->frame_out[VAR_4]));

        FUNC_3(&VAR_0->frame_out[VAR_4][0], &VAR_0->frame_out[VAR_4][VAR_0->frame_len],
                VAR_0->frame_len * sizeof(*VAR_0->frame_out[VAR_4]));





    }

    return 0;
}
