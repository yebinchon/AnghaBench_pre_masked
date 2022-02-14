
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct vio_dring_state* drings; } ;
struct vnet_port {struct vnet* vp; TYPE_2__ vio; } ;
struct vnet {struct net_device* dev; } ;
struct vio_dring_state {int cons; } ;
struct TYPE_3__ {scalar_t__ stype_env; } ;
struct vio_dring_data {int end_idx; TYPE_1__ tag; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct vio_dring_state*) ;
 int FUNC_1 (struct vio_dring_state*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct vio_dring_state*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct vio_dring_state*) ;

__attribute__((used)) static int FUNC_6(struct vnet_port *VAR_2, void *VAR_3)
{
 struct vio_dring_state *VAR_4 = &VAR_2->vio.drings[VAR_1];
 struct vio_dring_data *VAR_5 = VAR_3;
 struct net_device *VAR_6;
 struct vnet *VAR_7;
 u32 VAR_8;

 if (FUNC_4(VAR_5->tag.stype_env != VAR_0))
  return 0;

 VAR_8 = VAR_5->end_idx;
 if (FUNC_4(!FUNC_1(VAR_4, VAR_8)))
  return 0;

 VAR_4->cons = FUNC_3(VAR_8, VAR_4);

 VAR_7 = VAR_2->vp;
 VAR_6 = VAR_7->dev;
 if (FUNC_4(FUNC_2(VAR_6) &&
       FUNC_5(VAR_4) >= FUNC_0(VAR_4)))
  return 1;

 return 0;
}
