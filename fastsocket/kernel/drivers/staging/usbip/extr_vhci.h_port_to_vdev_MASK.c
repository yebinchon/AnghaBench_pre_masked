
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_device {int dummy; } ;
typedef size_t __u32 ;
struct TYPE_2__ {struct vhci_device* vdev; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline struct vhci_device *FUNC_0(__u32 VAR_1)
{
 return &VAR_0->vdev[VAR_1];
}
