
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ forwardmove; scalar_t__ consistancy; int buttons; } ;
typedef TYPE_2__ ticcmd_t ;
struct TYPE_9__ {scalar_t__ playerstate; char* message; TYPE_2__ cmd; TYPE_1__* mo; } ;
struct TYPE_7__ {scalar_t__ x; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;




 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int FUNC_16 () ;
 scalar_t__ VAR_6 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 scalar_t__ VAR_7 ;
 int FUNC_21 () ;
 scalar_t__** VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_22 (TYPE_2__*,int *,int) ;
 int ** VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__* VAR_19 ;
 TYPE_3__* VAR_20 ;
 scalar_t__ VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 int FUNC_23 (char*,char*,char*) ;
 int FUNC_24 (int *,char*) ;
 int VAR_24 ;

void FUNC_25 (void)
{
    int VAR_25;
    int VAR_26;
    ticcmd_t* VAR_27;


    for (VAR_25=0 ; VAR_25<VAR_5 ; VAR_25++)
 if (VAR_19[VAR_25] && VAR_20[VAR_25].playerstate == VAR_6)
     FUNC_9 (VAR_25);


    while (VAR_12 != 133)
    {
 switch (VAR_12)
 {
   case 135:
     FUNC_6 ();
     break;
   case 134:
     FUNC_7 ();
     break;
   case 136:
     FUNC_5 ();
     break;
   case 131:
     FUNC_10 ();
     break;
   case 132:
     FUNC_8 ();
     break;
   case 137:
     FUNC_4 ();
     break;
   case 129:
     FUNC_2 ();
     break;
   case 128:
     FUNC_11 ();
     break;
   case 130:
     FUNC_16 ();
     VAR_12 = 133;
     break;
   case 133:
     break;
 }
    }



    VAR_26 = (VAR_14/VAR_24)%VAR_0;

    for (VAR_25=0 ; VAR_25<VAR_5 ; VAR_25++)
    {
 if (VAR_19[VAR_25])
 {
     VAR_27 = &VAR_20[VAR_25].cmd;

     FUNC_22 (VAR_27, &VAR_15[VAR_25][VAR_26], sizeof(ticcmd_t));

     if (VAR_10)
  FUNC_12 (VAR_27);
     if (VAR_11)
  FUNC_13 (VAR_27);


     if (VAR_27->forwardmove > VAR_7
  && !(VAR_14&31) && ((VAR_14>>5)&3) == VAR_25 )
     {
  static char VAR_28[80];
  extern char *VAR_29[4];
  FUNC_23 (VAR_28, "%s is turbo!",VAR_29[VAR_25]);
  VAR_20[VAR_9].message = VAR_28;
     }

     if (VAR_17 && !VAR_16 && !(VAR_14%VAR_24) )
     {
  if (VAR_14 > VAR_0
      && VAR_8[VAR_25][VAR_26] != VAR_27->consistancy)
  {
      FUNC_15 ("consistency failure (%i should be %i)",
        VAR_27->consistancy, VAR_8[VAR_25][VAR_26]);
  }
  if (VAR_20[VAR_25].mo)
      VAR_8[VAR_25][VAR_26] = VAR_20[VAR_25].mo->x;
  else
      VAR_8[VAR_25][VAR_26] = VAR_21;
     }
 }
    }


    for (VAR_25=0 ; VAR_25<VAR_5 ; VAR_25++)
    {
 if (VAR_19[VAR_25])
 {
     if (VAR_20[VAR_25].cmd.buttons & VAR_3)
     {
  switch (VAR_20[VAR_25].cmd.buttons & VAR_4)
  {
    case 143:
      VAR_18 ^= 1;
      if (VAR_18)
   FUNC_19 ();
      else
   FUNC_20 ();
      break;

    case 142:
      if (!VAR_22[0])
   FUNC_24 (VAR_22, "NET GAME");
      VAR_23 =
   (VAR_20[VAR_25].cmd.buttons & VAR_1)>>VAR_2;
      VAR_12 = 131;
      break;
  }
     }
 }
    }


    switch (VAR_13)
    {
      case 138:
 FUNC_17 ();
 FUNC_18 ();
 FUNC_0 ();
 FUNC_14 ();
 break;

      case 139:
 FUNC_21 ();
 break;

      case 140:
 FUNC_3 ();
 break;

      case 141:
 FUNC_1 ();
 break;
    }
}
