
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int* VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5( PIA *VAR_1, int VAR_2, int VAR_3 )

{ int VAR_4, VAR_5, VAR_6;

        VAR_6 = VAR_3 + VAR_0[VAR_2] + 0x40;

 switch (VAR_1->mode) {

        case 0: FUNC_3(VAR_6); FUNC_4(0xe); FUNC_4(6);
  FUNC_4(7); FUNC_4(6); FUNC_4(0);
  VAR_4 = FUNC_2(); FUNC_3(0x10); VAR_5 = FUNC_2(); FUNC_4(0xc);
  return FUNC_0(VAR_4,VAR_5);

        case 1: VAR_6 |= 0x10;
  FUNC_3(VAR_6); FUNC_4(0xe); FUNC_4(6); FUNC_3(0xff);
  FUNC_4(0x27); FUNC_4(0x26); FUNC_4(0x20);
  VAR_4 = FUNC_1();
  FUNC_4(0x26); FUNC_4(0xc);
  return VAR_4;
 }
 return -1;
}
