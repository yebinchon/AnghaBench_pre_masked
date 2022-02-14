
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int flags; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_hdr {int addr1; } ;
struct ap_data {TYPE_2__* local; int sta_table_lock; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 struct sta_info* FUNC_1 (struct ap_data*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_2, int VAR_3, void *VAR_4)
{
 struct ap_data *VAR_5 = VAR_4;
 struct ieee80211_hdr *VAR_6;
 struct sta_info *VAR_7;

 if (VAR_2->len < 24)
  goto fail;
 VAR_6 = (struct ieee80211_hdr *) VAR_2->data;
 if (VAR_3) {
  FUNC_3(&VAR_5->sta_table_lock);
  VAR_7 = FUNC_1(VAR_5, VAR_6->addr1);
  if (VAR_7)
   VAR_7->flags &= ~VAR_1;
  FUNC_4(&VAR_5->sta_table_lock);
 } else {
  FUNC_0(VAR_0,
         "%s: STA %pM did not ACK activity poll frame\n",
         VAR_5->local->dev->name, VAR_6->addr1);
 }

 fail:
 FUNC_2(VAR_2);
}
