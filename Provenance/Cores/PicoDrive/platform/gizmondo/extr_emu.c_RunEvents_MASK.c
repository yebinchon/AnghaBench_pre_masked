
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (unsigned int,int ) ;
 int * VAR_6 ;
 int * FUNC_8 (int) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int,int,char*) ;
 int VAR_10 ;
 int FUNC_10 (int ,char*,int,char*) ;
 int VAR_11 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(unsigned int VAR_12)
{
 if (VAR_12 & 0x1800)
 {
  int VAR_13 = 1;

  if (VAR_4 != ((void*)0))
   FUNC_0(1);
  if (VAR_7 == ((void*)0))
   VAR_7 = FUNC_8(1);
  if ( FUNC_6(VAR_11) &&
    (( (VAR_12 & 0x1000) && (VAR_5.EmuOpt & 0x800)) ||
     (!(VAR_12 & 0x1000) && (VAR_5.EmuOpt & 0x200))) )
  {
   int VAR_14;
   FUNC_4("", (VAR_12 & 0x1000) ? "LOAD STATE? (PLAY=yes, STOP=no)" : "OVERWRITE SAVE? (PLAY=yes, STOP=no)");
   while( !((VAR_14 = FUNC_1()) & (VAR_0|VAR_1)) )
    FUNC_3(50);
   if (VAR_14 & VAR_1) VAR_13 = 0;
   while( ((VAR_14 = FUNC_1()) & (VAR_0|VAR_1)) )
    FUNC_3(50);
   FUNC_5(0);
  }

  if (VAR_13)
  {
   FUNC_9(4, 232, (VAR_12 & 0x1000) ? "LOADING GAME" : "SAVING GAME");
   VAR_3 = VAR_6;
   FUNC_7((VAR_12 & 0x1000) >> 12, 0);
   VAR_3 = ((void*)0);
   FUNC_3(0);
  }

  if (VAR_4 != ((void*)0))
   FUNC_0(0);
  VAR_10 = 1;
 }
 if (VAR_12 & 0x0400)
 {
  if (VAR_2&0x10) { VAR_2&=~0x10; VAR_5.EmuOpt |= 0x80; }
  else { VAR_2|= 0x10; VAR_5.EmuOpt &= ~0x80; }

  FUNC_12();

  if (VAR_2&0x10) {
   FUNC_11(VAR_8, " 8bit fast renderer");
  } else if (VAR_5.EmuOpt&0x80) {
   FUNC_11(VAR_8, "16bit accurate renderer");
  } else {
   FUNC_11(VAR_8, " 8bit accurate renderer");
  }

  VAR_9 = FUNC_2();
 }
 if (VAR_12 & 0x0300)
 {
  if(VAR_12&0x0200) {
   VAR_11 -= 1;
   if(VAR_11 < 0) VAR_11 = 9;
  } else {
   VAR_11 += 1;
   if(VAR_11 > 9) VAR_11 = 0;
  }
  FUNC_10(VAR_8, "SAVE SLOT %i [%s]", VAR_11, FUNC_6(VAR_11) ? "USED" : "FREE");
  VAR_9 = FUNC_2();
 }
}
