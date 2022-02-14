
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vf_data_storage {int pf_vlan; int pf_qos; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int up; } ;
struct ixgbe_adapter {int dcbx_cap; scalar_t__ default_up; int num_vfs; struct vf_data_storage* vfinfo; TYPE_1__ fcoe; } ;
struct dcb_app {scalar_t__ selector; scalar_t__ protocol; scalar_t__ priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 void* FUNC_1 (struct net_device*,struct dcb_app*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ixgbe_adapter*,int ,int,int) ;
 struct ixgbe_adapter* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5,
       struct dcb_app *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_6(VAR_5);
 int VAR_8;

 if (!(VAR_7->dcbx_cap & VAR_0))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_6->selector == VAR_3 &&
     VAR_6->protocol == 0 && VAR_7->default_up == VAR_6->priority) {
  int VAR_9;
  long unsigned int VAR_10 = FUNC_1(VAR_5, VAR_6);
  int VAR_11 = VAR_10 ? FUNC_3(&VAR_10, 8) : 0;

  VAR_7->default_up = VAR_11;

  for (VAR_9 = 0; VAR_9 < VAR_7->num_vfs; VAR_9++) {
   struct vf_data_storage *VAR_12 = &VAR_7->vfinfo[VAR_9];

   if (!VAR_12->pf_qos)
    FUNC_5(VAR_7, VAR_12->pf_vlan,
      VAR_11, VAR_9);
  }
 }

 return VAR_8;
}
