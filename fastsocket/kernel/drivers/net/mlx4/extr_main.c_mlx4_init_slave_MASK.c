
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int max_cmds; int slave_cmd_mutex; } ;
struct TYPE_5__ {TYPE_1__* comm; int vhcr_dma; } ;
struct mlx4_priv {TYPE_3__ cmd; TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {int slave_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct mlx4_dev*,int ,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mlx4_dev*,char*) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct mlx4_dev *VAR_10)
{
 struct mlx4_priv *VAR_11 = FUNC_4(VAR_10);
 u64 VAR_12 = (u64) VAR_11->mfunc.vhcr_dma;
 int VAR_13 = VAR_8;
 int VAR_14 = 0;
 u32 VAR_15;
 u32 VAR_16;

 FUNC_7(&VAR_11->cmd.slave_cmd_mutex);
 VAR_11->cmd.max_cmds = 1;
 FUNC_5(VAR_10, "Sending reset\n");
 VAR_14 = FUNC_1(VAR_10, VAR_1, 0,
           VAR_6);


 if (VAR_14) {
  if (VAR_7 == VAR_14) {
   FUNC_6(VAR_9);
   while (VAR_14 && VAR_13) {
    FUNC_5(VAR_10, "slave is currently in the"
       "middle of FLR. retrying..."
       "(try num:%d)\n",
       (VAR_8 -
        VAR_13 + 1));
    VAR_14 =
     FUNC_1(VAR_10, VAR_1,
            0, VAR_6);
    VAR_13 = VAR_13 - 1;
   }
  } else
   goto err;
 }



 VAR_15 = FUNC_10(FUNC_9(&VAR_11->mfunc.comm->slave_read));
 VAR_16 = FUNC_2();

 if (FUNC_0(VAR_16) !=
  FUNC_0(VAR_15)) {
  FUNC_3(VAR_10, "slave driver version is not supported"
    " by the master\n");
  goto err;
 }

 FUNC_5(VAR_10, "Sending vhcr0\n");
 if (FUNC_1(VAR_10, VAR_2, VAR_12 >> 48,
          VAR_6))
  goto err;
 if (FUNC_1(VAR_10, VAR_3, VAR_12 >> 32,
          VAR_6))
  goto err;
 if (FUNC_1(VAR_10, VAR_4, VAR_12 >> 16,
          VAR_6))
  goto err;
 if (FUNC_1(VAR_10, VAR_5, VAR_12, VAR_6))
  goto err;

 FUNC_8(&VAR_11->cmd.slave_cmd_mutex);
 return 0;

err:
 FUNC_1(VAR_10, VAR_1, 0, 0);
 FUNC_8(&VAR_11->cmd.slave_cmd_mutex);
 return -VAR_0;
}
