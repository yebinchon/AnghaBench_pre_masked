
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251 {int dummy; } ;
struct acx_sleep_auth {int sleep_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_sleep_auth*) ;
 struct acx_sleep_auth* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_sleep_auth*,int) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct wl1251 *VAR_4, u8 VAR_5)
{
 struct acx_sleep_auth *VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, "acx sleep auth");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_6->sleep_auth = VAR_5;

 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6, sizeof(*VAR_6));

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
