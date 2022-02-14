
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_area {int flags; int cc; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct chsc_sei_area*) ;
 int FUNC_2 (struct chsc_sei_area*) ;
 int FUNC_3 (struct chsc_sei_area*) ;
 int FUNC_4 (struct chsc_sei_area*) ;
 int FUNC_5 (struct chsc_sei_area*) ;
 int FUNC_6 (struct chsc_sei_area*) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct chsc_sei_area *VAR_0)
{

 if (VAR_0->flags & 0x40) {
  FUNC_0(2, "chsc: event overflow\n");
  FUNC_7();
 }

 switch (VAR_0->cc) {
 case 1:
  FUNC_3(VAR_0);
  break;
 case 2:
  FUNC_4(VAR_0);
  break;
 case 7:
  FUNC_1(VAR_0);
  break;
 case 8:
  FUNC_2(VAR_0);
  break;
 case 12:
  FUNC_6(VAR_0);
  break;
 case 14:
  FUNC_5(VAR_0);
  break;
 default:
  FUNC_0(4, "chsc: unhandled sei content code %d\n",
         VAR_0->cc);
  break;
 }
}
