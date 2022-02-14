
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
 char FUNC_2 () ;
 int FUNC_3 () ;
 char FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5;

 switch (VAR_0->mode) {

       case 0: FUNC_0(4,0x40);
  FUNC_8(0x40); FUNC_7(2);
  for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
      FUNC_7(4); VAR_4 = FUNC_3();
      FUNC_7(4); VAR_5 = FUNC_3();
      VAR_1[VAR_3] = FUNC_1(VAR_4,VAR_5);
  }
  FUNC_0(4,0);
  break;

 case 1: FUNC_0(4,0x50);
  FUNC_8(0x40); FUNC_7(2); FUNC_7(0x20);
               for(VAR_3=0;VAR_3<VAR_2;VAR_3++) { FUNC_7(4); VAR_1[VAR_3] = FUNC_2(); }
         FUNC_7(1); FUNC_7(0x20);
         FUNC_0(4,0x10);
  break;

 case 2: FUNC_0(4,0x48);
  FUNC_8(0x40); FUNC_9(9); FUNC_9(0); FUNC_9(0x20);
  for (VAR_3=0;VAR_3<VAR_2;VAR_3++) VAR_1[VAR_3] = FUNC_4();
  FUNC_9(0);
  FUNC_0(4,8);
  break;

        case 3: FUNC_0(4,0x48);
                FUNC_8(0x40); FUNC_9(9); FUNC_9(0); FUNC_9(0x20);
                for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) ((u16 *)VAR_1)[VAR_3] = FUNC_6();
                FUNC_9(0);
                FUNC_0(4,8);
                break;

        case 4: FUNC_0(4,0x48);
                FUNC_8(0x40); FUNC_9(9); FUNC_9(0); FUNC_9(0x20);
                for (VAR_3=0;VAR_3<VAR_2/4;VAR_3++) ((u32 *)VAR_1)[VAR_3] = FUNC_5();
                FUNC_9(0);
                FUNC_0(4,8);
                break;

 }
}
