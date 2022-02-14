
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( PIA *VAR_3, int VAR_4, int VAR_5, int VAR_6 )

{ int VAR_7;

        VAR_7 = VAR_5 + VAR_2[VAR_4];

        switch (VAR_3->mode) {

        case 0:
        case 1: FUNC_1(VAR_7); VAR_0; FUNC_1(VAR_6); VAR_1;
  break;

 case 2:
 case 3:
        case 4: FUNC_2(VAR_7); (void)FUNC_0(); FUNC_3(VAR_6);
                break;
        }
}
