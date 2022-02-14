
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {int prev_res; int curr_res; int sensormode; int my_reg_line_count; int my_reg_gain; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int32_t FUNC_3(int VAR_5, int VAR_6)
{
 int32_t VAR_7;

 switch (VAR_6) {
 case 128:
  VAR_7 = FUNC_1(VAR_3, VAR_2);
  if (VAR_7 < 0)
   return VAR_7;
  FUNC_0("sensor configuration done!\n");
  break;

 case 129:
  VAR_7 = FUNC_1(VAR_3, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
  break;

 default:
  return -VAR_0;
 }

 VAR_4->prev_res = VAR_6;
 VAR_4->curr_res = VAR_6;
 VAR_4->sensormode = VAR_5;

 return FUNC_2(VAR_4->my_reg_gain,
   VAR_4->my_reg_line_count);
}
