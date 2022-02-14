
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int,int) ;
 char FUNC_1 () ;
 int FUNC_2 () ;
 char FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11( PIA *VAR_2, char * VAR_3, int VAR_4 )

{ int VAR_5, VAR_6, VAR_7;

        switch (VAR_2->mode) {

        case 0: FUNC_7(1); VAR_0; FUNC_7(1); VAR_1; FUNC_7(2); VAR_0; FUNC_7(0x18); VAR_1; FUNC_7(0); VAR_0;
  FUNC_6(10);
  for (VAR_5=0;VAR_5<VAR_4;VAR_5++) {
                        FUNC_8(6); VAR_6 = FUNC_2();
                        FUNC_8(4); VAR_7 = FUNC_2();
                        VAR_3[VAR_5] = FUNC_0(VAR_6,VAR_7);
                }
  FUNC_7(2); VAR_0; FUNC_7(8); VAR_1;
                break;

        case 1: FUNC_7(1); VAR_0; FUNC_7(1); VAR_1; FUNC_7(2); VAR_0; FUNC_7(0x19); VAR_1; FUNC_7(0); VAR_0;
  FUNC_6(10);
                for (VAR_5=0;VAR_5<VAR_4/2;VAR_5++) {
                        FUNC_8(0x26); VAR_3[2*VAR_5] = FUNC_1();
   FUNC_8(0x24); VAR_3[2*VAR_5+1] = FUNC_1();
                }
                FUNC_7(2); VAR_0; FUNC_7(9); VAR_1;
                break;

        case 2: FUNC_9(1); FUNC_9(1); FUNC_8(5); FUNC_10(1); FUNC_8(4);
  FUNC_9(0); FUNC_9(0); FUNC_8(0x24);
  FUNC_6(10);
                for (VAR_5=0;VAR_5<VAR_4;VAR_5++) VAR_3[VAR_5] = FUNC_3();
                FUNC_8(4);
                break;

        case 3: FUNC_9(1); FUNC_9(1); FUNC_8(5); FUNC_10(1); FUNC_8(4);
                FUNC_9(0); FUNC_9(0); FUNC_8(0x24);
                FUNC_6(10);
                for (VAR_5=0;VAR_5<VAR_4/2;VAR_5++) ((u16 *)VAR_3)[VAR_5] = FUNC_5();
                FUNC_8(4);
                break;

        case 4: FUNC_9(1); FUNC_9(1); FUNC_8(5); FUNC_10(1); FUNC_8(4);
                FUNC_9(0); FUNC_9(0); FUNC_8(0x24);
                FUNC_6(10);
                for (VAR_5=0;VAR_5<VAR_4/4;VAR_5++) ((u32 *)VAR_3)[VAR_5] = FUNC_4();
                FUNC_8(4);
                break;

        }
}
