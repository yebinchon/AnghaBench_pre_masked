
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int mode; int unit; int port; int device; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char FUNC_4 (int,int) ;
 int FUNC_5 (char*,...) ;
 char FUNC_6 () ;
 int FUNC_7 () ;
 char FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 char VAR_9[VAR_0];

 FUNC_3(VAR_1);

 switch (VAR_1->mode) {

 case 0: FUNC_1(VAR_1);
  FUNC_0(0x13,0x7f);
  FUNC_12(0x13); FUNC_11(2);
  for(VAR_4=0;VAR_4<VAR_0;VAR_4++) {
                    FUNC_11(4); VAR_6 = FUNC_7();
                    FUNC_11(4); VAR_7 = FUNC_7();
                    VAR_9[VAR_4] = FUNC_4(VAR_6,VAR_7);
  }
  FUNC_2(VAR_1);
  break;

        case 1: FUNC_1(VAR_1);
  FUNC_0(0x13,0x7f);
                FUNC_12(0x13); FUNC_11(2); FUNC_11(0x20);
                for(VAR_4=0;VAR_4<VAR_0;VAR_4++) { FUNC_11(4); VAR_9[VAR_4] = FUNC_6(); }
                FUNC_11(1); FUNC_11(0x20);
  FUNC_2(VAR_1);
  break;

 case 2:
 case 3:
 case 4: VAR_8 = VAR_1->mode;
  VAR_1->mode = 0;
  FUNC_1(VAR_1);
  FUNC_0(7,3);
  FUNC_0(4,8);
  FUNC_2(VAR_1);

  VAR_1->mode = VAR_8;
  FUNC_1(VAR_1);
  FUNC_12(0x13); FUNC_13(9); FUNC_13(1); FUNC_12(0); FUNC_13(3); FUNC_13(0); FUNC_13(0xe0);

  switch (VAR_1->mode) {
    case 2: for (VAR_4=0;VAR_4<VAR_0;VAR_4++) VAR_9[VAR_4] = FUNC_8();
     break;
    case 3: for (VAR_4=0;VAR_4<VAR_0/2;VAR_4++) ((u16 *)VAR_9)[VAR_4] = FUNC_10();
                          break;
    case 4: for (VAR_4=0;VAR_4<VAR_0/4;VAR_4++) ((u32 *)VAR_9)[VAR_4] = FUNC_9();
                          break;
  }

  FUNC_13(0);
  FUNC_0(7,0);
  FUNC_2(VAR_1);

  break;

 }

 if (VAR_3) {
     FUNC_5("%s: bpck: 0x%x unit %d mode %d: ",
     VAR_1->device,VAR_1->port,VAR_1->unit,VAR_1->mode);
     for (VAR_4=0;VAR_4<VAR_0;VAR_4++) FUNC_5("%3d",VAR_9[VAR_4]);
     FUNC_5("\n");
 }

 VAR_5 = 0;
 for (VAR_4=0;VAR_4<VAR_0;VAR_4++) if (VAR_9[VAR_4] != (VAR_4+1)) VAR_5++;
 return VAR_5;
}
