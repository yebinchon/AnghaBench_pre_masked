
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum pcf50633_regulator_id { ____Placeholder_pcf50633_regulator_id } pcf50633_regulator_id ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(enum pcf50633_regulator_id VAR_1,
      u8 VAR_2)
{
 int VAR_3;

 switch (VAR_1) {
 case 137:
  VAR_3 = FUNC_0(VAR_2);
  break;
 case 136:
  VAR_3 = FUNC_1(VAR_2);
  break;
 case 135:
  VAR_3 = FUNC_1(VAR_2);
  break;
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 134:
  VAR_3 = FUNC_2(VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return VAR_3 * 1000;
}
