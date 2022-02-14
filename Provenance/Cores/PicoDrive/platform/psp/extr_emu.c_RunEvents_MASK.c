
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_6 ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int VAR_8 ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(unsigned int VAR_9)
{
 if (VAR_9 & 0x1800)
 {
  int VAR_10 = 1;

  if ( FUNC_2(VAR_8) &&
    (( (VAR_9 & 0x1000) && (VAR_5.EmuOpt & 0x800)) ||
     (!(VAR_9 & 0x1000) && (VAR_5.EmuOpt & 0x200))) )
  {
   int VAR_11;
   FUNC_8(0,0);
   FUNC_0("", (VAR_9 & 0x1000) ? "LOAD STATE? (X=yes, O=no)" : "OVERWRITE SAVE? (X=yes, O=no)", 0);
   while( !((VAR_11 = FUNC_7(1)) & (VAR_1|VAR_0)) )
    FUNC_6(50);
   if (VAR_11 & VAR_0) VAR_10 = 0;
   while( ((VAR_11 = FUNC_7(1)) & (VAR_1|VAR_0)) )
    FUNC_6(50);
   FUNC_1(0);
  }

  if (VAR_10)
  {
   FUNC_5(4, (VAR_9 & 0x1000) ? "LOADING GAME" : "SAVING GAME", 1, 0);
   VAR_4 = VAR_6;
   FUNC_3((VAR_9 & 0x1000) >> 12, 0);
   VAR_4 = ((void*)0);
   FUNC_6(0);
  }

  VAR_7 = 1;
 }
 if (VAR_9 & 0x0400)
 {
  if (VAR_3&0x10) { VAR_3&=~0x10; VAR_5.EmuOpt |= 0x80; }
  else { VAR_3|= 0x10; VAR_5.EmuOpt &= ~0x80; }

  FUNC_9();

  if (VAR_3 & VAR_2)
   FUNC_4("fast renderer");
  else if (VAR_5.EmuOpt&0x80)
   FUNC_4("accurate renderer");
 }
 if (VAR_9 & 0x0300)
 {
  if(VAR_9&0x0200) {
   VAR_8 -= 1;
   if(VAR_8 < 0) VAR_8 = 9;
  } else {
   VAR_8 += 1;
   if(VAR_8 > 9) VAR_8 = 0;
  }
  FUNC_4("SAVE SLOT %i [%s]", VAR_8,
   FUNC_2(VAR_8) ? "USED" : "FREE");
 }
}
