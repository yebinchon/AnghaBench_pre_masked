
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_6__ {scalar_t__* mc_mb_var; scalar_t__* mb_var; } ;
struct TYPE_7__ {scalar_t__ motion_est; scalar_t__ codec_id; int mb_num; int mb_height; int mb_stride; int mb_width; int* mb_type; scalar_t__ pict_type; TYPE_2__ current_picture; TYPE_1__* avctx; scalar_t__ msmpeg4_version; int * fcode_tab; } ;
struct TYPE_5__ {int me_range; scalar_t__ strict_std_compliance; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_2(MpegEncContext * VAR_6, int16_t (*VAR_7)[2], int VAR_8)
{
    if (VAR_6->motion_est != VAR_3) {
        int VAR_9[8];
        int VAR_10, VAR_11, VAR_12= VAR_6->avctx->me_range ? VAR_6->avctx->me_range : (VAR_4/2);
        uint8_t * VAR_13= VAR_6->fcode_tab;
        int VAR_14=-1;
        int VAR_15=-10000000;

        if(VAR_6->msmpeg4_version)
            VAR_12= FUNC_1(VAR_12, 16);
        else if(VAR_6->codec_id == VAR_0 && VAR_6->avctx->strict_std_compliance >= VAR_2)
            VAR_12= FUNC_1(VAR_12, 256);

        for(VAR_10=0; VAR_10<8; VAR_10++) VAR_9[VAR_10]= VAR_6->mb_num*(8-VAR_10);

        for(VAR_11=0; VAR_11<VAR_6->mb_height; VAR_11++){
            int VAR_16;
            int VAR_17= VAR_11*VAR_6->mb_stride;
            for(VAR_16=0; VAR_16<VAR_6->mb_width; VAR_16++){
                if(VAR_6->mb_type[VAR_17] & VAR_8){
                    int VAR_18= VAR_7[VAR_17][0];
                    int VAR_19= VAR_7[VAR_17][1];
                    int VAR_20= FUNC_0(VAR_13[VAR_18 + VAR_5],
                                     VAR_13[VAR_19 + VAR_5]);
                    int VAR_21;

                        if(VAR_18 >= VAR_12 || VAR_18 < -VAR_12 ||
                           VAR_19 >= VAR_12 || VAR_19 < -VAR_12)
                            continue;

                    for(VAR_21=0; VAR_21<VAR_20 && VAR_21<8; VAR_21++){
                        if(VAR_6->pict_type==VAR_1 || VAR_6->current_picture.mc_mb_var[VAR_17] < VAR_6->current_picture.mb_var[VAR_17])
                            VAR_9[VAR_21]-= 170;
                    }
                }
                VAR_17++;
            }
        }

        for(VAR_10=1; VAR_10<8; VAR_10++){
            if(VAR_9[VAR_10] > VAR_15){
                VAR_15= VAR_9[VAR_10];
                VAR_14= VAR_10;
            }
        }

        return VAR_14;
    }else{
        return 1;
    }
}
