
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_1__* recv_ctx; } ;
typedef int key ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int context_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_5(struct qlcnic_adapter *VAR_2, int VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 struct qlcnic_cmd_args VAR_6;
 const u64 VAR_7[] = { 0xbeac01fa6a42b73bULL, 0x8030f20c77cb2da3ULL,
       0xae7b30b4d0ca2bcbULL, 0x43a38fb04167253dULL,
       0x255b0ec26d5a56daULL };

 FUNC_2(&VAR_6, VAR_2, VAR_0);
 VAR_5 = ((u32)(VAR_1 & 0x3) << 4) |
  ((u32)(VAR_1 & 0x3) << 6) |
  ((u32)(VAR_3 & 0x1) << 8) |
  ((0x7ULL) << 16);
 VAR_6.req.arg[1] = (VAR_2->recv_ctx->context_id);
 VAR_6.req.arg[2] = VAR_5;
 FUNC_1(&VAR_6.req.arg[4], VAR_7, sizeof(VAR_7));

 VAR_4 = FUNC_4(VAR_2, &VAR_6);

 if (VAR_4)
  FUNC_0(&VAR_2->pdev->dev, "RSS config failed\n");
 FUNC_3(&VAR_6);

 return VAR_4;

}
