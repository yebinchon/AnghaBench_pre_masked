
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int lp; struct vio_net_desc* desc_buf; } ;
struct vnet_port {TYPE_1__ vio; } ;
struct vio_net_desc {int dummy; } ;
struct vio_dring_state {int entry_size; int ncookies; int cookies; } ;


 struct vio_net_desc* FUNC_0 (int) ;
 int FUNC_1 (int ,struct vio_net_desc*,int,int,int ,int ) ;

__attribute__((used)) static struct vio_net_desc *FUNC_2(struct vnet_port *VAR_0,
     struct vio_dring_state *VAR_1,
     u32 VAR_2)
{
 struct vio_net_desc *VAR_3 = VAR_0->vio.desc_buf;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->vio.lp, VAR_3, VAR_1->entry_size,
      (VAR_2 * VAR_1->entry_size),
      VAR_1->cookies, VAR_1->ncookies);
 if (VAR_4 < 0)
  return FUNC_0(VAR_4);

 return VAR_3;
}
