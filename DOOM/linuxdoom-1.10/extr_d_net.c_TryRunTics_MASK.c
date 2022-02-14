
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buttons; scalar_t__ chatchar; } ;
typedef TYPE_1__ ticcmd_t ;
struct TYPE_5__ {int numnodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_6 (scalar_t__,char*,int,int,int) ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__** VAR_13 ;
 int* VAR_14 ;
 size_t* VAR_15 ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;
 scalar_t__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_7 (void)
{
    int VAR_21;
    int VAR_22;
    int VAR_23;
    static int VAR_24;
    int VAR_25;
    int VAR_26;
    int VAR_27;
    int VAR_28;


    VAR_23 = FUNC_3 ()/VAR_20;
    VAR_25 = VAR_23 - VAR_24;
    VAR_24 = VAR_23;


    FUNC_5 ();

    VAR_22 = VAR_2;
    VAR_28 = 0;
    for (VAR_21=0 ; VAR_21<VAR_8->numnodes ; VAR_21++)
    {
 if (VAR_16[VAR_21])
 {
     VAR_28++;
     if (VAR_14[VAR_21] < VAR_22)
  VAR_22 = VAR_14[VAR_21];
 }
    }
    VAR_26 = VAR_22 - VAR_11/VAR_20;


    if (VAR_25 < VAR_26-1)
 VAR_27 = VAR_25+1;
    else if (VAR_25 < VAR_26)
 VAR_27 = VAR_25;
    else
 VAR_27 = VAR_26;

    if (VAR_27 < 1)
 VAR_27 = 1;

    VAR_9++;

    if (VAR_6)
 FUNC_6 (VAR_6,
   "=======real: %i  avail: %i  game: %i\n",
   VAR_25, VAR_26,VAR_27);

    if (!VAR_7)
    {


 for (VAR_21=0 ; VAR_21<VAR_3 ; VAR_21++)
     if (VAR_18[VAR_21])
  break;
 if (VAR_5 == VAR_21)
 {

 }
 else
 {
     if (VAR_14[0] <= VAR_14[VAR_15[VAR_21]])
     {
  VAR_12--;

     }
     VAR_10[VAR_9&3] = (VAR_17 > VAR_14[VAR_15[VAR_21]]);
     VAR_17 = VAR_14[0];
     if (VAR_10[0] && VAR_10[1] && VAR_10[2] && VAR_10[3])
     {
  VAR_19 = 1;

     }
 }
    }


    while (VAR_22 < VAR_11/VAR_20 + VAR_27)
    {
 FUNC_5 ();
 VAR_22 = VAR_2;

 for (VAR_21=0 ; VAR_21<VAR_8->numnodes ; VAR_21++)
     if (VAR_16[VAR_21] && VAR_14[VAR_21] < VAR_22)
  VAR_22 = VAR_14[VAR_21];

 if (VAR_22 < VAR_11/VAR_20)
     FUNC_2 ("TryRunTics: lowtic < gametic");


 if (FUNC_3 ()/VAR_20 - VAR_23 >= 20)
 {
     FUNC_4 ();
     return;
 }
    }


    while (VAR_27--)
    {
 for (VAR_21=0 ; VAR_21<VAR_20 ; VAR_21++)
 {
     if (VAR_11/VAR_20 > VAR_22)
  FUNC_2 ("gametic>lowtic");
     if (VAR_4)
  FUNC_0 ();
     FUNC_4 ();
     FUNC_1 ();
     VAR_11++;


     if (VAR_21 != VAR_20-1)
     {
  ticcmd_t *VAR_29;
  int VAR_30;
  int VAR_31;

  VAR_30 = (VAR_11/VAR_20)%VAR_0;
  for (VAR_31=0 ; VAR_31<VAR_3 ; VAR_31++)
  {
      VAR_29 = &VAR_13[VAR_31][VAR_30];
      VAR_29->chatchar = 0;
      if (VAR_29->buttons & VAR_1)
   VAR_29->buttons = 0;
  }
     }
 }
 FUNC_5 ();
    }
}
