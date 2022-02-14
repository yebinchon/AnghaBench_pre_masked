
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
 char FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 switch (VAR_0->mode) {

 case 0: FUNC_5(0xc); FUNC_4(0x10); FUNC_5(0x8); FUNC_5(0xc);
  for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
      FUNC_5(0xd); VAR_4 = FUNC_2();
      FUNC_5(0xf); VAR_5 = FUNC_2();
      FUNC_5(0xc); VAR_6 = FUNC_2();
      FUNC_5(0xe); VAR_7 = FUNC_2();
      VAR_1[2*VAR_3 ] = FUNC_0(VAR_4,VAR_5);
      VAR_1[2*VAR_3+1] = FUNC_0(VAR_6,VAR_7);
  }
  FUNC_5(0xc);
  break;

 case 1: FUNC_5(0xc); FUNC_4(0x90); FUNC_5(0x8); FUNC_5(0xc);
  FUNC_5(0xec); FUNC_5(0xee);
  for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
      FUNC_5(0xef); VAR_4 = FUNC_1();
      FUNC_5(0xee); VAR_5 = FUNC_1();
                    VAR_1[2*VAR_3 ] = VAR_4;
                    VAR_1[2*VAR_3+1] = VAR_5;
  }
  FUNC_5(0xec);
  FUNC_5(0xc);
  break;

 case 2: FUNC_5(0xc); FUNC_4(0x90); FUNC_5(0x8); FUNC_5(0xc);
                FUNC_5(0xec);
  for (VAR_3=0;VAR_3<VAR_2;VAR_3++) VAR_1[VAR_3] = FUNC_3();
                FUNC_5(0xc);
  break;

 }
}
