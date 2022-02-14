
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_7__ {TYPE_1__* avctx; } ;
struct TYPE_6__ {scalar_t__ out_format; int mb_height; int mb_stride; int mb_width; int* mb_type; scalar_t__ msmpeg4_version; TYPE_3__ me; } ;
struct TYPE_5__ {int me_range; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ MotionEstContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(MpegEncContext * VAR_2, uint8_t *VAR_3, int VAR_4,
                     int16_t (*VAR_5)[2], int VAR_6, int VAR_7, int VAR_8)
{
    MotionEstContext * const VAR_9= &VAR_2->me;
    int VAR_10, VAR_11, VAR_12;


    int VAR_13 = (((VAR_2->out_format == VAR_1 || VAR_2->msmpeg4_version) ? 8 : 16) << VAR_6);

    if(VAR_9->avctx->me_range && VAR_13 > VAR_9->avctx->me_range) VAR_13= VAR_9->avctx->me_range;

    VAR_11= VAR_13;
    VAR_12= VAR_3 ? VAR_13>>1 : VAR_13;


    for(VAR_10=0; VAR_10<VAR_2->mb_height; VAR_10++){
        int VAR_14;
        int VAR_15= VAR_10*VAR_2->mb_stride;
        for(VAR_14=0; VAR_14<VAR_2->mb_width; VAR_14++){
            if (VAR_2->mb_type[VAR_15] & VAR_7){
                if (!VAR_3 || VAR_3[VAR_15] == VAR_4) {
                    if( VAR_5[VAR_15][0] >=VAR_11 || VAR_5[VAR_15][0] <-VAR_11
                       || VAR_5[VAR_15][1] >=VAR_12 || VAR_5[VAR_15][1] <-VAR_12){

                        if(VAR_8){
                            if (VAR_5[VAR_15][0] > VAR_11-1) VAR_5[VAR_15][0]= VAR_11-1;
                            else if(VAR_5[VAR_15][0] < -VAR_11 ) VAR_5[VAR_15][0]= -VAR_11;
                            if (VAR_5[VAR_15][1] > VAR_12-1) VAR_5[VAR_15][1]= VAR_12-1;
                            else if(VAR_5[VAR_15][1] < -VAR_12 ) VAR_5[VAR_15][1]= -VAR_12;
                        }else{
                            VAR_2->mb_type[VAR_15] &= ~VAR_7;
                            VAR_2->mb_type[VAR_15] |= VAR_0;
                            VAR_5[VAR_15][0]=
                            VAR_5[VAR_15][1]= 0;
                        }
                    }
                }
            }
            VAR_15++;
        }
    }
}
