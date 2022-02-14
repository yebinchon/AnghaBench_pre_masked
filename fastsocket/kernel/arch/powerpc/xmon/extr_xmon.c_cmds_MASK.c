
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int nip; int link; int * gpr; } ;



 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct pt_regs*) ;
 int FUNC_12 () ;
 int VAR_0 ;
 int FUNC_13 () ;
 int * VAR_1 ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 () ;
 int FUNC_21 (struct pt_regs*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_29 (int ) ;
 struct pt_regs* VAR_4 ;
 int FUNC_30 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_31(struct pt_regs *VAR_5)
{
 int VAR_6 = 0;

 VAR_1 = ((void*)0);
 VAR_4 = VAR_5;

 if (!VAR_3) {
  VAR_3 = 1;
  FUNC_30(VAR_5->gpr[1], VAR_5->link, VAR_5->nip);
 }

 for(;;) {



  FUNC_19("mon> ");
  FUNC_12();
  VAR_2 = 0;
  VAR_6 = FUNC_24();
  if( VAR_6 == '\n' ) {
   if (VAR_1 == ((void*)0))
    continue;
   FUNC_28(VAR_1);
   VAR_1 = ((void*)0);
   VAR_6 = FUNC_13();
  }
  switch (VAR_6) {
  case 'm':
   VAR_6 = FUNC_13();
   switch (VAR_6) {
   case 'm':
   case 's':
   case 'd':
    FUNC_17(VAR_6);
    break;
   case 'l':
    FUNC_16();
    break;
   case 'z':
    FUNC_18();
    break;
   case 'i':
    FUNC_23(0);
    break;
   default:
    VAR_2 = VAR_6;
    FUNC_15();
   }
   break;
  case 'd':
   FUNC_8();
   break;
  case 'l':
   FUNC_27();
   break;
  case 'r':
   FUNC_21(VAR_5);
   break;
  case 'e':
   FUNC_11(VAR_5);
   break;
  case 'S':
   FUNC_26();
   break;
  case 't':
   FUNC_0(VAR_5);
   break;
  case 'f':
   FUNC_3();
   break;
  case 's':
   if (FUNC_6() == 0)
    break;
   if (FUNC_7(VAR_5))
    return VAR_6;
   break;
  case 'x':
  case 'X':
   return VAR_6;
  case 128:
   FUNC_19(" <no input ...>\n");
   FUNC_14(2000);
   return VAR_6;
  case '?':
   FUNC_29(VAR_0);
   break;
  case 'b':
   FUNC_2();
   break;
  case 'C':
   FUNC_5();
   break;
  case 'c':
   if (FUNC_4())
    return 0;
   break;
  case 'z':
   FUNC_1();
   break;
  case 'p':
   FUNC_20();
   break;
  default:
   FUNC_19("Unrecognized command: ");
          do {
    if (' ' < VAR_6 && VAR_6 <= '~')
     FUNC_22(VAR_6);
    else
     FUNC_19("\\x%x", VAR_6);
    VAR_6 = FUNC_13();
          } while (VAR_6 != '\n');
   FUNC_19(" (type ? for help)\n");
   break;
  }
 }
}
