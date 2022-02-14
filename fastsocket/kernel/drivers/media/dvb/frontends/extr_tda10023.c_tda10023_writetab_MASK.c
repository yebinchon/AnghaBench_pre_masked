
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda10023_state {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tda10023_state*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct tda10023_state* VAR_0, u8* VAR_1)
{
 u8 VAR_2,VAR_3,VAR_4;
 while (1) {
  VAR_2=*VAR_1++;
  VAR_3=*VAR_1++;
  VAR_4=*VAR_1++;
  if (VAR_2==0xff) {
   if (VAR_3==0xff)
    break;
   else
    FUNC_0(VAR_3);
  }
  else
   FUNC_1(VAR_0,VAR_2,VAR_3,VAR_4);
 }
}
