
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int intra_types ;
typedef int int8_t ;
struct TYPE_10__ {int mb_x; int mb_y; int mb_stride; TYPE_1__* current_picture_ptr; int avctx; int gb; } ;
struct TYPE_8__ {int vlc_set; int quant; } ;
struct TYPE_9__ {int luma_vlc; scalar_t__ (* decode_intra_types ) (TYPE_3__*,int *,int *) ;int is16; int cur_vlcs; TYPE_2__ si; scalar_t__ chroma_vlc; int block_type; int rv30; int intra_types_stride; TYPE_4__ s; } ;
struct TYPE_7__ {int * mb_type; } ;
typedef TYPE_3__ RV34DecContext ;
typedef TYPE_4__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int,int,int ,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static int FUNC_7(RV34DecContext *VAR_5, int8_t *VAR_6)
{
    MpegEncContext *VAR_7 = &VAR_5->s;
    GetBitContext *VAR_8 = &VAR_7->gb;
    int VAR_9 = VAR_7->mb_x + VAR_7->mb_y * VAR_7->mb_stride;
    int VAR_10;

    VAR_5->is16 = FUNC_4(VAR_8);
    if(VAR_5->is16){
        VAR_7->current_picture_ptr->mb_type[VAR_9] = VAR_2;
        VAR_5->block_type = VAR_4;
        VAR_10 = FUNC_3(VAR_8, 2);
        FUNC_2(VAR_6, 4, 4, VAR_5->intra_types_stride, VAR_10, sizeof(VAR_6[0]));
        VAR_5->luma_vlc = 2;
    }else{
        if(!VAR_5->rv30){
            if(!FUNC_4(VAR_8))
                FUNC_0(VAR_7->avctx, VAR_0, "Need DQUANT\n");
        }
        VAR_7->current_picture_ptr->mb_type[VAR_9] = VAR_1;
        VAR_5->block_type = VAR_3;
        if(VAR_5->decode_intra_types(VAR_5, VAR_8, VAR_6) < 0)
            return -1;
        VAR_5->luma_vlc = 1;
    }

    VAR_5->chroma_vlc = 0;
    VAR_5->cur_vlcs = FUNC_1(VAR_5->si.quant, VAR_5->si.vlc_set, 0);

    return FUNC_5(VAR_8, VAR_5->cur_vlcs, VAR_5->is16);
}
