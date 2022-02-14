
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; } ;
struct atm_vcc {int dummy; } ;




 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct atm_vcc*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_5, unsigned int VAR_6, unsigned long VAR_7)
{
 int VAR_8 = 0;
 struct atm_vcc *VAR_9 = FUNC_0(VAR_5);

 if (VAR_6 != 128 && VAR_6 != 130 && VAR_6 != 129)
  return -VAR_1;

 if (!FUNC_5(VAR_0))
  return -VAR_2;

 switch (VAR_6) {
  case 128:
   VAR_8 = FUNC_2(VAR_9, (int) VAR_7);
   if (VAR_8 >= 0) {
    VAR_5->state = VAR_3;
    FUNC_1(VAR_4);
   }
   break;
  case 130:
   VAR_8 = FUNC_3((int) VAR_7);
   break;
  case 129:
   VAR_8 = FUNC_4((int) VAR_7);
   break;
 }
 return VAR_8;
}
