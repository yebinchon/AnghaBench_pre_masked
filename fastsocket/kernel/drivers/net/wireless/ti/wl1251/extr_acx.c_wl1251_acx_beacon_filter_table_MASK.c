
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_beacon_filter_ie_table {int num_ie; int * table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acx_beacon_filter_ie_table*) ;
 struct acx_beacon_filter_ie_table* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_beacon_filter_ie_table*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_6)
{
 struct acx_beacon_filter_ie_table *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_3(VAR_3, "acx beacon filter table");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_5);
 if (!VAR_7) {
  VAR_9 = -VAR_4;
  goto out;
 }


 VAR_7->num_ie = 1;
 VAR_7->table[VAR_8++] = VAR_1;
 VAR_7->table[VAR_8++] = VAR_2;

 VAR_9 = FUNC_2(VAR_6, VAR_0,
       VAR_7, sizeof(*VAR_7));
 if (VAR_9 < 0) {
  FUNC_4("failed to set beacon filter table: %d", VAR_9);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_9;
}
