
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gotinfo ;
typedef int boolean ;
struct TYPE_4__ {int numnodes; scalar_t__ consoleplayer; } ;
struct TYPE_3__ {int checksum; int player; int retransmitfrom; int starttic; scalar_t__ numtics; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (int*,int ,int) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_6 (void)
{
    int VAR_12;
    boolean VAR_13[VAR_0];

    VAR_3 = 1;
    FUNC_4 (VAR_13,0,sizeof(VAR_13));

    if (VAR_5->consoleplayer)
    {

 FUNC_5 ("listening for network start info...\n");
 while (1)
 {
     FUNC_0 ();
     if (!FUNC_1 ())
  continue;
     if (VAR_6->checksum & VAR_1)
     {
  if (VAR_6->player != VAR_2)
      FUNC_3 ("Different DOOM versions cannot play a net game!");
  VAR_11 = VAR_6->retransmitfrom & 15;
  VAR_4 = (VAR_6->retransmitfrom & 0xc0) >> 6;
  VAR_7 = (VAR_6->retransmitfrom & 0x20) > 0;
  VAR_8 = (VAR_6->retransmitfrom & 0x10) > 0;
  VAR_10 = VAR_6->starttic & 0x3f;
  VAR_9 = VAR_6->starttic >> 6;
  return;
     }
 }
    }
    else
    {

 FUNC_5 ("sending network start info...\n");
 do
 {
     FUNC_0 ();
     for (VAR_12=0 ; VAR_12<VAR_5->numnodes ; VAR_12++)
     {
  VAR_6->retransmitfrom = VAR_11;
  if (VAR_4)
      VAR_6->retransmitfrom |= (VAR_4<<6);
  if (VAR_7)
      VAR_6->retransmitfrom |= 0x20;
  if (VAR_8)
      VAR_6->retransmitfrom |= 0x10;
  VAR_6->starttic = VAR_9 * 64 + VAR_10;
  VAR_6->player = VAR_2;
  VAR_6->numtics = 0;
  FUNC_2 (VAR_12, VAR_1);
     }


     for(VAR_12 = 10 ; VAR_12 && FUNC_1(); --VAR_12)
     {
  if((VAR_6->player&0x7f) < VAR_0)
      VAR_13[VAR_6->player&0x7f] = 1;
     }







     for (VAR_12=1 ; VAR_12<VAR_5->numnodes ; VAR_12++)
  if (!VAR_13[VAR_12])
      break;
 } while (VAR_12 < VAR_5->numnodes);
    }
}
