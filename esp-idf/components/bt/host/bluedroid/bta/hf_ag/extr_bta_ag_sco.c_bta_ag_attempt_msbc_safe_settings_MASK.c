
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sco_codec; scalar_t__ codec_msbc_settings; scalar_t__ svc_conn; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOLEAN FUNC_0(tBTA_AG_SCB *VAR_4)
{
    if (VAR_4->svc_conn && VAR_4->sco_codec == VAR_1 &&
        VAR_4->codec_msbc_settings == VAR_0)
        return VAR_3;
    else
        return VAR_2;
}
