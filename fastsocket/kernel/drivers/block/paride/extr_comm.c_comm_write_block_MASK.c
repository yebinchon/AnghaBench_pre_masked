
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ int VAR_4;

        switch (VAR_1->mode) {

        case 0:
        case 1: FUNC_3(0x68); VAR_0;
         for (VAR_4=0;VAR_4<VAR_3;VAR_4++) {
                        FUNC_4(5); FUNC_3(VAR_2[VAR_4^1]); FUNC_4(7);
                }
                FUNC_4(5); FUNC_4(4);
                break;

        case 2: FUNC_5(0x48); (void)FUNC_2();
                for (VAR_4=0;VAR_4<VAR_3;VAR_4++) FUNC_6(VAR_2[VAR_4^1]);
                break;

        case 3: FUNC_5(0x48); (void)FUNC_2();
                for (VAR_4=0;VAR_4<VAR_3/2;VAR_4++) FUNC_8(FUNC_0(VAR_2,VAR_4));
                break;

        case 4: FUNC_5(0x48); (void)FUNC_2();
                for (VAR_4=0;VAR_4<VAR_3/4;VAR_4++) FUNC_7(FUNC_1(VAR_2,VAR_4));
                break;


        }
}
