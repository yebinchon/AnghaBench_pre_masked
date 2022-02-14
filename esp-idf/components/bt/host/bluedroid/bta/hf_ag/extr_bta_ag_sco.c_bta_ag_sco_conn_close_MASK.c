
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ call_ind; scalar_t__ callsetup_ind; scalar_t__ post_sco; scalar_t__ retry_with_sco_only; int codec_msbc_settings; int peer_addr; int app_id; int inuse_codec; scalar_t__ svc_conn; scalar_t__ codec_fallback; int sco_idx; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
typedef int sco_state_t ;
typedef int UINT16 ;
struct TYPE_10__ {scalar_t__ p_xfer_scb; int * p_curr_scb; } ;
struct TYPE_12__ {TYPE_1__ sco; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_8__ VAR_13 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,...) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;

void FUNC_9(tBTA_AG_SCB *VAR_14, tBTA_AG_DATA *VAR_15)
{
    UINT16 VAR_16 = FUNC_4(VAR_14);
    FUNC_0(VAR_15);


    VAR_13.sco.p_curr_scb = ((void*)0);
    VAR_14->sco_idx = VAR_8;




    if ((VAR_14->codec_fallback && VAR_14->svc_conn) ||
         FUNC_1(VAR_14))
    {
        FUNC_6(VAR_14, VAR_6);
    }
    else if (VAR_14->retry_with_sco_only && VAR_14->svc_conn)
    {

        FUNC_3(VAR_14, VAR_12);
    }
    else
    {
        sco_state_t VAR_17 = VAR_13.sco.p_xfer_scb ? VAR_11 : VAR_10;


        FUNC_5(VAR_16, VAR_14->app_id, VAR_17, VAR_14->inuse_codec);




        FUNC_6(VAR_14, VAR_4);

        FUNC_7(VAR_7, VAR_14->app_id, VAR_14->peer_addr);



        if(((VAR_14->call_ind == VAR_2) && (VAR_14->callsetup_ind == VAR_1))
            || (VAR_14->post_sco == VAR_3))
        {
            FUNC_8(VAR_7, VAR_14->app_id, VAR_14->peer_addr);
        }


        FUNC_2(VAR_14, VAR_0);

        VAR_14->codec_msbc_settings = VAR_5;

    }
    VAR_14->retry_with_sco_only = VAR_9;
}
