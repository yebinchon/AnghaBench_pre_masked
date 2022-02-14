
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_info {int mode; int y; int x; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct mode_info *VAR_2)
{

 FUNC_6();


 VAR_0 = VAR_2->x;
 VAR_1 = VAR_2->y;

 switch (VAR_2->mode) {
 case 134:
  break;
 case 128:
  FUNC_5();
  break;
 case 130:
  FUNC_3();
  break;
 case 133:
  FUNC_0();
  break;
 case 132:
  FUNC_1();
  break;
 case 131:
  FUNC_2();
  break;
 case 129:
  FUNC_4();
  break;
 }

 return 0;
}
