
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct carlu {int fw; } ;
struct carl9170fw_motd_desc {int fw_year_month_day; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct carl9170fw_motd_desc* FUNC_3 (int ,int *,int,int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 unsigned int FUNC_5 (int ) ;

void FUNC_6(struct carlu *VAR_2)
{
 struct carl9170fw_motd_desc *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_3(VAR_2->fw, (uint8_t *) VAR_1,
         sizeof(*VAR_3),
         VAR_0);

 if (VAR_3) {
  VAR_4 = FUNC_5(VAR_3->fw_year_month_day);

  FUNC_4("Firmware Date: 2%.3d-%.2d-%.2d\n",
       FUNC_2(VAR_4), FUNC_1(VAR_4),
       FUNC_0(VAR_4));
 }
}
