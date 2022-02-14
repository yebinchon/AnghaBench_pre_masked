
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dme1737_data {int has_fan; int has_pwm; scalar_t__ type; int client; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int attr; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 struct dme1737_data* FUNC_1 (struct device*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int ** VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_9)
{
 struct dme1737_data *VAR_10 = FUNC_1(VAR_9);
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++) {
  if (VAR_10->has_fan & (1 << VAR_11)) {
   FUNC_3(&VAR_9->kobj,
        &VAR_2[VAR_11]);
  }
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  if (VAR_10->has_pwm & (1 << VAR_11)) {
   FUNC_3(&VAR_9->kobj,
        &VAR_5[VAR_11]);
   if (VAR_10->type != VAR_8 && VAR_11 < 3) {
    FUNC_2(&VAR_9->kobj,
        VAR_6[VAR_11]);
   }
  }
 }

 if (VAR_10->type != VAR_8) {
  FUNC_3(&VAR_9->kobj, &VAR_4);
 }
 if (VAR_10->type == VAR_1) {
  FUNC_3(&VAR_9->kobj, &VAR_7);
 }

 FUNC_3(&VAR_9->kobj, &VAR_3);

 if (!VAR_10->client) {
  FUNC_2(&VAR_9->kobj, &VAR_0.attr);
 }
}
