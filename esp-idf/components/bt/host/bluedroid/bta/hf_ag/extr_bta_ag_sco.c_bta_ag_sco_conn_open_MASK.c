
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int codec_msbc_settings; int retry_with_sco_only; int air_mode; int app_id; int inuse_codec; int peer_addr; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,...) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int ) ;

void FUNC_7(tBTA_AG_SCB *VAR_8, tBTA_AG_DATA *VAR_9)
{
    FUNC_0(VAR_9);

    FUNC_5(VAR_8, VAR_2);

    FUNC_6(VAR_5, VAR_8->app_id, VAR_8->peer_addr);




    FUNC_3(FUNC_2(VAR_8), VAR_8->app_id, VAR_7, VAR_8->inuse_codec);




    FUNC_4(FUNC_2(VAR_8), VAR_8->air_mode, VAR_4, VAR_1);



    FUNC_1(VAR_8, VAR_0);

    VAR_8->retry_with_sco_only = VAR_6;


    VAR_8->codec_msbc_settings = VAR_3;

}
