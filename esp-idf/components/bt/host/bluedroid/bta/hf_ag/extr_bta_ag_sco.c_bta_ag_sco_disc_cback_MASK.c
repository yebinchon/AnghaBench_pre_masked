
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef scalar_t__ UINT16 ;
struct TYPE_9__ {scalar_t__ state; TYPE_5__* p_curr_scb; } ;
struct TYPE_12__ {TYPE_2__ sco; TYPE_1__* scb; } ;
struct TYPE_11__ {scalar_t__ sco_idx; scalar_t__ inuse_codec; scalar_t__ codec_msbc_settings; int codec_fallback; scalar_t__ in_use; } ;
struct TYPE_10__ {scalar_t__ layer_specific; int event; } ;
struct TYPE_8__ {scalar_t__ state; scalar_t__ sco_idx; scalar_t__ in_use; } ;
typedef TYPE_3__ BT_HDR ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int *,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 TYPE_7__ VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(UINT16 VAR_11)
{
    BT_HDR *VAR_12;
    UINT16 VAR_13 = 0;

    FUNC_0 ("bta_ag_sco_disc_cback(): sco_idx: 0x%x  p_cur_scb: 0x%08x  sco.state: %d", (unsigned int)VAR_11, (unsigned int)VAR_10.sco.p_curr_scb, (unsigned int)VAR_10.sco.state);

    FUNC_0 ("bta_ag_sco_disc_cback(): scb[0] addr: 0x%08x  in_use: %u  sco_idx: 0x%x  sco state: %u",
                       (unsigned int) &VAR_10.scb[0], (unsigned int)VAR_10.scb[0].in_use, (unsigned int)VAR_10.scb[0].sco_idx, (unsigned int)VAR_10.scb[0].state);
    FUNC_0 ("bta_ag_sco_disc_cback(): scb[1] addr: 0x%08x  in_use: %u  sco_idx: 0x%x  sco state: %u",
                       (unsigned int) &VAR_10.scb[1], (unsigned int) VAR_10.scb[1].in_use, (unsigned int) VAR_10.scb[1].sco_idx, (unsigned int) VAR_10.scb[1].state);


    if (VAR_10.sco.p_curr_scb != ((void*)0) && VAR_10.sco.p_curr_scb->in_use)
    {

        if (VAR_10.sco.p_curr_scb->sco_idx != VAR_11)
        {
            if (VAR_10.sco.p_curr_scb->sco_idx != 0xFFFF)
                return;
        }
        VAR_13 = FUNC_3(VAR_10.sco.p_curr_scb);
    }

    if (VAR_13 != 0)
    {

        tBTM_STATUS VAR_14 = FUNC_1(VAR_7, ((void*)0), ((void*)0), VAR_9);
        FUNC_0("bta_ag_sco_disc_cback sco close config status = %d", VAR_14);

        FUNC_4();




        if(VAR_10.sco.p_curr_scb->inuse_codec == VAR_0)
        {

            FUNC_2 (VAR_8);



            if (FUNC_5 (VAR_10.sco.p_curr_scb))
            {
                if (VAR_10.sco.p_curr_scb->codec_msbc_settings == VAR_4)
                {
                     FUNC_0("Fallback to mSBC T1 settings");
                     VAR_10.sco.p_curr_scb->codec_msbc_settings = VAR_3;
                }
                else
                {
                    FUNC_0("Fallback to CVSD settings");
                    VAR_10.sco.p_curr_scb->codec_fallback = VAR_9;
                }
            }
        }

        VAR_10.sco.p_curr_scb->inuse_codec = VAR_1;


        if ((VAR_12 = (BT_HDR *) FUNC_7(sizeof(BT_HDR))) != ((void*)0))
        {
            VAR_12->event = VAR_2;
            VAR_12->layer_specific = VAR_13;
            FUNC_6(VAR_12);
        }
    }

    else
    {
        FUNC_0("no scb for ag_sco_disc_cback");


        if (VAR_10.sco.p_curr_scb != ((void*)0))
        {
            VAR_10.sco.p_curr_scb->sco_idx = VAR_6;
            VAR_10.sco.p_curr_scb = ((void*)0);
            VAR_10.sco.state = VAR_5;
        }
    }
}
