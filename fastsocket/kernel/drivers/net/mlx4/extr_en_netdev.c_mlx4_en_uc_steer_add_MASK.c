
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_6__ {int * dst_mac_msk; int * dst_mac; } ;
struct TYPE_5__ {int * member_0; } ;
struct mlx4_spec_list {int list; TYPE_3__ eth; int id; TYPE_2__ member_0; } ;
struct mlx4_qp {int qpn; } ;
struct mlx4_net_trans_rule {int allow_loopback; int qpn; int list; int port; int priority; int promisc_mode; int exclusive; int queue_mode; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {struct mlx4_dev* dev; } ;
struct TYPE_4__ {int steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef unsigned char __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 unsigned char FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_en_priv*,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned char*,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_net_trans_rule*,int *) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_qp*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mlx4_en_priv *VAR_8,
    unsigned char *VAR_9, int *VAR_10, u64 *VAR_11)
{
 struct mlx4_en_dev *VAR_12 = VAR_8->mdev;
 struct mlx4_dev *VAR_13 = VAR_12->dev;
 int VAR_14;

 switch (VAR_13->caps.steering_mode) {
 case 129: {
  struct mlx4_qp VAR_15;
  u8 VAR_16[16] = {0};

  VAR_15.qpn = *VAR_10;
  FUNC_4(&VAR_16[10], VAR_9, VAR_1);
  VAR_16[5] = VAR_8->port;

  VAR_14 = FUNC_6(VAR_13, &VAR_15, VAR_16, 0, VAR_7);
  break;
 }
 case 128: {
  struct mlx4_spec_list VAR_17 = { ((void*)0) };
  __be64 VAR_18 = FUNC_1(VAR_4 << 16);

  struct mlx4_net_trans_rule VAR_19 = {
   .queue_mode = VAR_5,
   .exclusive = 0,
   .allow_loopback = 1,
   .promisc_mode = VAR_3,
   .priority = VAR_2,
  };

  VAR_19.port = VAR_8->port;
  VAR_19.qpn = *VAR_10;
  FUNC_0(&VAR_19.list);

  VAR_17.id = VAR_6;
  FUNC_4(VAR_17.eth.dst_mac, VAR_9, VAR_1);
  FUNC_4(VAR_17.eth.dst_mac_msk, &VAR_18, VAR_1);
  FUNC_3(&VAR_17.list, &VAR_19.list);

  VAR_14 = FUNC_5(VAR_13, &VAR_19, VAR_11);
  break;
 }
 default:
  return -VAR_0;
 }
 if (VAR_14)
  FUNC_2(VAR_8, "Failed Attaching Unicast\n");

 return VAR_14;
}
