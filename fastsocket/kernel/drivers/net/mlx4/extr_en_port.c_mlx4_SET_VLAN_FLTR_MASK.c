
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vlan_group {int dummy; } ;
struct mlx4_set_vlan_fltr_mbox {int * entry; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_vlan_fltr_mbox* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mlx4_set_vlan_fltr_mbox*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_7 (struct vlan_group*,int ) ;

int FUNC_8(struct mlx4_dev *VAR_4, u8 VAR_5, struct vlan_group *VAR_6)
{
 struct mlx4_cmd_mailbox *VAR_7;
 struct mlx4_set_vlan_fltr_mbox *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 u32 VAR_12;
 int VAR_13 = 0;

 VAR_7 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = VAR_7->buf;
 if (VAR_6) {
  FUNC_3(VAR_8, 0, sizeof *VAR_8);
  for (VAR_9 = VAR_3 - 1; VAR_9 >= 0; VAR_9--) {
   VAR_12 = 0;
   for (VAR_10 = 0; VAR_10 < 32; VAR_10++)
    if (FUNC_7(VAR_6, VAR_11++))
     VAR_12 |= 1 << VAR_10;
   VAR_8->entry[VAR_9] = FUNC_2(VAR_12);
  }
 } else {

  FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 }
 VAR_13 = FUNC_5(VAR_4, VAR_7->dma, VAR_5, 0, VAR_0,
         VAR_1, VAR_2);
 FUNC_6(VAR_4, VAR_7);
 return VAR_13;
}
