
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {int dummy; } ;




 int FUNC_0 (int*,int*,int) ;

void FUNC_1(struct qlcnic_adapter *VAR_0, u8 *VAR_1,
          u8 VAR_2, struct qlcnic_cmd_args *VAR_3)
{
 switch (VAR_2) {
 case 128:
 case 129:
  FUNC_0(&VAR_3->req.arg[2], VAR_1, sizeof(u32));
  FUNC_0(&VAR_3->req.arg[3], &VAR_1[4], sizeof(u16));
  break;
 }
 VAR_3->req.arg[1] = VAR_2;
}
