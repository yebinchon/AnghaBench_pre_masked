
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0297_state {int dummy; } ;
typedef int fe_modulation_t ;


 int VAR_0 ;





 int FUNC_0 (struct stv0297_state*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct stv0297_state *VAR_1, fe_modulation_t VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
 case 131:
  VAR_3 = 0;
  break;

 case 129:
  VAR_3 = 1;
  break;

 case 128:
  VAR_3 = 4;
  break;

 case 132:
  VAR_3 = 2;
  break;

 case 130:
  VAR_3 = 3;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_1, 0x00, 0x70, VAR_3 << 4);

 return 0;
}
