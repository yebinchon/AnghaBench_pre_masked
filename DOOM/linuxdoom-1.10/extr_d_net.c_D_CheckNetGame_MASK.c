
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; int consoleplayer; int ticdup; int numplayers; int numnodes; int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int FUNC_3 (char*,int,int,int,...) ;
 int* VAR_13 ;
 scalar_t__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_4 (void)
{
    int VAR_19;

    for (VAR_19=0 ; VAR_19<VAR_2 ; VAR_19++)
    {
 VAR_11[VAR_19] = 0;
        VAR_10[VAR_19] = 0;
 VAR_13[VAR_19] = 0;
 VAR_14[VAR_19] = 0;
    }


    FUNC_2 ();
    if (VAR_6->id != VAR_1)
 FUNC_1 ("Doomcom buffer invalid!");

    VAR_8 = &VAR_6->data;
    VAR_3 = VAR_5 = VAR_6->consoleplayer;
    if (VAR_9)
 FUNC_0 ();

    FUNC_3 ("startskill %i  deathmatch: %i  startmap: %i  startepisode: %i\n",
     VAR_17, VAR_4, VAR_16, VAR_15);


    VAR_18 = VAR_6->ticdup;
    VAR_7 = VAR_0/(2*VAR_18)-1;
    if (VAR_7<1)
 VAR_7 = 1;

    for (VAR_19=0 ; VAR_19<VAR_6->numplayers ; VAR_19++)
 VAR_12[VAR_19] = 1;
    for (VAR_19=0 ; VAR_19<VAR_6->numnodes ; VAR_19++)
 VAR_11[VAR_19] = 1;

    FUNC_3 ("player %i of %i (%i nodes)\n",
     VAR_3+1, VAR_6->numplayers, VAR_6->numnodes);

}
