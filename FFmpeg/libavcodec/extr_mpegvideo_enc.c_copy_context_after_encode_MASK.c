
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int esc3_level_length; int qscale; int interlaced_dct; int * block_last_index; int block; int tex_pb; int pb2; scalar_t__ data_partitioning; int pb; int mv_dir; int mv_type; int mb_skipped; int mb_intra; int misc_bits; int skip_count; int b_count; int f_count; int i_count; int p_tex_bits; int i_tex_bits; int mv_bits; int * last_dc; int mb_skip_run; int last_mv; int mv; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(MpegEncContext *VAR_0, MpegEncContext *VAR_1, int VAR_2){
    int VAR_3;

    FUNC_0(VAR_0->mv, VAR_1->mv, 2*4*2*sizeof(int));
    FUNC_0(VAR_0->last_mv, VAR_1->last_mv, 2*2*2*sizeof(int));


    VAR_0->mb_skip_run= VAR_1->mb_skip_run;
    for(VAR_3=0; VAR_3<3; VAR_3++)
        VAR_0->last_dc[VAR_3] = VAR_1->last_dc[VAR_3];


    VAR_0->mv_bits= VAR_1->mv_bits;
    VAR_0->i_tex_bits= VAR_1->i_tex_bits;
    VAR_0->p_tex_bits= VAR_1->p_tex_bits;
    VAR_0->i_count= VAR_1->i_count;
    VAR_0->f_count= VAR_1->f_count;
    VAR_0->b_count= VAR_1->b_count;
    VAR_0->skip_count= VAR_1->skip_count;
    VAR_0->misc_bits= VAR_1->misc_bits;

    VAR_0->mb_intra= VAR_1->mb_intra;
    VAR_0->mb_skipped= VAR_1->mb_skipped;
    VAR_0->mv_type= VAR_1->mv_type;
    VAR_0->mv_dir= VAR_1->mv_dir;
    VAR_0->pb= VAR_1->pb;
    if(VAR_1->data_partitioning){
        VAR_0->pb2= VAR_1->pb2;
        VAR_0->tex_pb= VAR_1->tex_pb;
    }
    VAR_0->block= VAR_1->block;
    for(VAR_3=0; VAR_3<8; VAR_3++)
        VAR_0->block_last_index[VAR_3]= VAR_1->block_last_index[VAR_3];
    VAR_0->interlaced_dct= VAR_1->interlaced_dct;
    VAR_0->qscale= VAR_1->qscale;

    VAR_0->esc3_level_length= VAR_1->esc3_level_length;
}
