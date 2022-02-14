
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct mlx4_qp {int qpn; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {struct mlx4_dev* dev; } ;
struct TYPE_2__ {int steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 int FUNC_2 (struct mlx4_dev*,int ) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_qp*,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx4_en_priv *VAR_2,
         unsigned char *VAR_3, int VAR_4, u64 VAR_5)
{
 struct mlx4_en_dev *VAR_6 = VAR_2->mdev;
 struct mlx4_dev *VAR_7 = VAR_6->dev;

 switch (VAR_7->caps.steering_mode) {
 case 129: {
  struct mlx4_qp VAR_8;
  u8 VAR_9[16] = {0};

  VAR_8.qpn = VAR_4;
  FUNC_1(&VAR_9[10], VAR_3, VAR_0);
  VAR_9[5] = VAR_2->port;

  FUNC_3(VAR_7, &VAR_8, VAR_9, VAR_1);
  break;
 }
 case 128: {
  FUNC_2(VAR_7, VAR_5);
  break;
 }
 default:
  FUNC_0(VAR_2, "Invalid steering mode.\n");
 }
}
