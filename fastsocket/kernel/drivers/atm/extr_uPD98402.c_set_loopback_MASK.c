
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
struct TYPE_2__ {int loop_mode; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (unsigned char,int ) ;



 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static int FUNC_5(struct atm_dev *VAR_5,int VAR_6)
{
 unsigned char VAR_7;

 VAR_7 = FUNC_0(VAR_1) & ~(VAR_4 | VAR_2 |
     VAR_3);
 switch (FUNC_3(VAR_6)) {
  case 129:
   break;
  case 128:
   VAR_7 |= VAR_4;
   break;
  case 130:
   VAR_7 |= VAR_2;
   break;
  default:
   return -VAR_0;
 }
 switch (FUNC_4(VAR_6)) {
  case 129:
   break;
  case 128:
   VAR_7 |= VAR_3;
   break;
  default:
   return -VAR_0;
 }
 FUNC_2(VAR_7,VAR_1);
 FUNC_1(VAR_5)->loop_mode = VAR_6;
 return 0;
}
