
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int patch_cck_gain; int switch_radio_off; int patch_6m_band_edge; int set_channel; int switch_radio_on; int init_hw; } ;
struct zd_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct zd_chip*) ;
 int VAR_8 ;
 struct zd_chip* FUNC_1 (struct zd_rf*) ;

int FUNC_2(struct zd_rf *VAR_9)
{
 struct zd_chip *VAR_10 = FUNC_1(VAR_9);

 if (FUNC_0(VAR_10)) {
  VAR_9->init_hw = VAR_4;
  VAR_9->switch_radio_on = VAR_7;
  VAR_9->set_channel = VAR_6;
  VAR_9->patch_6m_band_edge = VAR_5;
 } else {
  VAR_9->init_hw = VAR_1;
  VAR_9->switch_radio_on = VAR_3;
  VAR_9->set_channel = VAR_2;
  VAR_9->patch_6m_band_edge = VAR_8;
  VAR_9->patch_cck_gain = 1;
 }

 VAR_9->switch_radio_off = VAR_0;

 return 0;
}
