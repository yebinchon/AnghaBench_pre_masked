
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
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( PIA *VAR_3, char * VAR_4, int VAR_5 )

{ int VAR_6;

        FUNC_0(0x81); VAR_0;
        if (VAR_3->mode) { FUNC_0(0x19); } else { FUNC_0(9); }
        VAR_1; FUNC_0(0x82); VAR_0; VAR_2; FUNC_0(0x20); VAR_0;

        switch (VAR_3->mode) {

        case 0:
        case 1: for (VAR_6=0;VAR_6<VAR_5;VAR_6++) {
                        FUNC_1(5); FUNC_0(VAR_4[VAR_6]); FUNC_1(7);
                }
                FUNC_1(5); FUNC_1(4);
                break;

        case 2: FUNC_1(0xc5);
                for (VAR_6=0;VAR_6<VAR_5;VAR_6++) FUNC_2(VAR_4[VAR_6]);
  FUNC_1(0xc4);
                break;

        case 3: FUNC_1(0xc5);
                for (VAR_6=0;VAR_6<VAR_5/2;VAR_6++) FUNC_4(((u16 *)VAR_4)[VAR_6]);
                FUNC_1(0xc4);
                break;

        case 4: FUNC_1(0xc5);
                for (VAR_6=0;VAR_6<VAR_5/4;VAR_6++) FUNC_3(((u32 *)VAR_4)[VAR_6]);
                FUNC_1(0xc4);
                break;

        }
}
