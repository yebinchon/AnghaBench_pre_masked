
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vio_driver_state {int dummy; } ;
struct vnet_port {struct vio_driver_state vio; } ;
struct TYPE_3__ {scalar_t__ state; int ack; } ;
struct vio_net_desc {TYPE_1__ hdr; int ncookies; TYPE_2__* cookies; int size; } ;
struct vio_dring_state {int dummy; } ;
struct TYPE_4__ {int cookie_size; int cookie_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vio_net_desc*) ;
 int FUNC_1 (struct vio_net_desc*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct vio_net_desc* FUNC_2 (struct vnet_port*,struct vio_dring_state*,int ) ;
 int FUNC_3 (struct vnet_port*,struct vio_dring_state*,struct vio_net_desc*,int ) ;
 int FUNC_4 (int ,char*,scalar_t__,int,int ,int ,int ,int ) ;
 int FUNC_5 (struct vnet_port*,int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(struct vnet_port *VAR_4,
       struct vio_dring_state *VAR_5,
       u32 VAR_6, int *VAR_7)
{
 struct vio_net_desc *VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6);
 struct vio_driver_state *VAR_9 = &VAR_4->vio;
 int VAR_10;

 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_4(VAR_0, "vio_walk_rx_one desc[%02x:%02x:%08x:%08x:%llx:%llx]\n",
        VAR_8->hdr.state, VAR_8->hdr.ack,
        VAR_8->size, VAR_8->ncookies,
        VAR_8->cookies[0].cookie_addr,
        VAR_8->cookies[0].cookie_size);

 if (VAR_8->hdr.state != VAR_3)
  return 1;
 VAR_10 = FUNC_5(VAR_4, VAR_8->size, VAR_8->cookies, VAR_8->ncookies);
 if (VAR_10 == -VAR_1)
  return VAR_10;
 VAR_8->hdr.state = VAR_2;
 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_8, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;
 *VAR_7 = VAR_8->hdr.ack;
 return 0;
}
