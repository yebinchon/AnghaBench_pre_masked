
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_ended; } ;
struct pktcdvd_device {int wqueue; TYPE_1__ stats; } ;
struct packet_data {int run_sm; int io_wait; int id; struct pktcdvd_device* pd; } ;
struct bio {struct packet_data* bi_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pktcdvd_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_0, int VAR_1)
{
 struct packet_data *VAR_2 = VAR_0->bi_private;
 struct pktcdvd_device *VAR_3 = VAR_2->pd;
 FUNC_0(!VAR_3);

 FUNC_1("pkt_end_io_packet_write: id=%d, err=%d\n", VAR_2->id, VAR_1);

 VAR_3->stats.pkt_ended++;

 FUNC_4(VAR_3);
 FUNC_2(&VAR_2->io_wait);
 FUNC_3(&VAR_2->run_sm);
 FUNC_5(&VAR_3->wqueue);
}
