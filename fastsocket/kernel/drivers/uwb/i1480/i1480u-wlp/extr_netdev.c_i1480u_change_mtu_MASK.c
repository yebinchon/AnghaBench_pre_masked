
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_tx_hdr {int dummy; } ;
struct wlp_rx_hdr {int dummy; } ;
struct net_device {int mtu; } ;
typedef int i1480u_all_hdrs ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct net_device *VAR_2, int VAR_3)
{
 static union {
  struct wlp_tx_hdr tx;
  struct wlp_rx_hdr rx;
 } VAR_4;

 if (VAR_3 < VAR_1)
  return -VAR_0;
 if (VAR_3 > 4000 - sizeof(VAR_4))
  return -VAR_0;
 VAR_2->mtu = VAR_3;
 return 0;
}
