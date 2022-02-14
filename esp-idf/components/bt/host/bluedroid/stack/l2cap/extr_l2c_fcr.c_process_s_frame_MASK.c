
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* send_f_rsp; scalar_t__ local_busy; scalar_t__ srej_sent; void* remote_busy; void* rej_sent; int * s_frames_rcvd; } ;
typedef TYPE_1__ tL2C_FCRB ;
struct TYPE_11__ {TYPE_1__ fcrb; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef int UINT8 ;
typedef size_t UINT16 ;
struct TYPE_12__ {scalar_t__ len; } ;
typedef TYPE_3__ BT_HDR ;
typedef void* BOOLEAN ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;



 size_t VAR_6 ;

 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int const,size_t) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_7 (tL2C_CCB *VAR_9, BT_HDR *VAR_10, UINT16 VAR_11)
{
    FUNC_2(VAR_9 != ((void*)0));
    FUNC_2(VAR_10 != ((void*)0));

    tL2C_FCRB *VAR_12 = &VAR_9->fcrb;
    UINT16 VAR_13 = (VAR_11 & VAR_5) >> VAR_6;
    BOOLEAN VAR_14;
    BOOLEAN VAR_15 = VAR_8;

    if (VAR_10->len != 0) {
        FUNC_1 ("Incorrect S-frame Length (%d)", VAR_10->len);
    }

    FUNC_0 ("process_s_frame ctrl_word 0x%04x fcrb_remote_busy:%d", VAR_11, VAR_12->remote_busy);


    VAR_9->fcrb.s_frames_rcvd[VAR_13]++;


    if (VAR_11 & VAR_2) {
        VAR_12->rej_sent = VAR_0;
        VAR_12->send_f_rsp = VAR_8;
    }

    switch (VAR_13) {
    case 129:
        VAR_14 = VAR_12->remote_busy;
        VAR_12->remote_busy = VAR_0;

        if ( (VAR_11 & VAR_1) || (VAR_14) ) {
            VAR_15 = FUNC_6 (VAR_9, VAR_7);
        }
        break;

    case 131:
        VAR_12->remote_busy = VAR_0;
        VAR_15 = FUNC_6 (VAR_9, VAR_7);
        break;

    case 130:
        VAR_12->remote_busy = VAR_8;
        FUNC_4 (VAR_9);
        break;

    case 128:
        VAR_12->remote_busy = VAR_0;
        VAR_15 = FUNC_6 (VAR_9, (UINT8)((VAR_11 & VAR_3) >> VAR_4));
        break;
    }

    if (VAR_15) {

        if (VAR_12->send_f_rsp) {
            if (VAR_12->srej_sent) {
                FUNC_3 (VAR_9, 128, VAR_1);
            } else if (VAR_12->local_busy) {
                FUNC_3 (VAR_9, 130, VAR_1);
            } else {
                FUNC_3 (VAR_9, 129, VAR_1);
            }

            VAR_12->send_f_rsp = VAR_0;
        }
    } else {
        FUNC_0 ("process_s_frame hit_max_retries");
    }

    FUNC_5 (VAR_10);
}
