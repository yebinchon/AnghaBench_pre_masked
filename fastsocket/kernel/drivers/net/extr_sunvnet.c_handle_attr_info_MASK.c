
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stype; int sid; } ;
struct vio_net_attr_info {scalar_t__ xfer_mode; scalar_t__ addr_type; scalar_t__ mtu; TYPE_1__ tag; int ack_freq; scalar_t__ addr; } ;
struct vio_driver_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct vio_driver_state*,struct vio_net_attr_info*,int) ;
 int FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct vio_driver_state *VAR_7,
       struct vio_net_attr_info *VAR_8)
{
 FUNC_2(VAR_2, "GOT NET ATTR INFO xmode[0x%x] atype[0x%x] addr[%llx] "
        "ackfreq[%u] mtu[%llu]\n",
        VAR_8->xfer_mode, VAR_8->addr_type,
        (unsigned long long) VAR_8->addr,
        VAR_8->ack_freq,
        (unsigned long long) VAR_8->mtu);

 VAR_8->tag.sid = FUNC_1(VAR_7);

 if (VAR_8->xfer_mode != VAR_3 ||
     VAR_8->addr_type != VAR_6 ||
     VAR_8->mtu != VAR_1) {
  FUNC_2(VAR_2, "SEND NET ATTR NACK\n");

  VAR_8->tag.stype = VAR_5;

  (void) FUNC_0(VAR_7, VAR_8, sizeof(*VAR_8));

  return -VAR_0;
 } else {
  FUNC_2(VAR_2, "SEND NET ATTR ACK\n");

  VAR_8->tag.stype = VAR_4;

  return FUNC_0(VAR_7, VAR_8, sizeof(*VAR_8));
 }

}
