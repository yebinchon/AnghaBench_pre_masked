
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_conn_monit_params {int bss_lose_timeout; int synch_fail_thold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acx_conn_monit_params*) ;
 struct acx_conn_monit_params* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_conn_monit_params*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_6)
{
 struct acx_conn_monit_params *VAR_7;
 int VAR_8;

 FUNC_3(VAR_1, "acx connection monitor parameters");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->synch_fail_thold = VAR_5;
 VAR_7->bss_lose_timeout = VAR_4;

 VAR_8 = FUNC_2(VAR_6, VAR_0,
       VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("failed to set connection monitor "
          "parameters: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
