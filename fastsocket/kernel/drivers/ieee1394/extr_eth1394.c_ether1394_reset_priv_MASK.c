
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int broadcast; int dev_addr; int mtu; } ;
struct TYPE_4__ {TYPE_1__* rom; } ;
struct hpsb_host {int node_count; int* speed; TYPE_2__ csr; } ;
struct eth1394_priv {int bc_maxpayload; int bc_sspd; int lock; int ud_list; struct hpsb_host* host; } ;
struct TYPE_3__ {int * bus_info_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpsb_host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int,int ) ;
 struct eth1394_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 struct eth1394_priv *VAR_7 = FUNC_5(VAR_3);
 struct hpsb_host *VAR_8 = VAR_7->host;
 u64 VAR_9 = FUNC_1((u64 *)&(VAR_8->csr.rom->bus_info_data[3]));
 int VAR_10 = VAR_1;

 FUNC_6(&VAR_7->lock, VAR_5);

 FUNC_3(VAR_7->ud_list, 0, sizeof(VAR_7->ud_list));
 VAR_7->bc_maxpayload = 512;





 for (VAR_6 = 0; VAR_6 < VAR_8->node_count; VAR_6++) {

  if (VAR_8->speed[VAR_6] == VAR_2) {
   VAR_10 = VAR_0;
   break;
  }
  if (VAR_10 > VAR_8->speed[VAR_6])
   VAR_10 = VAR_8->speed[VAR_6];
 }
 VAR_7->bc_sspd = VAR_10;

 if (VAR_4) {


  VAR_3->mtu = FUNC_4(1500, FUNC_0(VAR_8));


  FUNC_2(VAR_3->dev_addr, &VAR_9, sizeof(u64));
  FUNC_3(VAR_3->broadcast, 0xff, sizeof(u64));
 }

 FUNC_7(&VAR_7->lock, VAR_5);
}
