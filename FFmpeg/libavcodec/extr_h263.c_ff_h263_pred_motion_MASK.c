
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int*** motion_val; } ;
struct TYPE_5__ {int b8_stride; int* block_index; scalar_t__ mb_x; scalar_t__ resync_mb_x; scalar_t__ h263_pred; scalar_t__ first_slice_line; TYPE_1__ current_picture; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int,int,int) ;

int16_t *FUNC_1(MpegEncContext * VAR_0, int VAR_1, int VAR_2,
                             int *VAR_3, int *VAR_4)
{
    int VAR_5;
    int16_t *VAR_6, *VAR_7, *VAR_8, (*VAR_9)[2];
    static const int VAR_10[4]= {2, 1, 1, -1};

    VAR_5 = VAR_0->b8_stride;
    VAR_9 = VAR_0->current_picture.motion_val[VAR_2] + VAR_0->block_index[VAR_1];

    VAR_6 = VAR_9[ - 1];

    if (VAR_0->first_slice_line && VAR_1<3) {


        if(VAR_1==0){
            if(VAR_0->mb_x == VAR_0->resync_mb_x){
                *VAR_3= *VAR_4 = 0;
            }else if(VAR_0->mb_x + 1 == VAR_0->resync_mb_x && VAR_0->h263_pred){
                VAR_8 = VAR_9[VAR_10[VAR_1] - VAR_5];
                if(VAR_0->mb_x==0){
                    *VAR_3 = VAR_8[0];
                    *VAR_4 = VAR_8[1];
                }else{
                    *VAR_3 = FUNC_0(VAR_6[0], 0, VAR_8[0]);
                    *VAR_4 = FUNC_0(VAR_6[1], 0, VAR_8[1]);
                }
            }else{
                *VAR_3 = VAR_6[0];
                *VAR_4 = VAR_6[1];
            }
        }else if(VAR_1==1){
            if(VAR_0->mb_x + 1 == VAR_0->resync_mb_x && VAR_0->h263_pred){
                VAR_8 = VAR_9[VAR_10[VAR_1] - VAR_5];
                *VAR_3 = FUNC_0(VAR_6[0], 0, VAR_8[0]);
                *VAR_4 = FUNC_0(VAR_6[1], 0, VAR_8[1]);
            }else{
                *VAR_3 = VAR_6[0];
                *VAR_4 = VAR_6[1];
            }
        }else{
            VAR_7 = VAR_9[ - VAR_5];
            VAR_8 = VAR_9[VAR_10[VAR_1] - VAR_5];
            if(VAR_0->mb_x == VAR_0->resync_mb_x)
                VAR_6[0]=VAR_6[1]=0;

            *VAR_3 = FUNC_0(VAR_6[0], VAR_7[0], VAR_8[0]);
            *VAR_4 = FUNC_0(VAR_6[1], VAR_7[1], VAR_8[1]);
        }
    } else {
        VAR_7 = VAR_9[ - VAR_5];
        VAR_8 = VAR_9[VAR_10[VAR_1] - VAR_5];
        *VAR_3 = FUNC_0(VAR_6[0], VAR_7[0], VAR_8[0]);
        *VAR_4 = FUNC_0(VAR_6[1], VAR_7[1], VAR_8[1]);
    }
    return *VAR_9;
}
