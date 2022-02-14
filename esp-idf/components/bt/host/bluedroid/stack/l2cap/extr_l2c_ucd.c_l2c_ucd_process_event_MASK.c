
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int status; } ;
typedef TYPE_2__ tL2C_CONN_INFO ;
struct TYPE_16__ {int chnl_state; int timer_entry; TYPE_1__* p_lcb; int fixed_chnl_idle_tout; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int UINT16 ;
struct TYPE_14__ {int ucd_in_sec_pending_q; int ucd_out_sec_pending_q; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,void*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;

BOOLEAN FUNC_13(tL2C_CCB *VAR_5, UINT16 VAR_6, void *VAR_7)
{

    BOOLEAN VAR_8 = VAR_4;

    switch (VAR_5->chnl_state) {
    case 139:
        switch (VAR_6) {
        case 132:

            if (!FUNC_5 (VAR_5)) {

                if (!FUNC_6(VAR_5)) {
                    VAR_5->chnl_state = 138;
                }
            }
            break;

        case 135:
            FUNC_2(VAR_5->p_lcb->ucd_in_sec_pending_q, VAR_7, VAR_3);
            break;

        case 133:
            FUNC_9(VAR_5, VAR_7);
            break;

        case 134:

            if (!FUNC_5 (VAR_5)) {

                if (!FUNC_6(VAR_5)) {
                    VAR_5->chnl_state = 138;
                }
            }
            break;

        default:
            VAR_8 = VAR_2;
            break;
        }
        break;

    case 137:
        switch (VAR_6) {
        case 129:

            if (!FUNC_6(VAR_5)) {
                VAR_5->chnl_state = 138;
            }
            break;

        case 131:
            VAR_5->chnl_state = 138;
            FUNC_11(VAR_5);

            if (! FUNC_3(VAR_5->p_lcb->ucd_out_sec_pending_q))
            {


                FUNC_0 (&VAR_5->timer_entry, VAR_1, 0);
            } else {

                FUNC_0 (&VAR_5->timer_entry, VAR_1, VAR_5->fixed_chnl_idle_tout);
            }
            break;

        case 130:
            VAR_5->chnl_state = 138;
            FUNC_8(VAR_5);


            FUNC_0 (&VAR_5->timer_entry, VAR_1, VAR_5->fixed_chnl_idle_tout);
            break;

        case 133:
            FUNC_9(VAR_5, VAR_7);
            break;

        case 135:
            FUNC_2(VAR_5->p_lcb->ucd_in_sec_pending_q, VAR_7, VAR_3);
            break;

        case 134:

            FUNC_5 (VAR_5);
            break;

        default:
            VAR_8 = VAR_2;
            break;
        }
        break;


    case 136:
        switch (VAR_6) {
        case 131:
            VAR_5->chnl_state = 138;
            FUNC_10 (VAR_5);

            if (! FUNC_3(VAR_5->p_lcb->ucd_in_sec_pending_q)) {


                FUNC_0 (&VAR_5->timer_entry, VAR_1, 0);
            } else {

                FUNC_0 (&VAR_5->timer_entry, VAR_1, VAR_5->fixed_chnl_idle_tout);
            }
            break;

        case 130:
            if (((tL2C_CONN_INFO *)VAR_7)->status == VAR_0) {
                VAR_8 = VAR_2;
                break;
            }
            VAR_5->chnl_state = 138;
            FUNC_7 (VAR_5);


            FUNC_0 (&VAR_5->timer_entry, VAR_1, VAR_5->fixed_chnl_idle_tout);
            break;

        case 133:
            FUNC_9(VAR_5, VAR_7);
            break;

        case 135:
            FUNC_2(VAR_5->p_lcb->ucd_in_sec_pending_q, VAR_7, VAR_3);
            break;

        case 129:

            if (!FUNC_4(VAR_5)) {
                VAR_5->chnl_state = 138;
            }
            break;

        case 134:

            FUNC_5 (VAR_5);
            break;

        default:
            VAR_8 = VAR_2;
            break;
        }
        break;

    case 138:
        switch (VAR_6) {
        case 135:

            FUNC_1 (&VAR_5->timer_entry);

            FUNC_2(VAR_5->p_lcb->ucd_in_sec_pending_q, VAR_7, VAR_3);
            FUNC_4 (VAR_5);
            break;

        case 133:

            FUNC_1 (&VAR_5->timer_entry);

            FUNC_9(VAR_5, VAR_7);



            FUNC_6 (VAR_5);
            break;

        case 128:

            if ((!FUNC_4(VAR_5))
                    && (!FUNC_6(VAR_5))) {
                FUNC_12 (VAR_5);
            }
            break;

        case 134:

            FUNC_5 (VAR_5);
            break;

        default:
            VAR_8 = VAR_2;
            break;
        }
        break;

    default:
        VAR_8 = VAR_2;
        break;
    }

    return VAR_8;
}
