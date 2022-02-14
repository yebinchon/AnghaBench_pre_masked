
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dme1737_data {scalar_t__ type; int has_fan; int has_pwm; int config; int * pwm_config; int client; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int attr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct dme1737_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct device*,int *,int) ;
 int FUNC_5 (struct device*,int *,int) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int ** VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int ** VAR_10 ;
 int FUNC_6 (struct device*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_14)
{
 struct dme1737_data *VAR_15 = FUNC_2(VAR_14);
 int VAR_16, VAR_17;


 if (!VAR_15->client &&
     (VAR_16 = FUNC_7(&VAR_14->kobj, &VAR_2.attr))) {
  goto exit;
 }


 if ((VAR_16 = FUNC_8(&VAR_14->kobj, &VAR_5))) {
  goto exit_remove;
 }


 if ((VAR_15->type != VAR_13) &&
     (VAR_16 = FUNC_8(&VAR_14->kobj,
          &VAR_6))) {
  goto exit_remove;
 }


 if ((VAR_15->type == VAR_3) &&
     (VAR_16 = FUNC_8(&VAR_14->kobj,
          &VAR_11))) {
  goto exit_remove;
 }


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_4); VAR_17++) {
  if (VAR_15->has_fan & (1 << VAR_17)) {
   if ((VAR_16 = FUNC_8(&VAR_14->kobj,
      &VAR_4[VAR_17]))) {
    goto exit_remove;
   }
  }
 }


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_9); VAR_17++) {
  if (VAR_15->has_pwm & (1 << VAR_17)) {
   if ((VAR_16 = FUNC_8(&VAR_14->kobj,
      &VAR_9[VAR_17]))) {
    goto exit_remove;
   }
   if (VAR_15->type != VAR_13 && VAR_17 < 3 &&
       (VAR_16 = FUNC_7(&VAR_14->kobj,
      VAR_10[VAR_17]))) {
    goto exit_remove;
   }
  }
 }



 if (VAR_15->config & 0x02) {
  FUNC_3(VAR_14, "Device is locked. Some attributes "
    "will be read-only.\n");
 } else {

  FUNC_5(VAR_14, &VAR_12,
        VAR_0 | VAR_1);


  if (VAR_15->type != VAR_13) {
   FUNC_5(VAR_14, &VAR_6,
         VAR_0 | VAR_1);
  }


  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_8); VAR_17++) {
   if (VAR_15->has_pwm & (1 << VAR_17)) {
    FUNC_5(VAR_14,
      &VAR_8[VAR_17],
      VAR_0 | VAR_1);
    if (VAR_15->type != VAR_13 && VAR_17 < 3) {
     FUNC_4(VAR_14,
      VAR_10[VAR_17],
      VAR_0 | VAR_1);
    }
   }
  }


  for (VAR_17 = 0; VAR_17 < 3; VAR_17++) {
   if ((VAR_15->has_pwm & (1 << VAR_17)) &&
       (FUNC_1(VAR_15->pwm_config[VAR_17]) == 1)) {
    FUNC_4(VAR_14,
      VAR_7[VAR_17],
      VAR_0 | VAR_1);
   }
  }
 }

 return 0;

exit_remove:
 FUNC_6(VAR_14);
exit:
 return VAR_16;
}
