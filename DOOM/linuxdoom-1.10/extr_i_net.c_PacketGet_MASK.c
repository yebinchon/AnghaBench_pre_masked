
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sw ;
struct TYPE_10__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int fromaddress ;
struct TYPE_14__ {int numtics; TYPE_4__* cmds; int starttic; int retransmitfrom; int player; int checksum; } ;
typedef TYPE_5__ doomdata_t ;
struct TYPE_17__ {int remotenode; int numnodes; int datalength; } ;
struct TYPE_16__ {int numtics; TYPE_3__* cmds; int starttic; int retransmitfrom; int player; int checksum; } ;
struct TYPE_11__ {scalar_t__ s_addr; } ;
struct TYPE_15__ {TYPE_2__ sin_addr; } ;
struct TYPE_13__ {int buttons; int chatchar; int consistancy; int angleturn; int sidemove; int forwardmove; } ;
struct TYPE_12__ {int buttons; int chatchar; void* consistancy; void* angleturn; int sidemove; int forwardmove; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 TYPE_9__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (int ,TYPE_5__*,int,int ,struct sockaddr*,int*) ;
 TYPE_6__* VAR_5 ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6 (void)
{
    int VAR_6;
    int VAR_7;
    struct sockaddr_in VAR_8;
    int VAR_9;
    doomdata_t VAR_10;

    VAR_9 = sizeof(VAR_8);
    VAR_7 = FUNC_4 (VAR_3, &VAR_10, sizeof(VAR_10), 0
    , (struct sockaddr *)&VAR_8, &VAR_9 );
    if (VAR_7 == -1 )
    {
 if (VAR_2 != VAR_0)
     FUNC_0 ("GetPacket: %s",FUNC_5(VAR_2));
 VAR_1->remotenode = -1;
 return;
    }

    {
 static int VAR_11=1;
 if (VAR_11)
     FUNC_3("len=%d:p=[0x%x 0x%x] \n", VAR_7, *(int*)&VAR_10, *((int*)&VAR_10+1));
 VAR_11 = 0;
    }


    for (VAR_6=0 ; VAR_6<VAR_1->numnodes ; VAR_6++)
 if ( VAR_8.sin_addr.s_addr == VAR_5[VAR_6].sin_addr.s_addr )
     break;

    if (VAR_6 == VAR_1->numnodes)
    {

 VAR_1->remotenode = -1;
 return;
    }

    VAR_1->remotenode = VAR_6;
    VAR_1->datalength = VAR_7;


    VAR_4->checksum = FUNC_1(VAR_10.checksum);
    VAR_4->player = VAR_10.player;
    VAR_4->retransmitfrom = VAR_10.retransmitfrom;
    VAR_4->starttic = VAR_10.starttic;
    VAR_4->numtics = VAR_10.numtics;

    for (VAR_7=0 ; VAR_7< VAR_4->numtics ; VAR_7++)
    {
 VAR_4->cmds[VAR_7].forwardmove = VAR_10.cmds[VAR_7].forwardmove;
 VAR_4->cmds[VAR_7].sidemove = VAR_10.cmds[VAR_7].sidemove;
 VAR_4->cmds[VAR_7].angleturn = FUNC_2(VAR_10.cmds[VAR_7].angleturn);
 VAR_4->cmds[VAR_7].consistancy = FUNC_2(VAR_10.cmds[VAR_7].consistancy);
 VAR_4->cmds[VAR_7].chatchar = VAR_10.cmds[VAR_7].chatchar;
 VAR_4->cmds[VAR_7].buttons = VAR_10.cmds[VAR_7].buttons;
    }
}
