
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {void** arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
typedef int drv_string ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void**,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_5 (char*,int,char*,int,int,int) ;

int FUNC_6(struct qlcnic_adapter *VAR_5)
{
 struct qlcnic_cmd_args VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 char VAR_10[12];
 int VAR_11 = 0;

 FUNC_2(VAR_10, 0, sizeof(VAR_10));
 FUNC_5(VAR_10, sizeof(VAR_10), "%d"".""%d"".""%d",
   VAR_2, VAR_3,
   VAR_4);

 FUNC_3(&VAR_6, VAR_5, VAR_1);
 FUNC_1(&VAR_7, VAR_10, sizeof(u32));
 FUNC_1(&VAR_8, VAR_10 + 4, sizeof(u32));
 FUNC_1(&VAR_9, VAR_10 + 8, sizeof(u32));

 VAR_6.req.arg[1] = VAR_7;
 VAR_6.req.arg[2] = VAR_8;
 VAR_6.req.arg[3] = VAR_9;

 VAR_11 = FUNC_4(VAR_5, &VAR_6);
 if (VAR_11) {
  FUNC_0(&VAR_5->pdev->dev,
    "Failed to set driver version in firmware\n");
  return -VAR_0;
 }

 return 0;
}
