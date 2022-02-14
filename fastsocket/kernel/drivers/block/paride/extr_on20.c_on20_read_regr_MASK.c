
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6( PIA *VAR_0, int VAR_1, int VAR_2 )

{ int VAR_3,VAR_4, VAR_5 ;

        VAR_5 = (VAR_2<<2) + 1 + VAR_1;

        FUNC_1(1); FUNC_4(VAR_5); FUNC_1(0);

 switch (VAR_0->mode) {

        case 0: FUNC_5(4); FUNC_5(6); VAR_4 = FUNC_3();
                 FUNC_5(4); FUNC_5(6); VAR_3 = FUNC_3();
                 FUNC_5(4); FUNC_5(6); FUNC_5(4); FUNC_5(6); FUNC_5(4);
   return FUNC_0(VAR_4,VAR_3);

 case 1: FUNC_5(4); FUNC_5(0x26); VAR_5 = FUNC_2();
                 FUNC_5(4); FUNC_5(0x26); FUNC_5(4);
   return VAR_5;

 }
 return -1;
}
