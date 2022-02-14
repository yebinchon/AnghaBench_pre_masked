
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_current_tx_power {int current_tx_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_current_tx_power*) ;
 struct acx_current_tx_power* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_current_tx_power*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_5, int VAR_6)
{
 struct acx_current_tx_power *VAR_7;
 int VAR_8;

 FUNC_3(VAR_0, "acx dot11_cur_tx_pwr");

 if (VAR_6 < 0 || VAR_6 > 25)
  return -VAR_2;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  VAR_8 = -VAR_3;
  goto out;
 }

 VAR_7->current_tx_power = VAR_6 * 10;

 VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("configure of tx power failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
