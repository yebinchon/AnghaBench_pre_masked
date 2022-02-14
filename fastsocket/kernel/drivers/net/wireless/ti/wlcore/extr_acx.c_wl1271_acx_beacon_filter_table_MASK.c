
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct TYPE_3__ {int bcn_filt_ie_count; struct conf_bcn_filt_rule* bcn_filt_ie; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct conf_bcn_filt_rule {scalar_t__ ie; scalar_t__ rule; scalar_t__ type; int version; int oui; } ;
struct acx_beacon_filter_ie_table {scalar_t__* table; scalar_t__ num_ie; int role_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct acx_beacon_filter_ie_table*) ;
 struct acx_beacon_filter_ie_table* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_beacon_filter_ie_table*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_7,
       struct wl12xx_vif *VAR_8)
{
 struct acx_beacon_filter_ie_table *VAR_9;
 int VAR_10, VAR_11 = 0;
 int VAR_12;
 bool VAR_13 = 0;

 FUNC_4(VAR_3, "acx beacon filter table");

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_5);
 if (!VAR_9) {
  VAR_12 = -VAR_4;
  goto out;
 }


 VAR_9->role_id = VAR_8->role_id;
 VAR_9->num_ie = 0;
 for (VAR_10 = 0; VAR_10 < VAR_7->conf.conn.bcn_filt_ie_count; VAR_10++) {
  struct conf_bcn_filt_rule *VAR_14 = &(VAR_7->conf.conn.bcn_filt_ie[VAR_10]);
  VAR_9->table[VAR_11++] = VAR_14->ie;
  VAR_9->table[VAR_11++] = VAR_14->rule;

  if (VAR_14->ie == VAR_6) {

   if (VAR_13)
    continue;



   FUNC_2(&(VAR_9->table[VAR_11]), VAR_14->oui,
          VAR_1);
   VAR_11 += VAR_1;
   VAR_9->table[VAR_11++] = VAR_14->type;
   FUNC_2(&(VAR_9->table[VAR_11]), VAR_14->version,
          VAR_2);
   VAR_11 += VAR_2;
   VAR_13 = 1;
  }

  VAR_9->num_ie++;
 }

 VAR_12 = FUNC_3(VAR_7, VAR_0,
       VAR_9, sizeof(*VAR_9));
 if (VAR_12 < 0) {
  FUNC_5("failed to set beacon filter table: %d", VAR_12);
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_12;
}
