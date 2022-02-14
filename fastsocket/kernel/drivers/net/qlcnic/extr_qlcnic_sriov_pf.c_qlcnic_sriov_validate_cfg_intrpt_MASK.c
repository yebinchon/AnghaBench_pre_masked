
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {int pci_func; } ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_vf_info *VAR_2,
         struct qlcnic_cmd_args *VAR_3)
{
 if (((VAR_3->req.arg[1] >> 8) & 0xff) != VAR_2->pci_func)
  return -VAR_1;

 if (!(VAR_3->req.arg[1] & VAR_0))
  return -VAR_1;

 if ((VAR_3->req.arg[1] & 0xff) != 0x1)
  return -VAR_1;

 return 0;
}
