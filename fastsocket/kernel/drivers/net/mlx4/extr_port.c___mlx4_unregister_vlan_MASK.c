
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx4_vlan_table {int mutex; int total; scalar_t__* entries; scalar_t__* refs; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct mlx4_vlan_table vlan_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,char*,int) ;
 TYPE_2__* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,size_t,scalar_t__*) ;
 int FUNC_3 (struct mlx4_dev*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mlx4_dev *VAR_1, u8 VAR_2, int VAR_3)
{
 struct mlx4_vlan_table *VAR_4 = &FUNC_1(VAR_1)->port[VAR_2].vlan_table;

 if (VAR_3 < VAR_0) {
  FUNC_3(VAR_1, "Trying to free special vlan index %d\n", VAR_3);
  return;
 }

 FUNC_4(&VAR_4->mutex);
 if (!VAR_4->refs[VAR_3]) {
  FUNC_3(VAR_1, "No vlan entry for index %d\n", VAR_3);
  goto out;
 }
 if (--VAR_4->refs[VAR_3]) {
  FUNC_0(VAR_1, "Have more references for index %d,"
    "no need to modify vlan table\n", VAR_3);
  goto out;
 }
 VAR_4->entries[VAR_3] = 0;
 FUNC_2(VAR_1, VAR_2, VAR_4->entries);
 --VAR_4->total;
out:
 FUNC_5(&VAR_4->mutex);
}
