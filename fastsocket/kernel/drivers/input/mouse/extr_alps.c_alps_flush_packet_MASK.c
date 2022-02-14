
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serio; } ;
struct psmouse {scalar_t__ pktcnt; scalar_t__ pktsize; int* packet; TYPE_1__ ps2dev; struct alps_data* private; } ;
struct alps_data {int (* process_packet ) (struct psmouse*) ;} ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct psmouse*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct psmouse *VAR_1 = (struct psmouse *)VAR_0;
 struct alps_data *VAR_2 = VAR_1->private;

 FUNC_2(VAR_1->ps2dev.serio);

 if (VAR_1->pktcnt == VAR_1->pktsize) {






  if ((VAR_1->packet[3] |
       VAR_1->packet[4] |
       VAR_1->packet[5]) & 0x80) {
   FUNC_0("refusing packet %x %x %x "
       "(suspected interleaved ps/2)\n",
       VAR_1->packet[3], VAR_1->packet[4],
       VAR_1->packet[5]);
  } else {
   VAR_2->process_packet(VAR_1);
  }
  VAR_1->pktcnt = 0;
 }

 FUNC_1(VAR_1->ps2dev.serio);
}
