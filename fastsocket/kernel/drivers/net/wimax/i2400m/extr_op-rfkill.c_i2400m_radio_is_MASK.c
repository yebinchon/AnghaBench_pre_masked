
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {scalar_t__ state; } ;
typedef enum wimax_rf_state { ____Placeholder_wimax_rf_state } wimax_rf_state ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
int FUNC_1(struct i2400m *VAR_5, enum wimax_rf_state VAR_6)
{
 if (VAR_6 == VAR_3)
  return VAR_5->state == VAR_1
   || VAR_5->state == VAR_2;
 else if (VAR_6 == VAR_4)

  return VAR_5->state != VAR_1
   && VAR_5->state != VAR_2;
 else {
  FUNC_0();
  return -VAR_0;
 }
}
