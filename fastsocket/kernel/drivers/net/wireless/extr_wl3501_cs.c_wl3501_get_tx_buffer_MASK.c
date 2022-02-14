
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
typedef int u16 ;
struct wl3501_card {int tx_buffer_cnt; int tx_buffer_head; } ;
struct wl3501_80211_tx_hdr {int dummy; } ;
typedef int next ;


 int FUNC_0 (struct wl3501_card*,int,int*,int) ;
 int FUNC_1 (struct wl3501_card*,int,int*,int) ;

__attribute__((used)) static u16 FUNC_2(struct wl3501_card *VAR_0, u16 VAR_1)
{
 u16 VAR_2, VAR_3 = 0, VAR_4 = 0;
 u16 VAR_5 = sizeof(struct wl3501_80211_tx_hdr) + VAR_1;
 u16 VAR_6 = 0;

 if (VAR_5 > VAR_0->tx_buffer_cnt * 254)
  goto out;
 VAR_6 = VAR_0->tx_buffer_head;
 while (VAR_5) {
  if (VAR_5 < 254)
   VAR_5 = 0;
  else
   VAR_5 -= 254;
  FUNC_0(VAR_0, VAR_0->tx_buffer_head, &VAR_2,
        sizeof(VAR_2));
  if (!VAR_5)
   FUNC_1(VAR_0, VAR_0->tx_buffer_head, &VAR_4,
       sizeof(VAR_4));
  VAR_0->tx_buffer_head = VAR_2;
  VAR_3++;

  if (!VAR_2 && VAR_5) {
   VAR_0->tx_buffer_head = VAR_6;
   VAR_6 = 0;
   goto out;
  }
 }
 VAR_0->tx_buffer_cnt -= VAR_3;
out:
 return VAR_6;
}
