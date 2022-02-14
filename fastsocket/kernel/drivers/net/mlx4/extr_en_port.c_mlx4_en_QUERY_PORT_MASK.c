
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlx4_en_query_port_context {int link_up; int link_speed; int transceiver; } ;
struct mlx4_en_port_state {int link_state; int link_speed; int transciver; } ;
struct mlx4_en_priv {struct mlx4_en_port_state port_state; } ;
struct mlx4_en_dev {int dev; int * pndev; } ;
struct mlx4_cmd_mailbox {struct mlx4_en_query_port_context* buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (struct mlx4_en_query_port_context*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,size_t,int ,int ,int ,int ) ;
 int FUNC_5 (int ,struct mlx4_cmd_mailbox*) ;
 struct mlx4_en_priv* FUNC_6 (int ) ;

int FUNC_7(struct mlx4_en_dev *VAR_5, u8 VAR_6)
{
 struct mlx4_en_query_port_context *VAR_7;
 struct mlx4_en_priv *VAR_8 = FUNC_6(VAR_5->pndev[VAR_6]);
 struct mlx4_en_port_state *VAR_9 = &VAR_8->port_state;
 struct mlx4_cmd_mailbox *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_5->dev);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);
 FUNC_2(VAR_10->buf, 0, sizeof(*VAR_7));
 VAR_11 = FUNC_4(VAR_5->dev, 0, VAR_10->dma, VAR_6, 0,
      VAR_0, VAR_1,
      VAR_2);
 if (VAR_11)
  goto out;
 VAR_7 = VAR_10->buf;



 VAR_9->link_state = !!(VAR_7->link_up & VAR_3);
 switch (VAR_7->link_speed & VAR_4) {
 case 129:
  VAR_9->link_speed = 1000;
  break;
 case 131:
 case 130:
  VAR_9->link_speed = 10000;
  break;
 case 128:
  VAR_9->link_speed = 40000;
  break;
 default:
  VAR_9->link_speed = -1;
  break;
 }
 VAR_9->transciver = VAR_7->transceiver;

out:
 FUNC_5(VAR_5->dev, VAR_10);
 return VAR_11;
}
