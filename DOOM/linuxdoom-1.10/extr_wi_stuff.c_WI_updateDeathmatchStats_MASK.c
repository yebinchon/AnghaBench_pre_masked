
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boolean ;
struct TYPE_2__ {int* frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int** VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_5(void)
{

    int VAR_15;
    int VAR_16;

    boolean VAR_17;

    FUNC_4();

    if (VAR_2 && VAR_7 != 4)
    {
 VAR_2 = 0;

 for (VAR_15=0 ; VAR_15<VAR_0 ; VAR_15++)
 {
     if (VAR_10[VAR_15])
     {
  for (VAR_16=0 ; VAR_16<VAR_0 ; VAR_16++)
      if (VAR_10[VAR_16])
   VAR_6[VAR_15][VAR_16] = VAR_11[VAR_15].frags[VAR_16];

  VAR_8[VAR_15] = FUNC_1(VAR_15);
     }
 }


 FUNC_0(0, VAR_12);
 VAR_7 = 4;
    }


    if (VAR_7 == 2)
    {
 if (!(VAR_3&3))
     FUNC_0(0, VAR_13);

 VAR_17 = 0;

 for (VAR_15=0 ; VAR_15<VAR_0 ; VAR_15++)
 {
     if (VAR_10[VAR_15])
     {
  for (VAR_16=0 ; VAR_16<VAR_0 ; VAR_16++)
  {
      if (VAR_10[VAR_16]
   && VAR_6[VAR_15][VAR_16] != VAR_11[VAR_15].frags[VAR_16])
      {
   if (VAR_11[VAR_15].frags[VAR_16] < 0)
       VAR_6[VAR_15][VAR_16]--;
   else
       VAR_6[VAR_15][VAR_16]++;

   if (VAR_6[VAR_15][VAR_16] > 99)
       VAR_6[VAR_15][VAR_16] = 99;

   if (VAR_6[VAR_15][VAR_16] < -99)
       VAR_6[VAR_15][VAR_16] = -99;

   VAR_17 = 1;
      }
  }
  VAR_8[VAR_15] = FUNC_1(VAR_15);

  if (VAR_8[VAR_15] > 99)
      VAR_8[VAR_15] = 99;

  if (VAR_8[VAR_15] < -99)
      VAR_8[VAR_15] = -99;
     }

 }
 if (!VAR_17)
 {
     FUNC_0(0, VAR_12);
     VAR_7++;
 }

    }
    else if (VAR_7 == 4)
    {
 if (VAR_2)
 {
     FUNC_0(0, VAR_14);

     if ( VAR_9 == VAR_5)
  FUNC_2();
     else
  FUNC_3();
 }
    }
    else if (VAR_7 & 1)
    {
 if (!--VAR_4)
 {
     VAR_7++;
     VAR_4 = VAR_1;
 }
    }
}
