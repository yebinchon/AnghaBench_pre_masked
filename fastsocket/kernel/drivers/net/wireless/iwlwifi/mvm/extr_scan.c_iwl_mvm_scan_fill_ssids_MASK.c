
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_scan_cmd {TYPE_1__* direct_scan; } ;
struct cfg80211_scan_request {int n_ssids; TYPE_2__* ssids; } ;
struct TYPE_4__ {int ssid_len; int ssid; } ;
struct TYPE_3__ {int ssid; int len; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct iwl_scan_cmd *VAR_1,
        struct cfg80211_scan_request *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = VAR_2->n_ssids - 1, VAR_3 = 0; VAR_4 > 0;
      VAR_4--, VAR_3++) {
  VAR_1->direct_scan[VAR_3].id = VAR_0;
  VAR_1->direct_scan[VAR_3].len = VAR_2->ssids[VAR_4].ssid_len;
  FUNC_0(VAR_1->direct_scan[VAR_3].ssid,
         VAR_2->ssids[VAR_4].ssid,
         VAR_2->ssids[VAR_4].ssid_len);
 }
}
