
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkt_free_list; } ;
struct TYPE_4__ {int size; } ;
struct pktcdvd_device {TYPE_1__ cdrw; TYPE_2__ settings; } ;
struct packet_data {int id; int list; struct pktcdvd_device* pd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 struct packet_data* FUNC_3 (int) ;
 int FUNC_4 (struct pktcdvd_device*) ;

__attribute__((used)) static int FUNC_5(struct pktcdvd_device *VAR_0, int VAR_1)
{
 struct packet_data *VAR_2;

 FUNC_0(!FUNC_2(&VAR_0->cdrw.pkt_free_list));

 while (VAR_1 > 0) {
  VAR_2 = FUNC_3(VAR_0->settings.size >> 2);
  if (!VAR_2) {
   FUNC_4(VAR_0);
   return 0;
  }
  VAR_2->id = VAR_1;
  VAR_2->pd = VAR_0;
  FUNC_1(&VAR_2->list, &VAR_0->cdrw.pkt_free_list);
  VAR_1--;
 }
 return 1;
}
