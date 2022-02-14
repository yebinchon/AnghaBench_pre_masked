
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codec_info; } ;
typedef TYPE_1__ tBTC_MEDIA_SINK_CFG_UPDATE ;
typedef int UINT8 ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int *,int ) ;
 TYPE_1__* FUNC_5 (int) ;

void FUNC_6(UINT8 *VAR_2)
{
    FUNC_2("btc reset decoder");
    FUNC_0("btc reset decoder p_codec_info[%x:%x:%x:%x:%x:%x]\n",
                     VAR_2[1], VAR_2[2], VAR_2[3],
                     VAR_2[4], VAR_2[5], VAR_2[6]);

    tBTC_MEDIA_SINK_CFG_UPDATE *VAR_3;
    if (((void*)0) == (VAR_3 = FUNC_5(sizeof(tBTC_MEDIA_SINK_CFG_UPDATE)))) {
        FUNC_1("btc reset decoder No Buffer ");
        return;
    }

    FUNC_4(VAR_3->codec_info, VAR_2, VAR_0);
    FUNC_3(VAR_1, VAR_3);
}
