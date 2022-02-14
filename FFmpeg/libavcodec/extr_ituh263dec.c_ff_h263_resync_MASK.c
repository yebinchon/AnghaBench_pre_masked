
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ codec_id; int gb; TYPE_1__* avctx; int last_resync_gb; scalar_t__ studio_profile; } ;
struct TYPE_5__ {int priv_data; } ;
typedef TYPE_2__ MpegEncContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

int FUNC_10(MpegEncContext *VAR_3){
    int VAR_4, VAR_5, VAR_6;



    if(VAR_3->codec_id==VAR_0 && VAR_3->studio_profile) {
        FUNC_0(&VAR_3->gb);

        while (FUNC_4(&VAR_3->gb) >= 32 && FUNC_7(&VAR_3->gb, 32) != VAR_2) {
            FUNC_2(&VAR_3->gb, 8);
        }

        if (FUNC_4(&VAR_3->gb) >= 32 && FUNC_7(&VAR_3->gb, 32) == VAR_2)
            return FUNC_3(&VAR_3->gb);
        else
            return -1;
    }

    if(VAR_3->codec_id==VAR_0){
        FUNC_9(&VAR_3->gb);
        FUNC_0(&VAR_3->gb);
    }

    if(FUNC_6(&VAR_3->gb, 16)==0){
        VAR_5= FUNC_3(&VAR_3->gb);
        if(VAR_1 && VAR_3->codec_id==VAR_0)
            VAR_6= FUNC_1(VAR_3->avctx->priv_data);
        else
            VAR_6= FUNC_5(VAR_3);
        if(VAR_6>=0)
            return VAR_5;
    }

    VAR_3->gb= VAR_3->last_resync_gb;
    FUNC_0(&VAR_3->gb);
    VAR_4= FUNC_4(&VAR_3->gb);

    for(;VAR_4>16+1+5+5; VAR_4-=8){
        if(FUNC_6(&VAR_3->gb, 16)==0){
            GetBitContext VAR_7= VAR_3->gb;

            VAR_5= FUNC_3(&VAR_3->gb);
            if(VAR_1 && VAR_3->codec_id==VAR_0)
                VAR_6= FUNC_1(VAR_3->avctx->priv_data);
            else
                VAR_6= FUNC_5(VAR_3);
            if(VAR_6>=0)
                return VAR_5;

            VAR_3->gb= VAR_7;
        }
        FUNC_8(&VAR_3->gb, 8);
    }

    return -1;
}
