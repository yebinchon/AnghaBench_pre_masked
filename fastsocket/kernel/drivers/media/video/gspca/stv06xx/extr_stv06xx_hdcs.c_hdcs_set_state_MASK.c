
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {struct hdcs* sensor_priv; } ;
struct hdcs {int state; } ;
typedef enum hdcs_power_state { ____Placeholder_hdcs_power_state } hdcs_power_state ;


 int VAR_0 ;
 int FUNC_0 (struct sd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct sd*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_4, enum hdcs_power_state VAR_5)
{
 struct hdcs *VAR_6 = VAR_4->sensor_priv;
 u8 VAR_7;
 int VAR_8;

 if (VAR_6->state == VAR_5)
  return 0;


 if (VAR_6->state != VAR_3) {
  VAR_8 = FUNC_1(VAR_4, FUNC_0(VAR_4), 0);
  if (VAR_8)
   return VAR_8;
 }

 VAR_6->state = VAR_3;

 if (VAR_5 == VAR_3)
  return 0;

 switch (VAR_5) {
 case 128:
  VAR_7 = VAR_2;
  break;

 case 129:
  VAR_7 = VAR_1;
  break;

 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_4, FUNC_0(VAR_4), VAR_7);


 if (!VAR_8)
  VAR_6->state = VAR_5;

 return VAR_8;
}
