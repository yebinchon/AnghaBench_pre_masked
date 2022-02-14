
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_cmd_mailbox {int dma; int buf; } ;
struct ib_device_modify {int node_desc; } ;
struct ib_device {int node_desc; } ;
struct TYPE_2__ {int dev; int sm_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 TYPE_1__* FUNC_9 (struct ib_device*) ;

__attribute__((used)) static int FUNC_10(struct ib_device *VAR_5, int VAR_6,
     struct ib_device_modify *VAR_7)
{
 struct mlx4_cmd_mailbox *VAR_8;
 unsigned long VAR_9;

 if (VAR_6 & ~VAR_1)
  return -VAR_0;

 if (!(VAR_6 & VAR_1))
  return 0;

 if (FUNC_6(FUNC_9(VAR_5)->dev))
  return -VAR_0;

 FUNC_7(&FUNC_9(VAR_5)->sm_lock, VAR_9);
 FUNC_1(VAR_5->node_desc, VAR_7->node_desc, 64);
 FUNC_8(&FUNC_9(VAR_5)->sm_lock, VAR_9);





 VAR_8 = FUNC_3(FUNC_9(VAR_5)->dev);
 if (FUNC_0(VAR_8))
  return 0;

 FUNC_2(VAR_8->buf, 0, 256);
 FUNC_1(VAR_8->buf, VAR_7->node_desc, 64);
 FUNC_4(FUNC_9(VAR_5)->dev, VAR_8->dma, 1, 0,
   VAR_3, VAR_4, VAR_2);

 FUNC_5(FUNC_9(VAR_5)->dev, VAR_8);

 return 0;
}
