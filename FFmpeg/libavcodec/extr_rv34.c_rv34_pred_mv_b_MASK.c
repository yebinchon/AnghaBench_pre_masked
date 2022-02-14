
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mb_x; int mb_y; int mb_stride; int b8_stride; int mb_width; TYPE_2__* current_picture_ptr; } ;
struct TYPE_6__ {int* mb_type; int*** motion_val; } ;
struct TYPE_5__ {int* avail_cache; scalar_t__** dmv; TYPE_3__ s; } ;
typedef TYPE_1__ RV34DecContext ;
typedef TYPE_2__ Picture ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int*,int*,int,int,int,int*,int*) ;

__attribute__((used)) static void FUNC_2(RV34DecContext *VAR_4, int VAR_5, int VAR_6)
{
    MpegEncContext *VAR_7 = &VAR_4->s;
    int VAR_8 = VAR_7->mb_x + VAR_7->mb_y * VAR_7->mb_stride;
    int VAR_9 = VAR_7->mb_x * 2 + VAR_7->mb_y * 2 * VAR_7->b8_stride;
    int VAR_10[2] = { 0 }, VAR_11[2] = { 0 }, VAR_12[2] = { 0 };
    int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19;
    Picture *VAR_20 = VAR_7->current_picture_ptr;
    const int VAR_21 = VAR_6 ? VAR_1 : VAR_0;
    int VAR_22 = VAR_20->mb_type[VAR_8];

    if((VAR_4->avail_cache[6-1] & VAR_22) & VAR_21){
        VAR_10[0] = VAR_20->motion_val[VAR_6][VAR_9 - 1][0];
        VAR_10[1] = VAR_20->motion_val[VAR_6][VAR_9 - 1][1];
        VAR_13 = 1;
    }
    if((VAR_4->avail_cache[6-4] & VAR_22) & VAR_21){
        VAR_11[0] = VAR_20->motion_val[VAR_6][VAR_9 - VAR_7->b8_stride][0];
        VAR_11[1] = VAR_20->motion_val[VAR_6][VAR_9 - VAR_7->b8_stride][1];
        VAR_14 = 1;
    }
    if(VAR_4->avail_cache[6-4] && (VAR_4->avail_cache[6-2] & VAR_22) & VAR_21){
        VAR_12[0] = VAR_20->motion_val[VAR_6][VAR_9 - VAR_7->b8_stride + 2][0];
        VAR_12[1] = VAR_20->motion_val[VAR_6][VAR_9 - VAR_7->b8_stride + 2][1];
        VAR_15 = 1;
    }else if((VAR_7->mb_x+1) == VAR_7->mb_width && (VAR_4->avail_cache[6-5] & VAR_22) & VAR_21){
        VAR_12[0] = VAR_20->motion_val[VAR_6][VAR_9 - VAR_7->b8_stride - 1][0];
        VAR_12[1] = VAR_20->motion_val[VAR_6][VAR_9 - VAR_7->b8_stride - 1][1];
        VAR_15 = 1;
    }

    FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, &VAR_16, &VAR_17);

    VAR_16 += VAR_4->dmv[VAR_6][0];
    VAR_17 += VAR_4->dmv[VAR_6][1];

    for(VAR_19 = 0; VAR_19 < 2; VAR_19++){
        for(VAR_18 = 0; VAR_18 < 2; VAR_18++){
            VAR_20->motion_val[VAR_6][VAR_9 + VAR_18 + VAR_19*VAR_7->b8_stride][0] = VAR_16;
            VAR_20->motion_val[VAR_6][VAR_9 + VAR_18 + VAR_19*VAR_7->b8_stride][1] = VAR_17;
        }
    }
    if(VAR_5 == VAR_2 || VAR_5 == VAR_3){
        FUNC_0(VAR_20->motion_val[!VAR_6][VAR_9], VAR_7->b8_stride);
    }
}
