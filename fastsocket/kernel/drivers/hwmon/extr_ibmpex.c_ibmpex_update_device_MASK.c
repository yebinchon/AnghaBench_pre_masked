
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmpex_bmc_data {int valid; int num_sensors; int lock; scalar_t__ last_updated; int rx_msg_data; TYPE_1__* sensors; } ;
struct TYPE_2__ {void** values; int in_use; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (struct ibmpex_bmc_data*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ibmpex_bmc_data *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2(&VAR_2->lock);
 if (FUNC_4(VAR_1, VAR_2->last_updated + VAR_0) &&
     VAR_2->valid)
  goto out;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_sensors; VAR_3++) {
  if (!VAR_2->sensors[VAR_3].in_use)
   continue;
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4)
   continue;
  VAR_2->sensors[VAR_3].values[0] =
   FUNC_0(VAR_2->rx_msg_data, 16);
  VAR_2->sensors[VAR_3].values[1] =
   FUNC_0(VAR_2->rx_msg_data, 18);
  VAR_2->sensors[VAR_3].values[2] =
   FUNC_0(VAR_2->rx_msg_data, 20);
 }

 VAR_2->last_updated = VAR_1;
 VAR_2->valid = 1;

out:
 FUNC_3(&VAR_2->lock);
}
