
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int,int) ;
 char FUNC_1 (int,int) ;
 char FUNC_2 (int,int) ;
 char FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5, VAR_6;

        switch (VAR_0->mode) {

        case 0: FUNC_9(0x81); FUNC_10(1); FUNC_10(3); FUNC_9(0xc1);
                VAR_4 = 1;
                for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
                        FUNC_10(2+VAR_4); VAR_5 = FUNC_4();
                        FUNC_10(4+VAR_4); VAR_6 = FUNC_4();
                        VAR_1[VAR_3] = FUNC_1(VAR_5,VAR_6);
                        VAR_4 = 1 - VAR_4;
                }
                FUNC_9(0); FUNC_10(4);
                break;

        case 1: FUNC_9(0x91); FUNC_10(1); FUNC_9(0x10); FUNC_10(3);
                FUNC_9(0x51); FUNC_10(5); FUNC_9(0xd1);
                VAR_4 = 1;
                for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
                        FUNC_10(4+VAR_4);
                        VAR_5 = FUNC_4(); VAR_6 = FUNC_5();
                        VAR_1[VAR_3] = FUNC_2(VAR_5,VAR_6);
                        VAR_4 = 1 - VAR_4;
                }
                FUNC_9(0); FUNC_10(4);
                break;

        case 2: FUNC_9(0x89); FUNC_10(1); FUNC_10(0x23); FUNC_10(0x21);
                VAR_4 = 1;
                for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
                        FUNC_10(0x24+VAR_4);
                        VAR_1[VAR_3] = FUNC_3();
                        VAR_4 = 1 - VAR_4;
                }
                FUNC_10(6); FUNC_10(4);
                break;

        case 3: if (VAR_2 > 512) FUNC_0(0x84,3);
  FUNC_11(0); FUNC_10(0x24);
                for (VAR_3=0;VAR_3<VAR_2;VAR_3++) VAR_1[VAR_3] = FUNC_6();
                FUNC_10(4); FUNC_0(0x84,0);
                break;

        case 4: if (VAR_2 > 512) FUNC_0(0x84,3);
  FUNC_11(0); FUNC_10(0x24);
  for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) ((u16 *)VAR_1)[VAR_3] = FUNC_8();
                FUNC_10(4); FUNC_0(0x84,0);
                break;

        case 5: if (VAR_2 > 512) FUNC_0(0x84,3);
  FUNC_11(0); FUNC_10(0x24);
                for (VAR_3=0;VAR_3<VAR_2/4;VAR_3++) ((u32 *)VAR_1)[VAR_3] = FUNC_7();
                FUNC_10(4); FUNC_0(0x84,0);
                break;

        }
}
