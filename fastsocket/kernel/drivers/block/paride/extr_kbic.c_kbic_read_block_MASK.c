
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 char FUNC_0 (int,int) ;
 char FUNC_1 (int ) ;
 char FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5;

        switch (VAR_0->mode) {

        case 0: FUNC_8(0x98); FUNC_9(4); FUNC_9(6); FUNC_9(4);
                for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
   FUNC_9(1); FUNC_8(8); VAR_4 = FUNC_3();
          FUNC_8(0x28); VAR_5 = FUNC_3();
   VAR_1[2*VAR_3] = FUNC_0(VAR_4,VAR_5);
   FUNC_9(5); VAR_5 = FUNC_3();
          FUNC_8(8); VAR_4 = FUNC_3();
   VAR_1[2*VAR_3+1] = FUNC_0(VAR_4,VAR_5);
   FUNC_9(4);
                }
                break;

        case 1: FUNC_8(0xb8); FUNC_9(4); FUNC_9(6); FUNC_9(4);
                for (VAR_3=0;VAR_3<VAR_2/4;VAR_3++) {
                        FUNC_8(0xb8);
   FUNC_9(4); FUNC_9(5);
                        FUNC_8(8); VAR_1[4*VAR_3] = FUNC_1(FUNC_4());
   FUNC_8(0xb8); VAR_1[4*VAR_3+1] = FUNC_1(FUNC_4());
   FUNC_9(4); FUNC_9(5);
             VAR_1[4*VAR_3+3] = FUNC_1(FUNC_4());
   FUNC_8(8); VAR_1[4*VAR_3+2] = FUNC_1(FUNC_4());
                }
                FUNC_9(4);
                break;

        case 2: FUNC_8(0x88); FUNC_9(4); FUNC_9(6); FUNC_9(4);
                for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
                        FUNC_9(0xa0); FUNC_9(0xa1); VAR_1[2*VAR_3] = FUNC_2();
                        FUNC_9(0xa5); VAR_1[2*VAR_3+1] = FUNC_2();
                }
                FUNC_9(4);
                break;

        case 3: FUNC_8(0xa0); FUNC_9(4); FUNC_9(6); FUNC_9(4); FUNC_10(0);
                for (VAR_3=0;VAR_3<VAR_2;VAR_3++) VAR_1[VAR_3] = FUNC_5();
                FUNC_9(4); FUNC_9(0); FUNC_9(4);
                break;

 case 4: FUNC_8(0xa0); FUNC_9(4); FUNC_9(6); FUNC_9(4); FUNC_10(0);
                for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) ((u16 *)VAR_1)[VAR_3] = FUNC_7();
                FUNC_9(4); FUNC_9(0); FUNC_9(4);
                break;

        case 5: FUNC_8(0xa0); FUNC_9(4); FUNC_9(6); FUNC_9(4); FUNC_10(0);
                for (VAR_3=0;VAR_3<VAR_2/4;VAR_3++) ((u32 *)VAR_1)[VAR_3] = FUNC_6();
                FUNC_9(4); FUNC_9(0); FUNC_9(4);
                break;


        }
}
