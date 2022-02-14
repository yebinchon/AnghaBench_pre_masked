
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_4,
         u32 *VAR_5, u32 *VAR_6,
         u8 *VAR_7)
{
 int VAR_8 = 0;
 struct qlcnic_cmd_args VAR_9;

 if (FUNC_0(&VAR_9, VAR_4, VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_4, &VAR_9);
 if (VAR_8 != VAR_3) {
  if (FUNC_2(VAR_4, &VAR_9)) {
   FUNC_1(&VAR_9);
   return -VAR_0;
  }
  *VAR_7 = 1;
 }

 *VAR_6 = VAR_9.rsp.arg[2];
 *VAR_5 = VAR_9.rsp.arg[3];
 FUNC_1(&VAR_9);

 if (!(*VAR_6))
  return -VAR_0;

 return 0;
}
