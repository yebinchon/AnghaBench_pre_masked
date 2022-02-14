
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct mlx4_net_trans_rule {int promisc_mode; size_t port; int list; int qpn; } ;
struct mlx4_dev {scalar_t__* regid_promisc_array; scalar_t__* regid_allmulti_array; } ;
typedef enum mlx4_net_trans_promisc_mode { ____Placeholder_mlx4_net_trans_promisc_mode } mlx4_net_trans_promisc_mode ;


 int FUNC_0 (int *) ;


 int FUNC_1 (struct mlx4_dev*,char*,size_t) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_net_trans_rule*,scalar_t__*) ;

int FUNC_3(struct mlx4_dev *VAR_0, u8 VAR_1,
    u32 VAR_2, enum mlx4_net_trans_promisc_mode VAR_3)
{
 struct mlx4_net_trans_rule VAR_4;
 u64 *VAR_5;

 switch (VAR_3) {
 case 129:
  VAR_5 = &VAR_0->regid_promisc_array[VAR_1];
  break;
 case 128:
  VAR_5 = &VAR_0->regid_allmulti_array[VAR_1];
  break;
 default:
  return -1;
 }

 if (*VAR_5 != 0)
  return -1;

 VAR_4.promisc_mode = VAR_3;
 VAR_4.port = VAR_1;
 VAR_4.qpn = VAR_2;
 FUNC_0(&VAR_4.list);
 FUNC_1(VAR_0, "going promisc on %x\n", VAR_1);

 return FUNC_2(VAR_0, &VAR_4, VAR_5);
}
