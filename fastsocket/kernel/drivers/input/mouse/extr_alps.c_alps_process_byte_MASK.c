
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int* packet; int pktcnt; int pktsize; struct alps_data* private; } ;
struct alps_data {int flags; scalar_t__ proto_version; int (* process_packet ) (struct psmouse*) ;int byte0; int mask0; } ;
typedef int psmouse_ret_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct alps_data*,int) ;
 int FUNC_2 (struct psmouse*,int*,int) ;
 int FUNC_3 (char*,int,int,...) ;
 int FUNC_4 (struct psmouse*) ;

__attribute__((used)) static psmouse_ret_t FUNC_5(struct psmouse *VAR_5)
{
 struct alps_data *VAR_6 = VAR_5->private;

 if ((VAR_5->packet[0] & 0xc8) == 0x08) {
  if (VAR_5->pktcnt == 3) {
   FUNC_2(VAR_5, VAR_5->packet,
          1);
   return VAR_3;
  }
  return VAR_4;
 }



 if ((VAR_6->flags & VAR_1) &&
     VAR_5->pktcnt >= 4 && (VAR_5->packet[3] & 0x0f) == 0x0f) {
  return FUNC_0(VAR_5);
 }

 if (!FUNC_1(VAR_6, VAR_5->packet[0])) {
  FUNC_3("refusing packet[0] = %x (mask0 = %x, byte0 = %x)\n",
      VAR_5->packet[0], VAR_6->mask0, VAR_6->byte0);
  return VAR_2;
 }


 if (VAR_6->proto_version != VAR_0 &&
     VAR_5->pktcnt >= 2 && VAR_5->pktcnt <= VAR_5->pktsize &&
     (VAR_5->packet[VAR_5->pktcnt - 1] & 0x80)) {
  FUNC_3("refusing packet[%i] = %x\n",
      VAR_5->pktcnt - 1, VAR_5->packet[VAR_5->pktcnt - 1]);
  return VAR_2;
 }

 if (VAR_5->pktcnt == VAR_5->pktsize) {
  VAR_6->process_packet(VAR_5);
  return VAR_3;
 }

 return VAR_4;
}
