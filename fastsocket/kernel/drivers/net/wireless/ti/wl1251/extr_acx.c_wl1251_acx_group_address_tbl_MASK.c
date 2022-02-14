
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_dot11_grp_addr_tbl {int mac_table; scalar_t__ num_groups; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_dot11_grp_addr_tbl*) ;
 struct acx_dot11_grp_addr_tbl* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct wl1251*,int ,struct acx_dot11_grp_addr_tbl*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1251 *VAR_5)
{
 struct acx_dot11_grp_addr_tbl *VAR_6;
 int VAR_7;

 FUNC_4(VAR_1, "acx group address tbl");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_4);
 if (!VAR_6) {
  VAR_7 = -VAR_3;
  goto out;
 }


 VAR_6->enabled = 0;
 VAR_6->num_groups = 0;
 FUNC_2(VAR_6->mac_table, 0, VAR_0);

 VAR_7 = FUNC_3(VAR_5, VAR_2,
       VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_5("failed to set group addr table: %d", VAR_7);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
