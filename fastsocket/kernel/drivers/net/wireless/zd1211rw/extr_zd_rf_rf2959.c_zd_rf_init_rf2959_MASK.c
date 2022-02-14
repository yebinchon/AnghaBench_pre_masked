
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int switch_radio_off; int switch_radio_on; int set_channel; int init_hw; } ;
struct zd_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct zd_chip*) ;
 scalar_t__ FUNC_2 (struct zd_chip*) ;
 struct zd_chip* FUNC_3 (struct zd_rf*) ;

int FUNC_4(struct zd_rf *VAR_5)
{
 struct zd_chip *VAR_6 = FUNC_3(VAR_5);

 if (FUNC_2(VAR_6)) {
  FUNC_0(FUNC_1(VAR_6),
         "RF2959 is currently not supported for ZD1211B"
         " devices\n");
  return -VAR_0;
 }
 VAR_5->init_hw = VAR_1;
 VAR_5->set_channel = VAR_2;
 VAR_5->switch_radio_on = VAR_4;
 VAR_5->switch_radio_off = VAR_3;
 return 0;
}
