
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct mlx4_mac_table {int mutex; scalar_t__* entries; } ;
struct mlx4_port_info {int base_qpn; struct mlx4_mac_table mac_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_port_info* port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx4_dev*,char*,unsigned long long) ;
 TYPE_1__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,size_t,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_mac_table*,int) ;

int FUNC_8(struct mlx4_dev *VAR_1, u8 VAR_2, int VAR_3, u64 VAR_4)
{
 struct mlx4_port_info *VAR_5 = &FUNC_2(VAR_1)->port[VAR_2];
 struct mlx4_mac_table *VAR_6 = &VAR_5->mac_table;
 int VAR_7 = VAR_3 - VAR_5->base_qpn;
 int VAR_8 = 0;


 FUNC_4(&VAR_6->mutex);

 VAR_8 = FUNC_7(VAR_1, VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 VAR_6->entries[VAR_7] = FUNC_0(VAR_4 | VAR_0);

 VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_6->entries);
 if (FUNC_6(VAR_8)) {
  FUNC_1(VAR_1, "Failed adding MAC: 0x%llx\n",
    (unsigned long long) VAR_4);
  VAR_6->entries[VAR_7] = 0;
 }
out:
 FUNC_5(&VAR_6->mutex);
 return VAR_8;
}
