
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ticcmd_t ;
struct TYPE_6__ {int remotenode; } ;
struct TYPE_5__ {int checksum; int player; int numtics; int * cmds; int retransmitfrom; int starttic; } ;
struct TYPE_4__ {int* message; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* VAR_10 ;
 int* VAR_11 ;
 int FUNC_4 (scalar_t__,char*,int,...) ;
 TYPE_2__* VAR_12 ;
 int ** VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 TYPE_1__* VAR_18 ;
 int* VAR_19 ;
 scalar_t__* VAR_20 ;
 int* VAR_21 ;
 int FUNC_5 (int*,char*) ;

void FUNC_6 (void)
{
    int VAR_22;
    int VAR_23;
    ticcmd_t *VAR_24, *VAR_25;
    int VAR_26;
    int VAR_27;

    while ( FUNC_2() )
    {
 if (VAR_12->checksum & VAR_4)
     continue;

 VAR_22 = VAR_12->player & ~VAR_5;
 VAR_23 = VAR_10->remotenode;



 VAR_27 = FUNC_0 (VAR_12->starttic);
 VAR_26 = (VAR_27+VAR_12->numtics);


 if (VAR_12->checksum & VAR_1)
 {
     if (!VAR_16[VAR_23])
  continue;
     VAR_16[VAR_23] = 0;
     VAR_17[VAR_22] = 0;
     FUNC_5 (VAR_11, "Player 1 left the game");
     VAR_11[7] += VAR_22;
     VAR_18[VAR_7].message = VAR_11;
     if (VAR_9)
  FUNC_1 ();
     continue;
 }


 if (VAR_12->checksum & VAR_2)
     FUNC_3 ("Killed by network driver");

 VAR_15[VAR_22] = VAR_23;


 if ( VAR_20[VAR_23] <= 0
      && (VAR_12->checksum & VAR_3) )
 {
     VAR_21[VAR_23] = FUNC_0(VAR_12->retransmitfrom);
     if (VAR_8)
  FUNC_4 (VAR_8,"retransmit from %i\n", VAR_21[VAR_23]);
     VAR_20[VAR_23] = VAR_6;
 }
 else
     VAR_20[VAR_23]--;


 if (VAR_26 == VAR_14[VAR_23])
     continue;

 if (VAR_26 < VAR_14[VAR_23])
 {
     if (VAR_8)
  FUNC_4 (VAR_8,
    "out of order packet (%i + %i)\n" ,
    VAR_27,VAR_12->numtics);
     continue;
 }


 if (VAR_27 > VAR_14[VAR_23])
 {

     if (VAR_8)
  FUNC_4 (VAR_8,
    "missed tics from %i (%i - %i)\n",
    VAR_23, VAR_27, VAR_14[VAR_23]);
     VAR_19[VAR_23] = 1;
     continue;
 }


        {
     int VAR_28;

     VAR_19[VAR_23] = 0;

     VAR_28 = VAR_14[VAR_23] - VAR_27;
     VAR_24 = &VAR_12->cmds[VAR_28];

     while (VAR_14[VAR_23] < VAR_26)
     {
  VAR_25 = &VAR_13[VAR_22][VAR_14[VAR_23]%VAR_0];
  VAR_14[VAR_23]++;
  *VAR_25 = *VAR_24;
  VAR_24++;
     }
 }
    }
}
