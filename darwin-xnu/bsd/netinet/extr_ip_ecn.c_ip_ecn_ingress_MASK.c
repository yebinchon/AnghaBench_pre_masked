
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;





 int VAR_0 ;
 int FUNC_0 (char*) ;

void
FUNC_1(int VAR_1, u_int8_t *VAR_2, const u_int8_t *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  FUNC_0("NULL pointer passed to ip_ecn_ingress");

 *VAR_2 = *VAR_3;
 switch (VAR_1) {
 case 128:
  break;
 case 130:
  *VAR_2 &= ~VAR_0;
  break;
 case 129:
  break;
 }
}
