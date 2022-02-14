
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mb_x; int mb_y; int b8_stride; TYPE_1__* current_picture_ptr; } ;
struct TYPE_6__ {int* avail_cache; scalar_t__** dmv; TYPE_3__ s; } ;
struct TYPE_5__ {int*** motion_val; } ;
typedef TYPE_2__ RV34DecContext ;
typedef TYPE_3__ MpegEncContext ;


 int* VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(RV34DecContext *VAR_1, int VAR_2, int VAR_3)
{
    MpegEncContext *VAR_4 = &VAR_1->s;
    int VAR_5 = VAR_4->mb_x * 2 + VAR_4->mb_y * 2 * VAR_4->b8_stride;
    int VAR_6[2] = {0}, VAR_7[2], VAR_8[2];
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;
    int* VAR_14 = VAR_1->avail_cache + VAR_0[0];

    if(VAR_14[-1]){
        VAR_6[0] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - 1][0];
        VAR_6[1] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - 1][1];
    }
    if(VAR_14[-4]){
        VAR_7[0] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - VAR_4->b8_stride][0];
        VAR_7[1] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - VAR_4->b8_stride][1];
    }else{
        VAR_7[0] = VAR_6[0];
        VAR_7[1] = VAR_6[1];
    }
    if(!VAR_14[-4 + 2]){
        if(VAR_14[-4] && (VAR_14[-1])){
            VAR_8[0] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - VAR_4->b8_stride - 1][0];
            VAR_8[1] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - VAR_4->b8_stride - 1][1];
        }else{
            VAR_8[0] = VAR_6[0];
            VAR_8[1] = VAR_6[1];
        }
    }else{
        VAR_8[0] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - VAR_4->b8_stride + 2][0];
        VAR_8[1] = VAR_4->current_picture_ptr->motion_val[0][VAR_5 - VAR_4->b8_stride + 2][1];
    }
    VAR_12 = FUNC_0(VAR_6[0], VAR_7[0], VAR_8[0]);
    VAR_13 = FUNC_0(VAR_6[1], VAR_7[1], VAR_8[1]);
    VAR_12 += VAR_1->dmv[0][0];
    VAR_13 += VAR_1->dmv[0][1];
    for(VAR_10 = 0; VAR_10 < 2; VAR_10++){
        for(VAR_9 = 0; VAR_9 < 2; VAR_9++){
            for(VAR_11 = 0; VAR_11 < 2; VAR_11++){
                VAR_4->current_picture_ptr->motion_val[VAR_11][VAR_5 + VAR_9 + VAR_10*VAR_4->b8_stride][0] = VAR_12;
                VAR_4->current_picture_ptr->motion_val[VAR_11][VAR_5 + VAR_9 + VAR_10*VAR_4->b8_stride][1] = VAR_13;
            }
        }
    }
}
