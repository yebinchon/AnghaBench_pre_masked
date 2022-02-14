
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {int rx_ctx_id; } ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_vf_info *VAR_1,
      struct qlcnic_cmd_args *VAR_2)
{
 if ((VAR_2->req.arg[1] >> 16) != VAR_1->rx_ctx_id)
  return -VAR_0;

 return 0;
}
