
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int progressive_frame; int progressive_sequence; int f_code; int b_code; int slice_context_count; scalar_t__ picture_number; scalar_t__ coded_picture_number; int picture_structure; int chroma_qscale_table; int c_dc_scale_table; int y_dc_scale_table; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(MpegEncContext *VAR_3)
{
    VAR_3->y_dc_scale_table =
    VAR_3->c_dc_scale_table = VAR_2;
    VAR_3->chroma_qscale_table = VAR_1;
    VAR_3->progressive_frame = 1;
    VAR_3->progressive_sequence = 1;
    VAR_3->picture_structure = VAR_0;

    VAR_3->coded_picture_number = 0;
    VAR_3->picture_number = 0;

    VAR_3->f_code = 1;
    VAR_3->b_code = 1;

    VAR_3->slice_context_count = 1;
}
