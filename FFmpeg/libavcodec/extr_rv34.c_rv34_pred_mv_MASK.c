
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mb_x; int mb_y; int b8_stride; TYPE_1__* current_picture_ptr; } ;
struct TYPE_6__ {int* avail_cache; scalar_t__** dmv; scalar_t__ rv30; TYPE_3__ s; } ;
struct TYPE_5__ {int*** motion_val; } ;
typedef TYPE_2__ RV34DecContext ;
typedef TYPE_3__ MpegEncContext ;


 int* VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(RV34DecContext *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    MpegEncContext *VAR_7 = &VAR_3->s;
    int VAR_8 = VAR_7->mb_x * 2 + VAR_7->mb_y * 2 * VAR_7->b8_stride;
    int VAR_9[2] = {0}, VAR_10[2], VAR_11[2];
    int VAR_12, VAR_13;
    int VAR_14, VAR_15;
    int* VAR_16 = VAR_3->avail_cache + VAR_0[VAR_5];
    int VAR_17 = VAR_2[VAR_4];

    VAR_8 += (VAR_5 & 1) + (VAR_5 >> 1)*VAR_7->b8_stride;
    if(VAR_5 == 3)
        VAR_17 = -1;

    if(VAR_16[-1]){
        VAR_9[0] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-1][0];
        VAR_9[1] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-1][1];
    }
    if(VAR_16[-4]){
        VAR_10[0] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-VAR_7->b8_stride][0];
        VAR_10[1] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-VAR_7->b8_stride][1];
    }else{
        VAR_10[0] = VAR_9[0];
        VAR_10[1] = VAR_9[1];
    }
    if(!VAR_16[VAR_17-4]){
        if(VAR_16[-4] && (VAR_16[-1] || VAR_3->rv30)){
            VAR_11[0] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-VAR_7->b8_stride-1][0];
            VAR_11[1] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-VAR_7->b8_stride-1][1];
        }else{
            VAR_11[0] = VAR_9[0];
            VAR_11[1] = VAR_9[1];
        }
    }else{
        VAR_11[0] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-VAR_7->b8_stride+VAR_17][0];
        VAR_11[1] = VAR_7->current_picture_ptr->motion_val[0][VAR_8-VAR_7->b8_stride+VAR_17][1];
    }
    VAR_14 = FUNC_0(VAR_9[0], VAR_10[0], VAR_11[0]);
    VAR_15 = FUNC_0(VAR_9[1], VAR_10[1], VAR_11[1]);
    VAR_14 += VAR_3->dmv[VAR_6][0];
    VAR_15 += VAR_3->dmv[VAR_6][1];
    for(VAR_13 = 0; VAR_13 < VAR_1[VAR_4]; VAR_13++){
        for(VAR_12 = 0; VAR_12 < VAR_2[VAR_4]; VAR_12++){
            VAR_7->current_picture_ptr->motion_val[0][VAR_8 + VAR_12 + VAR_13*VAR_7->b8_stride][0] = VAR_14;
            VAR_7->current_picture_ptr->motion_val[0][VAR_8 + VAR_12 + VAR_13*VAR_7->b8_stride][1] = VAR_15;
        }
    }
}
