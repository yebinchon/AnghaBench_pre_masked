
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int intra_types ;
typedef scalar_t__ int8_t ;
struct TYPE_12__ {int mb_x; int mb_y; int mb_stride; scalar_t__ pict_type; TYPE_1__* current_picture_ptr; int gb; } ;
struct TYPE_10__ {int vlc_set; int quant; } ;
struct TYPE_11__ {int block_type; int (* decode_mb_info ) (TYPE_3__*) ;size_t* mb_type; int is16; int intra_types_stride; int chroma_vlc; int luma_vlc; scalar_t__ (* decode_intra_types ) (TYPE_3__*,int *,scalar_t__*) ;void* cur_vlcs; TYPE_2__ si; TYPE_4__ s; } ;
struct TYPE_9__ {int * mb_type; } ;
typedef TYPE_3__ RV34DecContext ;
typedef TYPE_4__ MpegEncContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (scalar_t__*,int,int,int,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,void*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,size_t) ;
 int * VAR_6 ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(RV34DecContext *VAR_7, int8_t *VAR_8)
{
    MpegEncContext *VAR_9 = &VAR_7->s;
    GetBitContext *VAR_10 = &VAR_9->gb;
    int VAR_11 = VAR_9->mb_x + VAR_9->mb_y * VAR_9->mb_stride;
    int VAR_12, VAR_13;

    VAR_7->block_type = VAR_7->decode_mb_info(VAR_7);
    if(VAR_7->block_type == -1)
        return -1;
    VAR_9->current_picture_ptr->mb_type[VAR_11] = VAR_6[VAR_7->block_type];
    VAR_7->mb_type[VAR_11] = VAR_7->block_type;
    if(VAR_7->block_type == VAR_5){
        if(VAR_9->pict_type == VAR_1)
            VAR_7->mb_type[VAR_11] = VAR_3;
        if(VAR_9->pict_type == VAR_0)
            VAR_7->mb_type[VAR_11] = VAR_2;
    }
    VAR_7->is16 = !!FUNC_1(VAR_9->current_picture_ptr->mb_type[VAR_11]);
    if (FUNC_6(VAR_7, VAR_7->block_type) < 0)
        return -1;
    if(VAR_7->block_type == VAR_5){
        FUNC_3(VAR_8, 4, 4, VAR_7->intra_types_stride, 0, sizeof(VAR_8[0]));
        return 0;
    }
    VAR_7->chroma_vlc = 1;
    VAR_7->luma_vlc = 0;

    if(FUNC_0(VAR_9->current_picture_ptr->mb_type[VAR_11])){
        if(VAR_7->is16){
            VAR_13 = FUNC_4(VAR_10, 2);
            FUNC_3(VAR_8, 4, 4, VAR_7->intra_types_stride, VAR_13, sizeof(VAR_8[0]));
            VAR_7->luma_vlc = 2;
        }else{
            if(VAR_7->decode_intra_types(VAR_7, VAR_10, VAR_8) < 0)
                return -1;
            VAR_7->luma_vlc = 1;
        }
        VAR_7->chroma_vlc = 0;
        VAR_7->cur_vlcs = FUNC_2(VAR_7->si.quant, VAR_7->si.vlc_set, 0);
    }else{
        for(VAR_12 = 0; VAR_12 < 16; VAR_12++)
            VAR_8[(VAR_12 & 3) + (VAR_12>>2) * VAR_7->intra_types_stride] = 0;
        VAR_7->cur_vlcs = FUNC_2(VAR_7->si.quant, VAR_7->si.vlc_set, 1);
        if(VAR_7->mb_type[VAR_11] == VAR_4){
            VAR_7->is16 = 1;
            VAR_7->chroma_vlc = 1;
            VAR_7->luma_vlc = 2;
            VAR_7->cur_vlcs = FUNC_2(VAR_7->si.quant, VAR_7->si.vlc_set, 0);
        }
    }

    return FUNC_5(VAR_10, VAR_7->cur_vlcs, VAR_7->is16);
}
