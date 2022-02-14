
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vf_data_storage {int pf_vlan; int pf_qos; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int up; } ;
struct ixgbe_adapter {int dcbx_cap; int default_up; int num_vfs; struct vf_data_storage* vfinfo; TYPE_1__ fcoe; } ;
struct dcb_app {scalar_t__ selector; scalar_t__ protocol; int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 int FUNC_1 (struct net_device*,struct dcb_app*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgbe_adapter*,int ,int,int) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
       struct dcb_app *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_4(VAR_4);
 int VAR_7 = -VAR_1;

 if (!(VAR_6->dcbx_cap & VAR_0))
  return VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;
 if (VAR_5->selector == VAR_3 &&
     VAR_5->protocol == 0) {
  int VAR_8;

  VAR_6->default_up = VAR_5->priority;

  for (VAR_8 = 0; VAR_8 < VAR_6->num_vfs; VAR_8++) {
   struct vf_data_storage *VAR_9 = &VAR_6->vfinfo[VAR_8];

   if (!VAR_9->pf_qos)
    FUNC_3(VAR_6, VAR_9->pf_vlan,
      VAR_5->priority, VAR_8);
  }
 }

 return 0;
}
