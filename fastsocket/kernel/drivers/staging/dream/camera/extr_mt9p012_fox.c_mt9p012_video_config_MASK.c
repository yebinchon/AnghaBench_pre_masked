
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int prev_res; int curr_res; int sensormode; int my_reg_line_count; int my_reg_gain; } ;


 int FUNC_0 (char*) ;

 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int32_t FUNC_4(int VAR_6, int VAR_7)
{
 int32_t VAR_8;

 switch (VAR_7) {
 case 128:
  VAR_8 = FUNC_2(VAR_3, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;

  FUNC_0("mt9p012 sensor configuration done!\n");
  break;

 case 129:
  VAR_8 =
  FUNC_2(VAR_3, VAR_1);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 default:
  return 0;
 }

 VAR_5->prev_res = VAR_7;
 VAR_5->curr_res = VAR_7;
 VAR_5->sensormode = VAR_6;

 VAR_8 =
  FUNC_3(VAR_5->my_reg_gain,
   VAR_5->my_reg_line_count);

 VAR_8 =
  FUNC_1(VAR_4->addr,
   VAR_0,
   0x10cc|0x0002);

 return VAR_8;
}
