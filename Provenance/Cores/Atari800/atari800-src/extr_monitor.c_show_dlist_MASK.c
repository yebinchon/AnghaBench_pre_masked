
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
 UWORD VAR_2 = VAR_0;
 UWORD VAR_3;
 UBYTE VAR_4;
 int VAR_5 = -1;
 int VAR_6 = 0;
 FUNC_2(&VAR_2);
 VAR_3 = VAR_2;
 VAR_4 = FUNC_0(&VAR_3);
 for (;;) {
  FUNC_4("%04X: ", VAR_2);
  if ((VAR_4 & 0x0f) == 0) {
   UBYTE VAR_7;
   VAR_2 = VAR_3;
   VAR_7 = FUNC_0(&VAR_3);
   if (VAR_7 == VAR_4) {
    int VAR_8 = 1;
    do {
     VAR_8++;
     VAR_2 = VAR_3;
     VAR_7 = FUNC_0(&VAR_3);
    } while (VAR_7 == VAR_4 && VAR_8 < 240);
    FUNC_4("%dx ", VAR_8);
   }
   if (VAR_4 & 0x80)
    FUNC_4("DLI ");
   FUNC_4("%c BLANK\n", ((VAR_4 >> 4) & 0x07) + '1');
   VAR_4 = VAR_7;
  }
  else if ((VAR_4 & 0x0f) == 1) {
   VAR_2 = FUNC_1(&VAR_3);
   if (VAR_4 & 0x80)
    FUNC_4("DLI ");
   if (VAR_4 & 0x40) {
    FUNC_4("JVB %04X\n", VAR_2);
    break;
   }
   FUNC_4("JMP %04X\n", VAR_2);
   VAR_3 = VAR_2;
   VAR_4 = FUNC_0(&VAR_3);
  }
  else {
   UBYTE VAR_9;
   int VAR_10;
   int VAR_11;
   if ((VAR_4 & 0x40) && VAR_5 < 0)
    VAR_5 = FUNC_1(&VAR_3);
   for (VAR_11 = 1;; VAR_11++) {
    VAR_2 = VAR_3;
    VAR_9 = FUNC_0(&VAR_3);
    if (VAR_9 != VAR_4 || VAR_11 >= 240) {
     VAR_10 = -1;
     break;
    }
    if (VAR_4 & 0x40) {
     VAR_10 = FUNC_1(&VAR_3);
     if (VAR_10 != VAR_5)
      break;
    }
   }
   if (VAR_11 > 1)
    FUNC_4("%dx ", VAR_11);
   if (VAR_4 & 0x80)
    FUNC_4("DLI ");
   if (VAR_4 & 0x40)
    FUNC_4("LMS %04X ", VAR_5);
   if (VAR_4 & 0x20)
    FUNC_4("VSCROL ");
   if (VAR_4 & 0x10)
    FUNC_4("HSCROL ");
   FUNC_4("MODE %X\n", VAR_4 & 0x0f);
   VAR_5 = VAR_10;
   VAR_4 = VAR_9;
  }

  if (++VAR_6 == 24) {
   if (FUNC_3())
    break;
   VAR_6 = 0;
  }
 }

}
