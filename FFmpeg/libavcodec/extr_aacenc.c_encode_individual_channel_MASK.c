
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {int pb; TYPE_2__* coder; } ;
struct TYPE_21__ {int present; } ;
struct TYPE_23__ {int* sf_idx; TYPE_1__ tns; int pulse; int ics; } ;
struct TYPE_22__ {int (* encode_tns_info ) (TYPE_4__*,TYPE_3__*) ;int (* encode_ltp_info ) (TYPE_4__*,TYPE_3__*,int ) ;int (* encode_main_pred ) (TYPE_4__*,TYPE_3__*) ;} ;
typedef TYPE_3__ SingleChannelElement ;
typedef int AVCodecContext ;
typedef TYPE_4__ AACEncContext ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int *,TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_0, AACEncContext *VAR_1,
                                     SingleChannelElement *VAR_2,
                                     int VAR_3)
{
    FUNC_4(&VAR_1->pb, 8, VAR_2->sf_idx[0]);
    if (!VAR_3) {
        FUNC_5(VAR_1, &VAR_2->ics);
        if (VAR_1->coder->encode_main_pred)
            VAR_1->coder->encode_main_pred(VAR_1, VAR_2);
        if (VAR_1->coder->encode_ltp_info)
            VAR_1->coder->encode_ltp_info(VAR_1, VAR_2, 0);
    }
    FUNC_0(VAR_1, VAR_2);
    FUNC_2(VAR_0, VAR_1, VAR_2);
    FUNC_1(VAR_1, &VAR_2->pulse);
    FUNC_4(&VAR_1->pb, 1, !!VAR_2->tns.present);
    if (VAR_1->coder->encode_tns_info)
        VAR_1->coder->encode_tns_info(VAR_1, VAR_2);
    FUNC_4(&VAR_1->pb, 1, 0);
    FUNC_3(VAR_1, VAR_2);
    return 0;
}
