
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_qdio_out_q {int next_buf_to_fill; int do_pack; int state; TYPE_3__* card; int set_pci_flags_count; int used_buffers; } ;
struct TYPE_5__ {int bufs_sent_pack; } ;
struct TYPE_4__ {scalar_t__ performance_stats; } ;
struct TYPE_6__ {TYPE_2__ perf_stats; TYPE_1__ options; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qeth_qdio_out_q*,int,int) ;
 scalar_t__ FUNC_6 (struct qeth_qdio_out_q*) ;
 scalar_t__ FUNC_7 (struct qeth_qdio_out_q*) ;

__attribute__((used)) static void FUNC_8(struct qeth_qdio_out_q *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;





 if ((FUNC_0(&VAR_3->used_buffers) <= VAR_0) ||
     !FUNC_0(&VAR_3->set_pci_flags_count)) {
  if (FUNC_2(&VAR_3->state, VAR_1) ==
    VAR_2) {





   FUNC_4(VAR_3->card->dev);
   VAR_4 = VAR_3->next_buf_to_fill;
   VAR_6 = VAR_3->do_pack;

   FUNC_3();
   VAR_5 += FUNC_7(VAR_3);
   if (!VAR_5 &&
       !FUNC_0(&VAR_3->set_pci_flags_count))
    VAR_5 +=
     FUNC_6(VAR_3);
   if (VAR_3->card->options.performance_stats &&
       VAR_6)
    VAR_3->card->perf_stats.bufs_sent_pack +=
     VAR_5;
   if (VAR_5)
    FUNC_5(VAR_3, VAR_4, VAR_5);
   FUNC_1(&VAR_3->state, VAR_2);
  }
 }
}
