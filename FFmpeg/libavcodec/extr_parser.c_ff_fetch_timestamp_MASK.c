
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dts; scalar_t__ pts; int pos; scalar_t__ offset; scalar_t__ cur_offset; scalar_t__* cur_frame_offset; scalar_t__ frame_offset; scalar_t__ next_frame_offset; scalar_t__* cur_frame_end; scalar_t__* cur_frame_dts; scalar_t__* cur_frame_pts; int* cur_frame_pos; } ;
typedef TYPE_1__ AVCodecParserContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(AVCodecParserContext *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;

    if (!VAR_6) {
        VAR_3->dts =
        VAR_3->pts = VAR_0;
        VAR_3->pos = -1;
        VAR_3->offset = 0;
    }
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        if (VAR_3->cur_offset + VAR_4 >= VAR_3->cur_frame_offset[VAR_7] &&
            (VAR_3->frame_offset < VAR_3->cur_frame_offset[VAR_7] ||
             (!VAR_3->frame_offset && !VAR_3->next_frame_offset)) &&

                                              VAR_3->cur_frame_end[VAR_7]){

            if (!VAR_6 || VAR_3->cur_frame_dts[VAR_7] != VAR_0) {
                VAR_3->dts = VAR_3->cur_frame_dts[VAR_7];
                VAR_3->pts = VAR_3->cur_frame_pts[VAR_7];
                VAR_3->pos = VAR_3->cur_frame_pos[VAR_7];
                VAR_3->offset = VAR_3->next_frame_offset - VAR_3->cur_frame_offset[VAR_7];
            }
            if (VAR_5)
                VAR_3->cur_frame_offset[VAR_7] = VAR_2;
            if (VAR_3->cur_offset + VAR_4 < VAR_3->cur_frame_end[VAR_7])
                break;
        }
    }
}
