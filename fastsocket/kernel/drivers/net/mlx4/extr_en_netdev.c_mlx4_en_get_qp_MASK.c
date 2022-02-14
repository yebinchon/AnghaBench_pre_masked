
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_mac_entry {size_t* mac; int hlist; int reg_id; } ;
struct mlx4_en_priv {int base_qpn; int port; TYPE_2__* dev; int * mac_hash; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {struct mlx4_dev* dev; } ;
struct TYPE_3__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_2 (int *,int *) ;
 struct mlx4_mac_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (size_t*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mlx4_en_priv*,int,int*,int *) ;
 int FUNC_7 (struct mlx4_en_priv*,int,int,int ) ;
 int FUNC_8 (struct mlx4_dev*,int ) ;
 int FUNC_9 (struct mlx4_dev*,int,int) ;
 int FUNC_10 (struct mlx4_dev*,int,int,int*) ;
 int FUNC_11 (struct mlx4_dev*,int ,int ) ;
 int FUNC_12 (struct mlx4_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct mlx4_en_priv *VAR_5)
{
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;
 struct mlx4_dev *VAR_7 = VAR_6->dev;
 struct mlx4_mac_entry *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 u64 VAR_11;
 int *VAR_12 = &VAR_5->base_qpn;
 u64 VAR_13 = FUNC_5(VAR_5->dev->dev_addr);

 FUNC_0(VAR_0, VAR_5, "Registering MAC: %pM for adding\n",
        VAR_5->dev->dev_addr);
 VAR_9 = FUNC_11(VAR_7, VAR_5->port, VAR_13);
 if (VAR_9 < 0) {
  VAR_10 = VAR_9;
  FUNC_1(VAR_5, "Failed adding MAC: %pM\n",
         VAR_5->dev->dev_addr);
  return VAR_10;
 }

 if (VAR_7->caps.steering_mode == VAR_4) {
  int VAR_14 = FUNC_8(VAR_7, VAR_5->port);
  *VAR_12 = VAR_14 + VAR_9;
  return 0;
 }

 VAR_10 = FUNC_10(VAR_7, 1, 1, VAR_12);
 FUNC_0(VAR_0, VAR_5, "Reserved qp %d\n", *VAR_12);
 if (VAR_10) {
  FUNC_1(VAR_5, "Failed to reserve qp for mac registration\n");
  goto qp_err;
 }

 VAR_10 = FUNC_6(VAR_5, VAR_5->dev->dev_addr, VAR_12, &VAR_11);
 if (VAR_10)
  goto steer_err;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto alloc_err;
 }
 FUNC_4(VAR_8->mac, VAR_5->dev->dev_addr, sizeof(VAR_8->mac));
 VAR_8->reg_id = VAR_11;

 FUNC_2(&VAR_8->hlist,
      &VAR_5->mac_hash[VAR_8->mac[VAR_3]]);

 return 0;

alloc_err:
 FUNC_7(VAR_5, VAR_5->dev->dev_addr, *VAR_12, VAR_11);

steer_err:
 FUNC_9(VAR_7, *VAR_12, 1);

qp_err:
 FUNC_12(VAR_7, VAR_5->port, VAR_13);
 return VAR_10;
}
