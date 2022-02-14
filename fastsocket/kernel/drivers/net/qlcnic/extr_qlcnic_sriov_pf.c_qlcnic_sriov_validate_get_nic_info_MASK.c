
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_vf_info {int pci_func; TYPE_2__* vp; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_vf_info *VAR_2,
           struct qlcnic_cmd_args *VAR_3)
{
 if (VAR_3->req.arg[1] & VAR_0) {
  if (((VAR_3->req.arg[1] >> 16) & 0x7fff) != VAR_2->pci_func)
   return -VAR_1;
 } else {
  VAR_3->req.arg[1] |= VAR_2->vp->handle << 16;
 }

 return 0;
}
