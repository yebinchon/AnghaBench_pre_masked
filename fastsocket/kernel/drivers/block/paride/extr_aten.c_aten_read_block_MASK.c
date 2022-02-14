
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 char FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 switch (VAR_0->mode) {

 case 0: FUNC_3(0x48); FUNC_4(0xe); FUNC_4(6);
  for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
   FUNC_4(7); FUNC_4(6); FUNC_4(2);
   VAR_4 = FUNC_2(); FUNC_3(0x58); VAR_5 = FUNC_2();
   FUNC_4(0); VAR_7 = FUNC_2(); FUNC_3(0x48); VAR_6 = FUNC_2();
   VAR_1[2*VAR_3] = FUNC_0(VAR_6,VAR_7);
   VAR_1[2*VAR_3+1] = FUNC_0(VAR_4,VAR_5);
  }
  FUNC_4(0xc);
  break;

 case 1: FUNC_3(0x58); FUNC_4(0xe); FUNC_4(6);
  for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
   FUNC_4(0x27); FUNC_4(0x26); FUNC_4(0x22);
   VAR_4 = FUNC_1(); FUNC_4(0x20); VAR_5 = FUNC_1();
   VAR_1[2*VAR_3] = VAR_5; VAR_1[2*VAR_3+1] = VAR_4;
  }
  FUNC_4(0x26); FUNC_4(0xc);
  break;
 }
}
