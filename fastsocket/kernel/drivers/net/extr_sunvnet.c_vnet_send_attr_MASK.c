
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vnet_port {TYPE_1__* vp; } ;
struct TYPE_4__ {int sid; int stype_env; int stype; int type; } ;
struct vio_net_attr_info {int addr; scalar_t__ mtu; scalar_t__ ack_freq; int addr_type; int xfer_mode; TYPE_2__ tag; } ;
struct vio_driver_state {int dummy; } ;
struct net_device {scalar_t__* dev_addr; } ;
typedef int pkt ;
struct TYPE_3__ {struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vio_net_attr_info*,int ,int) ;
 struct vnet_port* FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (struct vio_driver_state*,struct vio_net_attr_info*,int) ;
 int FUNC_3 (struct vio_driver_state*) ;
 int FUNC_4 (int ,char*,int ,int ,unsigned long long,scalar_t__,unsigned long long) ;

__attribute__((used)) static int FUNC_5(struct vio_driver_state *VAR_7)
{
 struct vnet_port *VAR_8 = FUNC_1(VAR_7);
 struct net_device *VAR_9 = VAR_8->vp->dev;
 struct vio_net_attr_info VAR_10;
 int VAR_11;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.tag.type = VAR_5;
 VAR_10.tag.stype = VAR_4;
 VAR_10.tag.stype_env = VAR_2;
 VAR_10.tag.sid = FUNC_3(VAR_7);
 VAR_10.xfer_mode = VAR_3;
 VAR_10.addr_type = VAR_6;
 VAR_10.ack_freq = 0;
 for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
  VAR_10.addr |= (u64)VAR_9->dev_addr[VAR_11] << ((5 - VAR_11) * 8);
 VAR_10.mtu = VAR_0;

 FUNC_4(VAR_1, "SEND NET ATTR xmode[0x%x] atype[0x%x] addr[%llx] "
        "ackfreq[%u] mtu[%llu]\n",
        VAR_10.xfer_mode, VAR_10.addr_type,
        (unsigned long long) VAR_10.addr,
        VAR_10.ack_freq,
        (unsigned long long) VAR_10.mtu);

 return FUNC_2(VAR_7, &VAR_10, sizeof(VAR_10));
}
