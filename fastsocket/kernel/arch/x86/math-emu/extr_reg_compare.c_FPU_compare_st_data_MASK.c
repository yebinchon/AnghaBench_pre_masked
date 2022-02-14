
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int FPU_REG ;





 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;

int FUNC_4(FPU_REG const *VAR_7, u_char VAR_8)
{
 int VAR_9 = 0, VAR_10;

 VAR_10 = FUNC_1(VAR_7, VAR_8);

 if (VAR_10 & VAR_1) {
  FUNC_0(VAR_3);
  VAR_9 = VAR_6 | VAR_5 | VAR_4;
 } else
  switch (VAR_10 & 7) {
  case 129:
   VAR_9 = VAR_4;
   break;
  case 131:
   VAR_9 = VAR_6;
   break;
  case 130:
   VAR_9 = 0;
   break;
  case 128:
   VAR_9 = VAR_6 | VAR_5 | VAR_4;
   break;






  }
 FUNC_3(VAR_9);
 if (VAR_10 & VAR_0) {
  return FUNC_2() < 0;
 }
 return 0;
}
