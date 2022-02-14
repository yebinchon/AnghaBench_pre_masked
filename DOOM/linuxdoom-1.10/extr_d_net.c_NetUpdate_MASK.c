
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numnodes; int extratics; } ;
struct TYPE_3__ {int starttic; int numtics; scalar_t__ retransmitfrom; int * cmds; int player; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__* VAR_11 ;
 int* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_7 (void)
{
    int VAR_16;
    int VAR_17;
    int VAR_18,VAR_19;
    int VAR_20;
    int VAR_21;


    VAR_16 = FUNC_5 ()/VAR_15;
    VAR_17 = VAR_16 - VAR_5;
    VAR_5 = VAR_16;

    if (VAR_17 <= 0)
 goto listen;

    if (VAR_14 <= VAR_17)
    {
 VAR_17 -= VAR_14;
 VAR_14 = 0;
    }
    else
    {
 VAR_14 -= VAR_17;
 VAR_17 = 0;
    }


    VAR_8->player = VAR_2;


    VAR_21 = VAR_4/VAR_15;
    for (VAR_18=0 ; VAR_18<VAR_17 ; VAR_18++)
    {
 FUNC_6 ();
 FUNC_0 ();
 if (VAR_7 - VAR_21 >= VAR_0/2-1)
     break;


 FUNC_1 (&VAR_6[VAR_7%VAR_0]);
 VAR_7++;
    }


    if (VAR_13)
 return;


    for (VAR_18=0 ; VAR_18<VAR_3->numnodes ; VAR_18++)
 if (VAR_10[VAR_18])
 {
     VAR_8->starttic = VAR_20 = VAR_12[VAR_18];
     VAR_8->numtics = VAR_7 - VAR_20;
     if (VAR_8->numtics > VAR_0)
  FUNC_4 ("NetUpdate: netbuffer->numtics > BACKUPTICS");

     VAR_12[VAR_18] = VAR_7 - VAR_3->extratics;

     for (VAR_19=0 ; VAR_19< VAR_8->numtics ; VAR_19++)
  VAR_8->cmds[VAR_19] =
      VAR_6[(VAR_20+VAR_19)%VAR_0];

     if (VAR_11[VAR_18])
     {
  VAR_8->retransmitfrom = VAR_9[VAR_18];
  FUNC_3 (VAR_18, VAR_1);
     }
     else
     {
  VAR_8->retransmitfrom = 0;
  FUNC_3 (VAR_18, 0);
     }
 }


  listen:
    FUNC_2 ();
}
