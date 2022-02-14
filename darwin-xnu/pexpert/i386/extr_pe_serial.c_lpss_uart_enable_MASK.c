
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned int) ;

void FUNC_3( boolean_t VAR_5 )
{
 unsigned int VAR_6;

 if (!VAR_4) {
  return;
 }

 VAR_6 = FUNC_1 (VAR_1 + 0x84);
 if (VAR_5 == VAR_0) {
  VAR_6 |= 0x03;
  VAR_3 = 0;
 } else {
  VAR_6 &= ~(0x03);
 }

 FUNC_2 (VAR_1 + 0x84, VAR_6);
 VAR_6 = FUNC_1 (VAR_1 + 0x84);

 if (VAR_5 == VAR_2) {
  FUNC_0();
  VAR_3 = 1;
 }
}
