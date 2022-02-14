
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ibmpex_bmc_data {int num_sensors; TYPE_5__* sensors; int bmc_device; int rx_msg_len; int rx_msg_data; } ;
struct TYPE_9__ {TYPE_5__* name; } ;
struct TYPE_14__ {TYPE_1__ attr; } ;
struct TYPE_13__ {int multiplier; int in_use; TYPE_2__* attr; } ;
struct TYPE_12__ {TYPE_7__ dev_attr; } ;
struct TYPE_11__ {TYPE_7__ dev_attr; } ;
struct TYPE_10__ {TYPE_7__ dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ibmpex_bmc_data*,int,int,int,int) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 int FUNC_3 (struct ibmpex_bmc_data*) ;
 int FUNC_4 (struct ibmpex_bmc_data*,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_5__* FUNC_8 (int,int ) ;
 int FUNC_9 (struct ibmpex_bmc_data*,int ,int ) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static int FUNC_10(struct ibmpex_bmc_data *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;

 VAR_11 = FUNC_3(VAR_8);
 if (VAR_11 <= 0)
  return -VAR_0;
 VAR_8->num_sensors = VAR_11;

 VAR_8->sensors = FUNC_8(VAR_8->num_sensors * sizeof(*VAR_8->sensors),
    VAR_2);
 if (!VAR_8->sensors)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_8->num_sensors; VAR_9++) {
  VAR_11 = FUNC_4(VAR_8, VAR_9);
  if (VAR_11)
   continue;

  if (FUNC_5(VAR_8->rx_msg_data, VAR_8->rx_msg_len)) {
   VAR_12 = VAR_4;
   VAR_14++;
   VAR_13 = VAR_14;
   VAR_8->sensors[VAR_9].multiplier =
    FUNC_9(VAR_8,
       VAR_8->rx_msg_data,
       VAR_8->rx_msg_len);
  } else if (FUNC_6(VAR_8->rx_msg_data,
       VAR_8->rx_msg_len)) {
   VAR_12 = VAR_5;
   VAR_15++;
   VAR_13 = VAR_15;
   VAR_8->sensors[VAR_9].multiplier = 1000;
  } else
   continue;

  VAR_8->sensors[VAR_9].in_use = 1;


  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   VAR_11 = FUNC_0(VAR_8, VAR_12, VAR_13,
         VAR_9, VAR_10);
   if (VAR_11)
    goto exit_remove;
  }
 }

 VAR_11 = FUNC_1(VAR_8->bmc_device,
   &VAR_7.dev_attr);
 if (VAR_11)
  goto exit_remove;

 VAR_11 = FUNC_1(VAR_8->bmc_device,
   &VAR_6.dev_attr);
 if (VAR_11)
  goto exit_remove;

 return 0;

exit_remove:
 FUNC_2(VAR_8->bmc_device,
      &VAR_7.dev_attr);
 FUNC_2(VAR_8->bmc_device, &VAR_6.dev_attr);
 for (VAR_9 = 0; VAR_9 < VAR_8->num_sensors; VAR_9++)
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   if (!VAR_8->sensors[VAR_9].attr[VAR_10].dev_attr.attr.name)
    continue;
   FUNC_2(VAR_8->bmc_device,
    &VAR_8->sensors[VAR_9].attr[VAR_10].dev_attr);
   FUNC_7(VAR_8->sensors[VAR_9].attr[VAR_10].dev_attr.attr.name);
  }

 FUNC_7(VAR_8->sensors);
 return VAR_11;
}
