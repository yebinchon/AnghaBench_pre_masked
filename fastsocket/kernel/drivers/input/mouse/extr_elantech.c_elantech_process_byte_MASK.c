
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {scalar_t__ pktcnt; scalar_t__ pktsize; int packet; struct elantech_data* private; } ;
struct elantech_data {int debug; int hw_version; int paritycheck; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*) ;

__attribute__((used)) static psmouse_ret_t FUNC_4(struct psmouse *VAR_3)
{
 struct elantech_data *VAR_4 = VAR_3->private;

 if (VAR_3->pktcnt < VAR_3->pktsize)
  return VAR_2;

 if (VAR_4->debug > 1)
  FUNC_1(VAR_3->packet, VAR_3->pktsize);

 switch (VAR_4->hw_version) {
 case 1:
  if (VAR_4->paritycheck && !FUNC_0(VAR_3))
   return VAR_0;

  FUNC_2(VAR_3);
  break;

 case 2:

  FUNC_3(VAR_3);
  break;
 }

 return VAR_1;
}
