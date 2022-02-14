
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* netdev; } ;
typedef int __be32 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qlcnic_adapter*,int*) ;
 int FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct qlcnic_adapter *VAR_3, __be32 VAR_4,
          int VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0, VAR_8;
 struct qlcnic_cmd_args VAR_9;

 FUNC_4(&VAR_9, VAR_3, VAR_0);
 FUNC_3(VAR_3, &VAR_7);

 if (VAR_5 == VAR_1)
  VAR_9.req.arg[1] = 1 | VAR_7;
 else
  VAR_9.req.arg[1] = 2 | VAR_7;
 VAR_8 = FUNC_7(FUNC_2(VAR_4));
 FUNC_1(&VAR_9.req.arg[2], &VAR_8, sizeof(u32));
 VAR_6 = FUNC_6(VAR_3, &VAR_9);
 if (VAR_6 != VAR_2)
  FUNC_0(&VAR_3->netdev->dev,
   "could not notify %s IP 0x%x request\n",
   (VAR_5 == VAR_1) ? "Add" : "Remove", VAR_4);

 FUNC_5(&VAR_9);
}
