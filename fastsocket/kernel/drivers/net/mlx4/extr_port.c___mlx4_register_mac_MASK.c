
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct mlx4_mac_table {int* refs; scalar_t__ total; scalar_t__ max; int mutex; scalar_t__* entries; } ;
struct mlx4_port_info {struct mlx4_mac_table mac_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_port_info* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_dev*,char*,int,...) ;
 int FUNC_3 (struct mlx4_dev*,char*,unsigned long long) ;
 TYPE_1__* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,size_t,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct mlx4_dev *VAR_4, u8 VAR_5, u64 VAR_6)
{
 struct mlx4_port_info *VAR_7 = &FUNC_4(VAR_4)->port[VAR_5];
 struct mlx4_mac_table *VAR_8 = &VAR_7->mac_table;
 int VAR_9, VAR_10 = 0;
 int VAR_11 = -1;

 FUNC_2(VAR_4, "Registering MAC: 0x%llx for port %d\n",
   (unsigned long long) VAR_6, VAR_5);

 FUNC_6(&VAR_8->mutex);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_11 < 0 && !VAR_8->entries[VAR_9]) {
   VAR_11 = VAR_9;
   continue;
  }

  if (VAR_6 == (VAR_1 & FUNC_0(VAR_8->entries[VAR_9]))) {

   VAR_10 = VAR_9;
   ++VAR_8->refs[VAR_9];
   goto out;
  }
 }

 FUNC_2(VAR_4, "Free MAC index is %d\n", VAR_11);

 if (VAR_8->total == VAR_8->max) {

  VAR_10 = -VAR_0;
  goto out;
 }


 VAR_8->entries[VAR_11] = FUNC_1(VAR_6 | VAR_2);

 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_8->entries);
 if (FUNC_8(VAR_10)) {
  FUNC_3(VAR_4, "Failed adding MAC: 0x%llx\n",
    (unsigned long long) VAR_6);
  VAR_8->entries[VAR_11] = 0;
  goto out;
 }
 VAR_8->refs[VAR_11] = 1;
 VAR_10 = VAR_11;
 ++VAR_8->total;
out:
 FUNC_7(&VAR_8->mutex);
 return VAR_10;
}
