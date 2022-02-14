
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hostent {scalar_t__* h_addr_list; } ;
typedef int boolean ;
struct TYPE_8__ {char ticdup; int extratics; int numplayers; int numnodes; int deathmatch; char consoleplayer; void* id; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_3__* VAR_6 ;
 struct hostent* FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 void* VAR_7 ;
 int FUNC_8 (void*,int ,int*) ;
 TYPE_3__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int VAR_8 ;
 char** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (char*,int) ;
 TYPE_2__* VAR_13 ;
 void* VAR_14 ;

void FUNC_12 (void)
{
    boolean VAR_15 = 1;
    int VAR_16;
    int VAR_17;
    struct hostent* VAR_18;

    VAR_6 = FUNC_9 (sizeof (*VAR_6) );
    FUNC_10 (VAR_6, 0, sizeof(*VAR_6) );


    VAR_16 = FUNC_2 ("-dup");
    if (VAR_16 && VAR_16< VAR_8-1)
    {
 VAR_6->ticdup = VAR_9[VAR_16+1][0]-'0';
 if (VAR_6->ticdup < 1)
     VAR_6->ticdup = 1;
 if (VAR_6->ticdup > 9)
     VAR_6->ticdup = 9;
    }
    else
 VAR_6-> ticdup = 1;

    if (FUNC_2 ("-extratic"))
 VAR_6-> extratics = 1;
    else
 VAR_6-> extratics = 0;

    VAR_17 = FUNC_2 ("-port");
    if (VAR_17 && VAR_17<VAR_8-1)
    {
 VAR_2 = FUNC_4 (VAR_9[VAR_17+1]);
 FUNC_11 ("using alternate port %i\n",VAR_2);
    }



    VAR_16 = FUNC_2 ("-net");
    if (!VAR_16)
    {

 VAR_10 = 0;
 VAR_6->id = VAR_1;
 VAR_6->numplayers = VAR_6->numnodes = 1;
 VAR_6->deathmatch = 0;
 VAR_6->consoleplayer = 0;
 return;
    }

    VAR_12 = VAR_5;
    VAR_11 = VAR_4;
    VAR_10 = 1;


    VAR_6->consoleplayer = VAR_9[VAR_16+1][0]-'1';

    VAR_6->numnodes = 1;

    VAR_16++;
    while (++VAR_16 < VAR_8 && VAR_9[VAR_16][0] != '-')
    {
 VAR_13[VAR_6->numnodes].sin_family = VAR_0;
 VAR_13[VAR_6->numnodes].sin_port = FUNC_6(VAR_2);
 if (VAR_9[VAR_16][0] == '.')
 {
     VAR_13[VAR_6->numnodes].sin_addr.s_addr
  = FUNC_7 (VAR_9[VAR_16]+1);
 }
 else
 {
     VAR_18 = FUNC_5 (VAR_9[VAR_16]);
     if (!VAR_18)
  FUNC_1 ("gethostbyname: couldn't find %s", VAR_9[VAR_16]);
     VAR_13[VAR_6->numnodes].sin_addr.s_addr
  = *(int *)VAR_18->h_addr_list[0];
 }
 VAR_6->numnodes++;
    }

    VAR_6->id = VAR_1;
    VAR_6->numplayers = VAR_6->numnodes;


    VAR_7 = FUNC_3 ();
    FUNC_0 (VAR_7,FUNC_6(VAR_2));
    FUNC_8 (VAR_7, VAR_3, &VAR_15);

    VAR_14 = FUNC_3 ();
}
