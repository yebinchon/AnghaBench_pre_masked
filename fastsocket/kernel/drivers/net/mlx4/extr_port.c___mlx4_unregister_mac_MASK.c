
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct mlx4_mac_table {int mutex; int total; scalar_t__* entries; scalar_t__* refs; } ;
struct mlx4_port_info {struct mlx4_mac_table mac_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_port_info* port; } ;


 int FUNC_0 (struct mlx4_dev*,struct mlx4_mac_table*,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int) ;
 TYPE_1__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,size_t,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct mlx4_dev*,struct mlx4_mac_table*,int) ;

void FUNC_7(struct mlx4_dev *VAR_0, u8 VAR_1, u64 VAR_2)
{
 struct mlx4_port_info *VAR_3 = &FUNC_2(VAR_0)->port[VAR_1];
 struct mlx4_mac_table *VAR_4 = &VAR_3->mac_table;
 int VAR_5;

 FUNC_4(&VAR_4->mutex);
 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_2);

 if (FUNC_6(VAR_0, VAR_4, VAR_5))
  goto out;
 if (--VAR_4->refs[VAR_5]) {
  FUNC_1(VAR_0, "Have more references for index %d,"
    "no need to modify mac table\n", VAR_5);
  goto out;
 }

 VAR_4->entries[VAR_5] = 0;
 FUNC_3(VAR_0, VAR_1, VAR_4->entries);
 --VAR_4->total;
out:
 FUNC_5(&VAR_4->mutex);
}
