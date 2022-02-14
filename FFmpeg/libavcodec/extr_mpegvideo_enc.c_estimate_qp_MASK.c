
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* f; } ;
struct TYPE_16__ {int next_lambda; int codec_id; int lambda; int* lambda_table; TYPE_4__ current_picture; scalar_t__ adaptive_quant; TYPE_2__* current_picture_ptr; int fixed_qscale; } ;
struct TYPE_14__ {int quality; } ;
struct TYPE_13__ {TYPE_1__* f; } ;
struct TYPE_12__ {int quality; } ;
typedef TYPE_5__ MpegEncContext ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(MpegEncContext *VAR_2, int VAR_3){
    if (VAR_2->next_lambda){
        VAR_2->current_picture_ptr->f->quality =
        VAR_2->current_picture.f->quality = VAR_2->next_lambda;
        if(!VAR_3) VAR_2->next_lambda= 0;
    } else if (!VAR_2->fixed_qscale) {
        int VAR_4 = FUNC_3(VAR_2, VAR_3);
        VAR_2->current_picture_ptr->f->quality =
        VAR_2->current_picture.f->quality = VAR_4;
        if (VAR_2->current_picture.f->quality < 0)
            return -1;
    }

    if(VAR_2->adaptive_quant){
        switch(VAR_2->codec_id){
        case 128:
            if (VAR_1)
                FUNC_1(VAR_2);
            break;
        case 130:
        case 129:
        case 131:
            if (VAR_0)
                FUNC_0(VAR_2);
            break;
        default:
            FUNC_2(VAR_2);
        }

        VAR_2->lambda= VAR_2->lambda_table[0];

    }else
        VAR_2->lambda = VAR_2->current_picture.f->quality;
    FUNC_4(VAR_2);
    return 0;
}
