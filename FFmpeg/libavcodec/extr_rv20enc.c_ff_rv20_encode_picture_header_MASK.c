
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pict_type; scalar_t__ qscale; scalar_t__ no_rounding; int f_code; scalar_t__ unrestricted_mv; scalar_t__ alt_inter_vlc; scalar_t__ umvplus; int modified_quant; int loop_filter; int h263_aic; int c_dc_scale_table; int y_dc_scale_table; int pb; scalar_t__ mb_y; scalar_t__ mb_x; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int,scalar_t__) ;
 int FUNC_3 (int *,int,int) ;

void FUNC_4(MpegEncContext *VAR_3, int VAR_4){
    FUNC_2(&VAR_3->pb, 2, VAR_3->pict_type);
    FUNC_2(&VAR_3->pb, 1, 0);
    FUNC_2(&VAR_3->pb, 5, VAR_3->qscale);

    FUNC_3(&VAR_3->pb, 8, VAR_4);
    VAR_3->mb_x= VAR_3->mb_y= 0;
    FUNC_1(VAR_3);

    FUNC_2(&VAR_3->pb, 1, VAR_3->no_rounding);

    FUNC_0(VAR_3->f_code == 1);
    FUNC_0(VAR_3->unrestricted_mv == 0);
    FUNC_0(VAR_3->alt_inter_vlc == 0);
    FUNC_0(VAR_3->umvplus == 0);
    FUNC_0(VAR_3->modified_quant==1);
    FUNC_0(VAR_3->loop_filter==1);

    VAR_3->h263_aic= VAR_3->pict_type == VAR_0;
    if(VAR_3->h263_aic){
        VAR_3->y_dc_scale_table=
        VAR_3->c_dc_scale_table= VAR_1;
    }else{
        VAR_3->y_dc_scale_table=
        VAR_3->c_dc_scale_table= VAR_2;
    }
}
