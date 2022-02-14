
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; scalar_t__ devtype; scalar_t__ unit; int saved_r0; } ;
typedef TYPE_1__ PIA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 ( PIA *VAR_1 )

{ VAR_1->saved_r0 = FUNC_1();
 FUNC_3(0xff-VAR_1->unit); FUNC_4(4); FUNC_3(VAR_1->unit);
 FUNC_2(8); FUNC_2(8); FUNC_2(8);
 FUNC_2(2); FUNC_2(2);

 switch (VAR_1->mode) {

 case 0: FUNC_2(8); FUNC_0(4,0);
  break;

 case 1: FUNC_2(8); FUNC_0(4,0x10);
  break;

 case 2:
        case 3:
 case 4: FUNC_4(0); FUNC_0(4,8);
  break;

 }

 FUNC_0(5,8);

 if (VAR_1->devtype == VAR_0) {
  FUNC_0(0x46,0x10);
  FUNC_0(0x4c,0x38);
  FUNC_0(0x4d,0x88);
  FUNC_0(0x46,0xa0);
  FUNC_0(0x41,0);
  FUNC_0(0x4e,8);
  }
}
