
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int dia_size; int pre_dia_size; int me_sub_cmp; int me_cmp; int me_pre_cmp; int mb_cmp; int flags; } ;
struct TYPE_13__ {void** me_sub_cmp; void** me_cmp; void** mb_cmp; void** me_pre_cmp; } ;
struct TYPE_12__ {int stride; int uvstride; void* sub_motion_search; int ** hpel_put; TYPE_8__* avctx; int hpel_avg; int qpel_put; int qpel_avg; void* mb_flags; void* sub_flags; void* flags; } ;
struct TYPE_10__ {int ** put_pixels_tab; int ** put_no_rnd_pixels_tab; int avg_pixels_tab; } ;
struct TYPE_9__ {int put_qpel_pixels_tab; int put_no_rnd_qpel_pixels_tab; int avg_qpel_pixels_tab; } ;
struct TYPE_11__ {scalar_t__ codec_id; int linesize; int uvlinesize; int mb_width; TYPE_6__ mecc; TYPE_2__ hdsp; scalar_t__ no_rounding; TYPE_1__ qdsp; TYPE_8__* avctx; TYPE_4__ me; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ MotionEstContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_8__*,int ,char*) ;
 int FUNC_4 (TYPE_6__*,void**,int) ;
 void* FUNC_5 (TYPE_4__* const,int ,int) ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;

int FUNC_6(MpegEncContext *VAR_16){
    MotionEstContext * const VAR_17= &VAR_16->me;
    int VAR_18= FUNC_2(VAR_9>>VAR_8, 1<<VAR_8);
    int VAR_19= FUNC_1(FUNC_0(VAR_16->avctx->dia_size)&255, FUNC_0(VAR_16->avctx->pre_dia_size)&255);

    if(FUNC_2(VAR_16->avctx->dia_size, VAR_16->avctx->pre_dia_size) < -FUNC_2(VAR_9, VAR_7)){
        FUNC_3(VAR_16->avctx, VAR_3, "ME_MAP size is too small for SAB diamond\n");
        return -1;
    }

    VAR_17->avctx= VAR_16->avctx;

    if(VAR_16->codec_id == VAR_1)
        VAR_17->avctx->me_sub_cmp = VAR_17->avctx->me_cmp;

    if(VAR_18 < 2*VAR_19 && !VAR_17->stride){
        FUNC_3(VAR_16->avctx, VAR_4, "ME_MAP size may be a little small for the selected diamond size\n");
    }

    FUNC_4(&VAR_16->mecc, VAR_16->mecc.me_pre_cmp, VAR_17->avctx->me_pre_cmp);
    FUNC_4(&VAR_16->mecc, VAR_16->mecc.me_cmp, VAR_17->avctx->me_cmp);
    FUNC_4(&VAR_16->mecc, VAR_16->mecc.me_sub_cmp, VAR_17->avctx->me_sub_cmp);
    FUNC_4(&VAR_16->mecc, VAR_16->mecc.mb_cmp, VAR_17->avctx->mb_cmp);

    VAR_17->flags = FUNC_5(VAR_17, 0, VAR_17->avctx->me_cmp &VAR_5);
    VAR_17->sub_flags= FUNC_5(VAR_17, 0, VAR_17->avctx->me_sub_cmp&VAR_5);
    VAR_17->mb_flags = FUNC_5(VAR_17, 0, VAR_17->avctx->mb_cmp &VAR_5);


    if (VAR_16->avctx->flags & VAR_0) {
        VAR_17->sub_motion_search= VAR_12;
        VAR_17->qpel_avg = VAR_16->qdsp.avg_qpel_pixels_tab;
        if (VAR_16->no_rounding)
            VAR_17->qpel_put = VAR_16->qdsp.put_no_rnd_qpel_pixels_tab;
        else
            VAR_17->qpel_put = VAR_16->qdsp.put_qpel_pixels_tab;
    }else{
        if(VAR_17->avctx->me_sub_cmp&VAR_5)
            VAR_17->sub_motion_search= VAR_10;
        else if( VAR_17->avctx->me_sub_cmp == VAR_6
                && VAR_17->avctx-> me_cmp == VAR_6
                && VAR_17->avctx-> mb_cmp == VAR_6)
            VAR_17->sub_motion_search= VAR_13;
        else
            VAR_17->sub_motion_search= VAR_10;
    }
    VAR_17->hpel_avg = VAR_16->hdsp.avg_pixels_tab;
    if (VAR_16->no_rounding)
        VAR_17->hpel_put = VAR_16->hdsp.put_no_rnd_pixels_tab;
    else
        VAR_17->hpel_put = VAR_16->hdsp.put_pixels_tab;

    if(VAR_16->linesize){
        VAR_17->stride = VAR_16->linesize;
        VAR_17->uvstride= VAR_16->uvlinesize;
    }else{
        VAR_17->stride = 16*VAR_16->mb_width + 32;
        VAR_17->uvstride= 8*VAR_16->mb_width + 16;
    }




    if (VAR_16->codec_id != VAR_2) {
        if ((VAR_17->avctx->me_cmp & VAR_5) )
            VAR_16->mecc.me_cmp[2] = VAR_14;
        if ((VAR_17->avctx->me_sub_cmp & VAR_5) && !VAR_16->mecc.me_sub_cmp[2])
            VAR_16->mecc.me_sub_cmp[2] = VAR_14;
        VAR_17->hpel_put[2][0]= VAR_17->hpel_put[2][1]=
        VAR_17->hpel_put[2][2]= VAR_17->hpel_put[2][3]= VAR_15;
    }

    if(VAR_16->codec_id == VAR_1){
        VAR_17->sub_motion_search= VAR_11;
    }

    return 0;
}
