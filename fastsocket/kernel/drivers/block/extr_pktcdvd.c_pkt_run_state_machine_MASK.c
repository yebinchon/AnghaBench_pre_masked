
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktcdvd_device {int dummy; } ;
struct packet_data {int state; TYPE_1__* w_bio; int io_wait; int io_errors; int sleep_time; int frames; int write_size; int id; } ;
struct TYPE_2__ {int bi_flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;





 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct packet_data*,int) ;
 int FUNC_4 (struct pktcdvd_device*,struct packet_data*) ;
 int FUNC_5 (struct packet_data*,int) ;
 int FUNC_6 (struct packet_data*) ;
 int FUNC_7 (struct pktcdvd_device*,struct packet_data*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct pktcdvd_device *VAR_1, struct packet_data *VAR_2)
{
 int VAR_3;

 FUNC_1("run_state_machine: pkt %d\n", VAR_2->id);

 for (;;) {
  switch (VAR_2->state) {
  case 129:
   if ((VAR_2->write_size < VAR_2->frames) && (VAR_2->sleep_time > 0))
    return;

   VAR_2->sleep_time = 0;
   FUNC_4(VAR_1, VAR_2);
   FUNC_5(VAR_2, 131);
   break;

  case 131:
   if (FUNC_2(&VAR_2->io_wait) > 0)
    return;

   if (FUNC_2(&VAR_2->io_errors) > 0) {
    FUNC_5(VAR_2, 130);
   } else {
    FUNC_7(VAR_1, VAR_2);
   }
   break;

  case 128:
   if (FUNC_2(&VAR_2->io_wait) > 0)
    return;

   if (FUNC_8(VAR_0, &VAR_2->w_bio->bi_flags)) {
    FUNC_5(VAR_2, 132);
   } else {
    FUNC_5(VAR_2, 130);
   }
   break;

  case 130:
   if (FUNC_6(VAR_2)) {
    FUNC_7(VAR_1, VAR_2);
   } else {
    FUNC_1("No recovery possible\n");
    FUNC_5(VAR_2, 132);
   }
   break;

  case 132:
   VAR_3 = FUNC_8(VAR_0, &VAR_2->w_bio->bi_flags);
   FUNC_3(VAR_2, VAR_3);
   return;

  default:
   FUNC_0();
   break;
  }
 }
}
