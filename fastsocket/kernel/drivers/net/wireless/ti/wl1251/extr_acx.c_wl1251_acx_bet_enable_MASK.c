
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251_acx_bet_enable {int enable; int max_consecutive; } ;
struct wl1251 {int dummy; } ;
typedef enum wl1251_acx_bet_mode { ____Placeholder_wl1251_acx_bet_mode } wl1251_acx_bet_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1251_acx_bet_enable*) ;
 struct wl1251_acx_bet_enable* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct wl1251_acx_bet_enable*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, enum wl1251_acx_bet_mode VAR_5,
     u8 VAR_6)
{
 struct wl1251_acx_bet_enable *VAR_7;
 int VAR_8;

 FUNC_3(VAR_1, "acx bet enable");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->enable = VAR_5;
 VAR_7->max_consecutive = VAR_6;

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("wl1251 acx bet enable failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
