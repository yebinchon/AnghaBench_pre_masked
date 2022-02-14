
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;
typedef int fe_sec_voltage_t ;


 int VAR_0 ;


 int FUNC_0 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_1 (struct tda8083_state* VAR_1, fe_sec_voltage_t VAR_2)
{
 switch (VAR_2) {
 case 129:
  return FUNC_0 (VAR_1, 0x20, 0x00);
 case 128:
  return FUNC_0 (VAR_1, 0x20, 0x11);
 default:
  return -VAR_0;
 };
}
