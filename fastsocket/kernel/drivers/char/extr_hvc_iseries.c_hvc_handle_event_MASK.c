
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HvLpEvent {int xSubtype; int xRc; } ;


 int FUNC_0 (struct HvLpEvent*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct HvLpEvent*) ;
 int FUNC_2 (struct HvLpEvent*) ;
 int FUNC_3 (struct HvLpEvent*) ;
 int FUNC_4 (struct HvLpEvent*) ;
 int FUNC_5 (struct HvLpEvent*) ;
 int FUNC_6 (struct HvLpEvent*) ;
 int FUNC_7 (struct HvLpEvent*) ;






__attribute__((used)) static void FUNC_8(struct HvLpEvent *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->xSubtype & VAR_1;
 switch (VAR_3) {
 case 128:
  FUNC_5(VAR_2);
  break;
 case 131:
  FUNC_2(VAR_2);
  break;
 case 129:
  FUNC_4(VAR_2);
  break;
 case 132:
  FUNC_1(VAR_2);
  break;
 case 130:
  FUNC_3(VAR_2);
  break;
 default:
  if (FUNC_6(VAR_2) && FUNC_7(VAR_2)) {
   VAR_2->xRc = VAR_0;
   FUNC_0(VAR_2);
  }
 }
}
