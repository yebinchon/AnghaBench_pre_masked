
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_arp_filter {int address; scalar_t__ enable; int version; int role_id; } ;
struct wl1271 {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wl1271_acx_arp_filter*) ;
 struct wl1271_acx_arp_filter* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_arp_filter*,int) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_6, struct wl12xx_vif *VAR_7,
        u8 VAR_8, __be32 VAR_9)
{
 struct wl1271_acx_arp_filter *VAR_10;
 int VAR_11;

 FUNC_4(VAR_3, "acx arp ip filter, enable: %d", VAR_8);

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_5);
 if (!VAR_10) {
  VAR_11 = -VAR_4;
  goto out;
 }

 VAR_10->role_id = VAR_7->role_id;
 VAR_10->version = VAR_2;
 VAR_10->enable = VAR_8;

 if (VAR_8)
  FUNC_2(VAR_10->address, &VAR_9, VAR_1);

 VAR_11 = FUNC_3(VAR_6, VAR_0,
       VAR_10, sizeof(*VAR_10));
 if (VAR_11 < 0) {
  FUNC_5("failed to set arp ip filter: %d", VAR_11);
  goto out;
 }

out:
 FUNC_0(VAR_10);
 return VAR_11;
}
