
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
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int32_t FUNC_3(int VAR_4, int VAR_5)
{
 int32_t VAR_6;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_1(VAR_2, VAR_1);
  if (VAR_6 < 0)
   return VAR_6;

  FUNC_0("s5k3e2fx sensor configuration done!\n");
  break;

 case 129:
  VAR_6 = FUNC_1(VAR_2, VAR_0);
  if (VAR_6 < 0)
   return VAR_6;

  break;

 default:
  return 0;
 }

 VAR_3->prev_res = VAR_5;
 VAR_3->curr_res = VAR_5;
 VAR_3->sensormode = VAR_4;

 VAR_6 =
  FUNC_2(VAR_3->my_reg_gain,
   VAR_3->my_reg_line_count);

 return VAR_6;
}
