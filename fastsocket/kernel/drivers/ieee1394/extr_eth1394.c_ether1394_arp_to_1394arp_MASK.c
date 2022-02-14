
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct eth1394_priv {int local_fifo; TYPE_2__* host; } ;
struct eth1394_arp {int hw_addr_len; int fifo_lo; int fifo_hi; int sspd; int max_rec; int sip; } ;
struct arphdr {int dummy; } ;
struct TYPE_3__ {int lnk_spd; int max_rec; } ;
struct TYPE_4__ {TYPE_1__ csr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct eth1394_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1,
         struct net_device *VAR_2)
{
 struct eth1394_priv *VAR_3 = FUNC_2(VAR_2);
 struct arphdr *VAR_4 = (struct arphdr *)VAR_1->data;
 unsigned char *VAR_5 = (unsigned char *)(VAR_4 + 1);
 struct eth1394_arp *VAR_6 = (struct eth1394_arp *)VAR_1->data;

 VAR_6->hw_addr_len = 16;
 VAR_6->sip = *(u32*)(VAR_5 + VAR_0);
 VAR_6->max_rec = VAR_3->host->csr.max_rec;
 VAR_6->sspd = VAR_3->host->csr.lnk_spd;
 VAR_6->fifo_hi = FUNC_1(VAR_3->local_fifo >> 32);
 VAR_6->fifo_lo = FUNC_0(VAR_3->local_fifo & ~0x0);
}
