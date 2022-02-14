
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int last_tx_hlid; int links_map; } ;
struct wl1271 {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct sk_buff* FUNC_1 (struct wl1271*,int,int,int*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct wl1271 *VAR_1,
          struct wl12xx_vif *VAR_2,
          u8 VAR_3, u8 *VAR_4,
          u8 *VAR_5)
{
 struct sk_buff *VAR_6 = ((void*)0);
 int VAR_7, VAR_8, VAR_9;


 VAR_9 = (VAR_2->last_tx_hlid + 1) % VAR_0;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = (VAR_9 + VAR_7) % VAR_0;


  if (!FUNC_0(VAR_8, VAR_2->links_map))
   continue;

  VAR_6 = FUNC_1(VAR_1, VAR_8, VAR_3,
         VAR_5);
  if (!VAR_6)
   continue;

  VAR_2->last_tx_hlid = VAR_8;
  break;
 }

 if (!VAR_6)
  VAR_2->last_tx_hlid = 0;

 *VAR_4 = VAR_2->last_tx_hlid;
 return VAR_6;
}
