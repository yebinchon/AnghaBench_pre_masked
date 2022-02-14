
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8083_state {int dummy; } ;
typedef int fe_sec_mini_cmd_t ;


 int VAR_0 ;


 int FUNC_0 (struct tda8083_state*,int) ;
 int FUNC_1 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_2 (struct tda8083_state* VAR_1, fe_sec_mini_cmd_t VAR_2)
{
 switch (VAR_2) {
 case 129:
  FUNC_1 (VAR_1, 0x29, (5 << 2));
  break;
 case 128:
  FUNC_1 (VAR_1, 0x29, (7 << 2));
  break;
 default:
  return -VAR_0;
 };

 FUNC_0 (VAR_1, 100);

 return 0;
}
