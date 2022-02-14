
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* avctx; } ;
struct TYPE_9__ {int*** motion_val; int* mb_type; } ;
struct TYPE_10__ {int f_code; scalar_t__ pict_type; scalar_t__ out_format; scalar_t__ codec_id; int b8_stride; int mb_height; int mb_stride; int mb_width; int* mb_type; TYPE_3__ current_picture; TYPE_2__* avctx; scalar_t__ msmpeg4_version; TYPE_5__ me; } ;
struct TYPE_8__ {scalar_t__ strict_std_compliance; int flags; } ;
struct TYPE_7__ {int me_range; } ;
typedef TYPE_4__ MpegEncContext ;
typedef TYPE_5__ MotionEstContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;

void FUNC_1(MpegEncContext * VAR_6, int VAR_7)
{
    MotionEstContext * const VAR_8= &VAR_6->me;
    const int VAR_9= VAR_6->f_code;
    int VAR_10, VAR_11;
    FUNC_0(VAR_6->pict_type==VAR_2);

    VAR_11 = (((VAR_6->out_format == VAR_5 || VAR_6->msmpeg4_version) ? 8 : 16) << VAR_9);

    FUNC_0(VAR_11 <= 16 || !VAR_6->msmpeg4_version);
    FUNC_0(VAR_11 <=256 || !(VAR_6->codec_id == VAR_1 && VAR_6->avctx->strict_std_compliance >= VAR_4));

    if(VAR_8->avctx->me_range && VAR_11 > VAR_8->avctx->me_range) VAR_11= VAR_8->avctx->me_range;

    if (VAR_6->avctx->flags & VAR_0) {
        const int VAR_12= VAR_6->b8_stride;


        for(VAR_10=0; VAR_10<VAR_6->mb_height; VAR_10++){
            int VAR_13= VAR_10*2*VAR_12;
            int VAR_14= VAR_10*VAR_6->mb_stride;
            int VAR_15;

            for(VAR_15=0; VAR_15<VAR_6->mb_width; VAR_15++){
                if(VAR_6->mb_type[VAR_14]&VAR_3){
                    int VAR_16;
                    for(VAR_16=0; VAR_16<4; VAR_16++){
                        int VAR_17= (VAR_16& 1) + (VAR_16>>1)*VAR_12;
                        int VAR_18 = VAR_6->current_picture.motion_val[0][ VAR_13 + VAR_17 ][0];
                        int VAR_19 = VAR_6->current_picture.motion_val[0][ VAR_13 + VAR_17 ][1];

                        if( VAR_18 >=VAR_11 || VAR_18 <-VAR_11
                           || VAR_19 >=VAR_11 || VAR_19 <-VAR_11){
                            VAR_6->mb_type[VAR_14] &= ~VAR_3;
                            VAR_6->mb_type[VAR_14] |= VAR_7;
                            VAR_6->current_picture.mb_type[VAR_14] = VAR_7;
                        }
                    }
                }
                VAR_13+=2;
                VAR_14++;
            }
        }
    }
}
