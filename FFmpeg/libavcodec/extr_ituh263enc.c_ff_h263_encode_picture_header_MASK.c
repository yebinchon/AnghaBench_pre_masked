
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int num; int den; } ;
struct TYPE_9__ {int custom_pcf; int picture_number; int width; int height; scalar_t__ pict_type; int obmc; int qscale; int umvplus; int h263_aic; int loop_filter; int h263_slice_structured; int alt_inter_vlc; int modified_quant; int no_rounding; int aspect_ratio_info; scalar_t__ mb_x; scalar_t__ mb_y; int pb; TYPE_2__* avctx; scalar_t__ h263_plus; int ptr_lastgob; } ;
struct TYPE_7__ {long long num; long long den; } ;
struct TYPE_8__ {TYPE_6__ sample_aspect_ratio; TYPE_1__ time_base; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (long long) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_6__) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int) ;

void FUNC_11(MpegEncContext * VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11=1;
    int VAR_12=60;
    int VAR_13= VAR_2;

    if(VAR_4->h263_plus){
        for(VAR_9=0; VAR_9<2; VAR_9++){
            int VAR_14, VAR_15;
            VAR_14= (VAR_4->avctx->time_base.num*1800000LL + 500LL*VAR_4->avctx->time_base.den) / ((1000LL+VAR_9)*VAR_4->avctx->time_base.den);
            VAR_14= FUNC_3(VAR_14, 1, 127);
            VAR_15= FUNC_0(VAR_4->avctx->time_base.num*1800000LL - (1000LL+VAR_9)*VAR_4->avctx->time_base.den*VAR_14);
            if(VAR_15 < VAR_13){
                VAR_13= VAR_15;
                VAR_12= VAR_14;
                VAR_11= VAR_9;
            }
        }
    }
    VAR_4->custom_pcf= VAR_11!=1 || VAR_12!=60;
    VAR_7= 1800000;
    VAR_8= (1000+VAR_11)*VAR_12;

    FUNC_4(&VAR_4->pb);


    VAR_4->ptr_lastgob = FUNC_9(&VAR_4->pb);
    FUNC_8(&VAR_4->pb, 22, 0x20);
    VAR_10= VAR_4->picture_number * (int64_t)VAR_7 * VAR_4->avctx->time_base.num /
                         (VAR_8 * (int64_t)VAR_4->avctx->time_base.den);
    FUNC_10(&VAR_4->pb, 8, VAR_10);

    FUNC_8(&VAR_4->pb, 1, 1);
    FUNC_8(&VAR_4->pb, 1, 0);
    FUNC_8(&VAR_4->pb, 1, 0);
    FUNC_8(&VAR_4->pb, 1, 0);
    FUNC_8(&VAR_4->pb, 1, 0);

    VAR_6 = FUNC_7(VAR_3, FUNC_1(VAR_3), VAR_4->width, VAR_4->height);
    if (!VAR_4->h263_plus) {

        FUNC_8(&VAR_4->pb, 3, VAR_6);
        FUNC_8(&VAR_4->pb, 1, (VAR_4->pict_type == VAR_0));



        FUNC_8(&VAR_4->pb, 1, 0);
        FUNC_8(&VAR_4->pb, 1, 0);
        FUNC_8(&VAR_4->pb, 1, VAR_4->obmc);
        FUNC_8(&VAR_4->pb, 1, 0);
        FUNC_8(&VAR_4->pb, 5, VAR_4->qscale);
        FUNC_8(&VAR_4->pb, 1, 0);
    } else {
        int VAR_16=1;



        FUNC_8(&VAR_4->pb, 3, 7);
        FUNC_8(&VAR_4->pb,3,VAR_16);
        if (VAR_6 == 8)
            FUNC_8(&VAR_4->pb,3,6);
        else
            FUNC_8(&VAR_4->pb, 3, VAR_6);

        FUNC_8(&VAR_4->pb,1, VAR_4->custom_pcf);
        FUNC_8(&VAR_4->pb,1, VAR_4->umvplus);
        FUNC_8(&VAR_4->pb,1,0);
        FUNC_8(&VAR_4->pb,1,VAR_4->obmc);
        FUNC_8(&VAR_4->pb,1,VAR_4->h263_aic);
        FUNC_8(&VAR_4->pb,1,VAR_4->loop_filter);
        FUNC_8(&VAR_4->pb,1,VAR_4->h263_slice_structured);
        FUNC_8(&VAR_4->pb,1,0);
        FUNC_8(&VAR_4->pb,1,0);
        FUNC_8(&VAR_4->pb,1,VAR_4->alt_inter_vlc);
        FUNC_8(&VAR_4->pb,1,VAR_4->modified_quant);
        FUNC_8(&VAR_4->pb,1,1);
        FUNC_8(&VAR_4->pb,3,0);

        FUNC_8(&VAR_4->pb, 3, VAR_4->pict_type == VAR_0);

        FUNC_8(&VAR_4->pb,1,0);
        FUNC_8(&VAR_4->pb,1,0);
        FUNC_8(&VAR_4->pb,1,VAR_4->no_rounding);
        FUNC_8(&VAR_4->pb,2,0);
        FUNC_8(&VAR_4->pb,1,1);


        FUNC_8(&VAR_4->pb, 1, 0);

        if (VAR_6 == 8) {

            VAR_4->aspect_ratio_info= FUNC_5(VAR_4->avctx->sample_aspect_ratio);

            FUNC_8(&VAR_4->pb,4,VAR_4->aspect_ratio_info);
            FUNC_8(&VAR_4->pb,9,(VAR_4->width >> 2) - 1);
            FUNC_8(&VAR_4->pb,1,1);
            FUNC_8(&VAR_4->pb,9,(VAR_4->height >> 2));
            if (VAR_4->aspect_ratio_info == VAR_1){
                FUNC_8(&VAR_4->pb, 8, VAR_4->avctx->sample_aspect_ratio.num);
                FUNC_8(&VAR_4->pb, 8, VAR_4->avctx->sample_aspect_ratio.den);
            }
        }
        if(VAR_4->custom_pcf){
            if(VAR_16){
                FUNC_8(&VAR_4->pb, 1, VAR_11);
                FUNC_8(&VAR_4->pb, 7, VAR_12);
            }
            FUNC_10(&VAR_4->pb, 2, VAR_10>>8);
        }


        if (VAR_4->umvplus)


            FUNC_8(&VAR_4->pb,2,1);
        if(VAR_4->h263_slice_structured)
            FUNC_8(&VAR_4->pb,2,0);

        FUNC_8(&VAR_4->pb, 5, VAR_4->qscale);
    }

    FUNC_8(&VAR_4->pb, 1, 0);

    if(VAR_4->h263_slice_structured){
        FUNC_8(&VAR_4->pb, 1, 1);

        FUNC_2(VAR_4->mb_x == 0 && VAR_4->mb_y == 0);
        FUNC_6(VAR_4);

        FUNC_8(&VAR_4->pb, 1, 1);
    }
}
