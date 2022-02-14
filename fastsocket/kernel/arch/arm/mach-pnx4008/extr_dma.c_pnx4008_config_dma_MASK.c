
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(int VAR_1, int VAR_2, int VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 0:
  VAR_4 &= ~(1 << 1);
  break;
 case 1:
  VAR_4 |= (1 << 1);
  break;
 default:
  break;
 }

 switch (VAR_2) {
 case 0:
  VAR_4 &= ~(1 << 2);
  break;
 case 1:
  VAR_4 |= (1 << 2);
  break;
 default:
  break;
 }

 switch (VAR_3) {
 case 0:
  VAR_4 &= ~(1 << 0);
  break;
 case 1:
  VAR_4 |= (1 << 0);
  break;
 default:
  break;
 }

 FUNC_2();
 FUNC_1(VAR_4, VAR_0);
 FUNC_3();

 return 0;
}
