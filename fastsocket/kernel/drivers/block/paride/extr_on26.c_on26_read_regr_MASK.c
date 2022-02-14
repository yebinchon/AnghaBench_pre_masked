
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8( PIA *VAR_2, int VAR_3, int VAR_4 )

{ int VAR_5, VAR_6, VAR_7;

 VAR_7 = (VAR_4<<2) + 1 + VAR_3;

        switch (VAR_2->mode) {

        case 0: FUNC_4(1); VAR_0; FUNC_4(VAR_7); VAR_1; FUNC_4(0); VAR_0;
  FUNC_5(6); VAR_5 = FUNC_2(); FUNC_5(4);
  FUNC_5(6); VAR_6 = FUNC_2(); FUNC_5(4);
  FUNC_5(6); FUNC_5(4); FUNC_5(6); FUNC_5(4);
                return FUNC_0(VAR_5,VAR_6);

        case 1: FUNC_4(1); VAR_0; FUNC_4(VAR_7); VAR_1; FUNC_4(0); VAR_0;
  FUNC_5(0x26); VAR_5 = FUNC_1(); FUNC_5(4); FUNC_5(0x26); FUNC_5(4);
                return VAR_5;

 case 2:
 case 3:
        case 4: FUNC_6(1); FUNC_6(1); FUNC_5(5); FUNC_7(VAR_7); FUNC_5(4);
  FUNC_6(0); FUNC_6(0); FUNC_5(0x24); VAR_5 = FUNC_3(); FUNC_5(4);
  FUNC_5(0x24); (void)FUNC_3(); FUNC_5(4);
                return VAR_5;

        }
        return -1;
}
