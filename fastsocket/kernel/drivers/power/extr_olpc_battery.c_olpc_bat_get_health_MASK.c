
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int uint8_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(union power_supply_propval *VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, ((void*)0), 0, &VAR_7, 1);
 if (VAR_8)
  return VAR_8;

 switch (VAR_7) {
 case 0:
  VAR_6->intval = VAR_2;
  break;

 case 129:
  VAR_6->intval = VAR_3;
  break;

 case 128:
  VAR_6->intval = VAR_4;
  break;

 case 131:
 case 130:
 case 132:
 case 133:
  VAR_6->intval = VAR_5;
  break;

 default:

  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
