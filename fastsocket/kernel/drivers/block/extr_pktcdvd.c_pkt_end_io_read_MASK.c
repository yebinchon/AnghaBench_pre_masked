
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int wqueue; } ;
struct packet_data {int run_sm; int io_wait; int io_errors; scalar_t__ sector; struct pktcdvd_device* pd; } ;
struct bio {scalar_t__ bi_sector; struct packet_data* bi_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct bio*,unsigned long long,unsigned long long,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pktcdvd_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_0, int VAR_1)
{
 struct packet_data *VAR_2 = VAR_0->bi_private;
 struct pktcdvd_device *VAR_3 = VAR_2->pd;
 FUNC_0(!VAR_3);

 FUNC_1("pkt_end_io_read: bio=%p sec0=%llx sec=%llx err=%d\n", VAR_0,
  (unsigned long long)VAR_2->sector, (unsigned long long)VAR_0->bi_sector, VAR_1);

 if (VAR_1)
  FUNC_3(&VAR_2->io_errors);
 if (FUNC_2(&VAR_2->io_wait)) {
  FUNC_3(&VAR_2->run_sm);
  FUNC_5(&VAR_3->wqueue);
 }
 FUNC_4(VAR_3);
}
