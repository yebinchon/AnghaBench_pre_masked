
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_ops {scalar_t__ set_suspend_mode; scalar_t__ set_suspend_voltage; scalar_t__ set_suspend_disable; scalar_t__ set_suspend_enable; scalar_t__ set_current_limit; scalar_t__ set_voltage; scalar_t__ get_status; scalar_t__ is_enabled; scalar_t__ get_mode; scalar_t__ get_current_limit; scalar_t__ get_voltage; } ;
struct device {int dummy; } ;
struct regulator_dev {int constraints; TYPE_1__* desc; struct device dev; } ;
struct TYPE_2__ {scalar_t__ type; struct regulator_ops* ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct device*,int *) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_20)
{
 struct device *VAR_21 = &VAR_20->dev;
 struct regulator_ops *VAR_22 = VAR_20->desc->ops;
 int VAR_23 = 0;


 if (VAR_22->get_voltage) {
  VAR_23 = FUNC_0(VAR_21, &VAR_4);
  if (VAR_23 < 0)
   return VAR_23;
 }
 if (VAR_22->get_current_limit) {
  VAR_23 = FUNC_0(VAR_21, &VAR_3);
  if (VAR_23 < 0)
   return VAR_23;
 }
 if (VAR_22->get_mode) {
  VAR_23 = FUNC_0(VAR_21, &VAR_7);
  if (VAR_23 < 0)
   return VAR_23;
 }
 if (VAR_22->is_enabled) {
  VAR_23 = FUNC_0(VAR_21, &VAR_9);
  if (VAR_23 < 0)
   return VAR_23;
 }
 if (VAR_22->get_status) {
  VAR_23 = FUNC_0(VAR_21, &VAR_10);
  if (VAR_23 < 0)
   return VAR_23;
 }


 if (VAR_20->desc->type == VAR_0) {
  VAR_23 = FUNC_0(VAR_21, &VAR_8);
  if (VAR_23 < 0)
   return VAR_23;
 }





 if (!VAR_20->constraints)
  return VAR_23;


 if (VAR_22->set_voltage) {
  VAR_23 = FUNC_0(VAR_21, &VAR_6);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_0(VAR_21, &VAR_2);
  if (VAR_23 < 0)
   return VAR_23;
 }
 if (VAR_22->set_current_limit) {
  VAR_23 = FUNC_0(VAR_21, &VAR_5);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_0(VAR_21, &VAR_1);
  if (VAR_23 < 0)
   return VAR_23;
 }


 if (!(VAR_22->set_suspend_enable && VAR_22->set_suspend_disable))
  return VAR_23;

 VAR_23 = FUNC_0(VAR_21, &VAR_19);
 if (VAR_23 < 0)
  return VAR_23;
 VAR_23 = FUNC_0(VAR_21, &VAR_16);
 if (VAR_23 < 0)
  return VAR_23;
 VAR_23 = FUNC_0(VAR_21, &VAR_13);
 if (VAR_23 < 0)
  return VAR_23;

 if (VAR_22->set_suspend_voltage) {
  VAR_23 = FUNC_0(VAR_21,
    &VAR_17);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_0(VAR_21,
    &VAR_14);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_0(VAR_21,
    &VAR_11);
  if (VAR_23 < 0)
   return VAR_23;
 }

 if (VAR_22->set_suspend_mode) {
  VAR_23 = FUNC_0(VAR_21,
    &VAR_18);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_0(VAR_21,
    &VAR_15);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_0(VAR_21,
    &VAR_12);
  if (VAR_23 < 0)
   return VAR_23;
 }

 return VAR_23;
}
