
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mlx4_vlan_table {scalar_t__ total; scalar_t__ max; int* refs; int mutex; scalar_t__* entries; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct mlx4_vlan_table vlan_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,size_t,scalar_t__*) ;
 int FUNC_4 (struct mlx4_dev*,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct mlx4_dev *VAR_6, u8 VAR_7, u16 VAR_8,
    int *VAR_9)
{
 struct mlx4_vlan_table *VAR_10 = &FUNC_2(VAR_6)->port[VAR_7].vlan_table;
 int VAR_11, VAR_12 = 0;
 int VAR_13 = -1;

 FUNC_5(&VAR_10->mutex);

 if (VAR_10->total == VAR_10->max) {

  VAR_12 = -VAR_1;
  goto out;
 }

 for (VAR_11 = VAR_4; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_13 < 0 && (VAR_10->refs[VAR_11] == 0)) {
   VAR_13 = VAR_11;
   continue;
  }

  if (VAR_10->refs[VAR_11] &&
      (VAR_8 == (VAR_3 &
         FUNC_0(VAR_10->entries[VAR_11])))) {

   *VAR_9 = VAR_11;
   ++VAR_10->refs[VAR_11];
   goto out;
  }
 }

 if (VAR_13 < 0) {
  VAR_12 = -VAR_0;
  goto out;
 }


 VAR_10->refs[VAR_13] = 1;
 VAR_10->entries[VAR_13] = FUNC_1(VAR_8 | VAR_5);

 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_10->entries);
 if (FUNC_7(VAR_12)) {
  FUNC_4(VAR_6, "Failed adding vlan: %u\n", VAR_8);
  VAR_10->refs[VAR_13] = 0;
  VAR_10->entries[VAR_13] = 0;
  goto out;
 }

 *VAR_9 = VAR_13;
 ++VAR_10->total;
out:
 FUNC_6(&VAR_10->mutex);
 return VAR_12;
}
