
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ codec_id; scalar_t__ out_format; int misc_bits; scalar_t__ partitioned_frame; TYPE_1__* avctx; int pb; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(MpegEncContext *VAR_5){
    if(VAR_3 && VAR_5->codec_id==VAR_1){
        if(VAR_5->partitioned_frame){
            FUNC_2(VAR_5);
        }

        FUNC_3(&VAR_5->pb);
    }else if(VAR_2 && VAR_5->out_format == VAR_4){
        FUNC_1(VAR_5);
    }

    FUNC_0(&VAR_5->pb);
    FUNC_4(&VAR_5->pb);

    if ((VAR_5->avctx->flags & VAR_0) && !VAR_5->partitioned_frame)
        VAR_5->misc_bits+= FUNC_5(VAR_5);
}
