
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int** pad_keymap; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 () ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 char** VAR_12 ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(int VAR_13, int VAR_14, int VAR_15)
{
  u16 VAR_16 = 0;
  char VAR_17[64];


  VAR_11 = 1;


  FUNC_5();
  if (!(FUNC_4() & (1<<VAR_13)))
  {

    FUNC_6(VAR_17, "PAD #%d is not connected !", VAR_13+1);
    FUNC_1("Error",VAR_17);


    VAR_11 = 0;
    return;
  }


  do
  {

    if (FUNC_7(VAR_12[VAR_14], "N.A"))
    {

      while (FUNC_3(VAR_13))
      {
        FUNC_5();
        FUNC_4();
      }


      FUNC_6(VAR_17,"Press key for %s\n(D-PAD to return)",VAR_12[VAR_14]);
      FUNC_0(0,VAR_17);


      VAR_16 = 0;
      while (!VAR_16)
      {
        FUNC_5();
        FUNC_4();
        VAR_16 = FUNC_2(VAR_13);
      }


      if (VAR_16 & VAR_2) VAR_16 = VAR_2;
      else if (VAR_16 & VAR_3) VAR_16 = VAR_3;
      else if (VAR_16 & VAR_5) VAR_16 = VAR_5;
      else if (VAR_16 & VAR_6) VAR_16 = VAR_6;
      else if (VAR_16 & VAR_8) VAR_16 = VAR_8;
      else if (VAR_16 & VAR_7) VAR_16 = VAR_7;
      else if (VAR_16 & VAR_9) VAR_16 = VAR_9;
      else if (VAR_16 & VAR_4) VAR_16 = VAR_4;
      else VAR_14 = VAR_1;


      if (VAR_14 < VAR_1)
      {
        VAR_10.pad_keymap[VAR_13][VAR_14] = VAR_16;
      }
    }
  }
  while (VAR_14++ < VAR_15);


  while (FUNC_3(VAR_13))
  {
    FUNC_5();
    FUNC_4();
  }


  FUNC_0(0,"Press key(s) for MENU");


  VAR_10.pad_keymap[VAR_13][VAR_0] = 0;


  VAR_16 = 0;
  while (!VAR_16)
  {

    FUNC_5();
    FUNC_4();
    VAR_16 = FUNC_3(VAR_13);
  }


  while (VAR_16)
  {

    VAR_10.pad_keymap[VAR_13][VAR_0] |= VAR_16;


    FUNC_5();
    FUNC_4();
    VAR_16 = FUNC_3(VAR_13);
  }


  VAR_11 = 0;
}
