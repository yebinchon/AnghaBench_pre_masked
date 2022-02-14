
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9( PIA *VAR_1, int VAR_2, int VAR_3 )

{ int VAR_4, VAR_5, VAR_6;

 VAR_3 += VAR_0[VAR_2];

        switch (VAR_1->mode) {

        case 0: VAR_6 = VAR_3^0x39;
                FUNC_6(VAR_6); FUNC_7(1); FUNC_7(3); FUNC_6(VAR_6);
                VAR_4 = FUNC_3(); FUNC_7(1); VAR_5 = FUNC_3(); FUNC_7(4);
                return FUNC_0(VAR_4,VAR_5);

        case 1: VAR_6 = VAR_3^0x31;
                FUNC_6(VAR_6); FUNC_7(1); FUNC_6(VAR_6&0x37);
                FUNC_7(3); FUNC_7(5); FUNC_6(VAR_6|0xf0);
                VAR_4 = FUNC_3(); VAR_5 = FUNC_4(); FUNC_7(4);
                return FUNC_1(VAR_4,VAR_5);

        case 2: VAR_6 = VAR_3^0x29;
                FUNC_6(VAR_6); FUNC_7(1); FUNC_7(0X21); FUNC_7(0x23);
                VAR_4 = FUNC_2(); FUNC_7(4);
                return VAR_4;

 case 3:
 case 4:
        case 5: FUNC_8(VAR_3); FUNC_7(0x24); VAR_4 = FUNC_5(); FUNC_7(4);
                return VAR_4;

        }
        return -1;
}
