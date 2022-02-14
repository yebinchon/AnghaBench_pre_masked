
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
 int VAR_2 ;
 char FUNC_0 (int,int) ;
 char FUNC_1 () ;
 int FUNC_2 () ;
 char FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8( PIA *VAR_3, char * VAR_4, int VAR_5 )

{ int VAR_6, VAR_7, VAR_8;

        FUNC_6(0x81); VAR_0;
        if (VAR_3->mode) { FUNC_6(0x19); } else { FUNC_6(9); }
 VAR_1; FUNC_6(0x82); VAR_0; VAR_2; FUNC_6(0x20); VAR_0;

        switch (VAR_3->mode) {

        case 0: for (VAR_6=0;VAR_6<VAR_5;VAR_6++) {
                        FUNC_7(6); VAR_7 = FUNC_2(); FUNC_7(4);
                        FUNC_7(6); VAR_8 = FUNC_2(); FUNC_7(4);
                        VAR_4[VAR_6] = FUNC_0(VAR_7,VAR_8);
                }
                break;

        case 1: FUNC_6(0);
                for (VAR_6=0;VAR_6<VAR_5;VAR_6++) {
                        FUNC_7(0x26); VAR_4[VAR_6] = FUNC_1(); FUNC_7(0x24);
                }
                FUNC_7(4);
                break;

        case 2: FUNC_7(0x24);
                for (VAR_6=0;VAR_6<VAR_5;VAR_6++) VAR_4[VAR_6] = FUNC_3();
                FUNC_7(4);
                break;

        case 3: FUNC_7(0x24);
                for (VAR_6=0;VAR_6<VAR_5/2;VAR_6++) ((u16 *)VAR_4)[VAR_6] = FUNC_5();
                FUNC_7(4);
                break;

        case 4: FUNC_7(0x24);
                for (VAR_6=0;VAR_6<VAR_5/4;VAR_6++) ((u32 *)VAR_4)[VAR_6] = FUNC_4();
                FUNC_7(4);
                break;

        }
}
