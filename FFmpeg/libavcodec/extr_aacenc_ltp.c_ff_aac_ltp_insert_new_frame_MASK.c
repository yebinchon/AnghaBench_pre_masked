
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int* chan_map; int ** planar_samples; TYPE_4__* cpe; } ;
struct TYPE_10__ {TYPE_3__* ch; } ;
struct TYPE_7__ {scalar_t__ lag; } ;
struct TYPE_8__ {TYPE_1__ ltp; } ;
struct TYPE_9__ {TYPE_2__ ics; int * ret_buf; int * ltp_state; } ;
typedef TYPE_3__ SingleChannelElement ;
typedef TYPE_4__ ChannelElement ;
typedef TYPE_5__ AACEncContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

void FUNC_1(AACEncContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 = 0;
    ChannelElement *VAR_8;
    SingleChannelElement *VAR_9;
    for (VAR_2 = 0; VAR_2 < VAR_1->chan_map[0]; VAR_2++) {
        VAR_8 = &VAR_1->cpe[VAR_2];
        VAR_4 = VAR_1->chan_map[VAR_2+1];
        VAR_5 = VAR_4 == VAR_0 ? 2 : 1;
        for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
            VAR_9 = &VAR_8->ch[VAR_3];
            VAR_6 = VAR_7 + VAR_3;

            FUNC_0(&VAR_9->ltp_state[0], &VAR_9->ltp_state[1024], 1024*sizeof(VAR_9->ltp_state[0]));
            FUNC_0(&VAR_9->ltp_state[1024], &VAR_1->planar_samples[VAR_6][2048], 1024*sizeof(VAR_9->ltp_state[0]));
            FUNC_0(&VAR_9->ltp_state[2048], &VAR_9->ret_buf[0], 1024*sizeof(VAR_9->ltp_state[0]));
            VAR_9->ics.ltp.lag = 0;
        }
        VAR_7 += VAR_5;
    }
}
