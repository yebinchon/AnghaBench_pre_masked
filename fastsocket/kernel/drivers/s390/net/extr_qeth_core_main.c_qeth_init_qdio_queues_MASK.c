
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buf_count; } ;
struct TYPE_7__ {int no_out_queues; TYPE_4__** out_qs; TYPE_2__ in_buf_pool; TYPE_1__* in_q; } ;
struct qeth_card {TYPE_3__ qdio; } ;
struct qdio_buffer {int dummy; } ;
struct TYPE_8__ {int state; int set_pci_flags_count; int used_buffers; scalar_t__ do_pack; scalar_t__ next_buf_to_fill; struct qeth_card* card; int * bufs; int qdio_bufs; } ;
struct TYPE_5__ {int next_buf_to_init; int * bufs; int qdio_bufs; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*,int *) ;
 int FUNC_9 (struct qeth_card*) ;

int FUNC_10(struct qeth_card *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;

 FUNC_1(VAR_4, 2, "initqdqs");


 FUNC_5(VAR_5->qdio.in_q->qdio_bufs, 0,
        VAR_1 * sizeof(struct qdio_buffer));
 FUNC_9(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_5->qdio.in_buf_pool.buf_count - 1; ++VAR_6)
  FUNC_8(VAR_5, &VAR_5->qdio.in_q->bufs[VAR_6]);
 VAR_5->qdio.in_q->next_buf_to_init =
  VAR_5->qdio.in_buf_pool.buf_count - 1;
 VAR_8 = FUNC_4(FUNC_0(VAR_5), VAR_0, 0, 0,
       VAR_5->qdio.in_buf_pool.buf_count - 1);
 if (VAR_8) {
  FUNC_2(VAR_4, 2, "1err%d", VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_7(VAR_5);
 if (VAR_8) {
  return VAR_8;
 }


 for (VAR_6 = 0; VAR_6 < VAR_5->qdio.no_out_queues; ++VAR_6) {
  FUNC_5(VAR_5->qdio.out_qs[VAR_6]->qdio_bufs, 0,
         VAR_1 * sizeof(struct qdio_buffer));
  for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
   FUNC_6(VAR_5->qdio.out_qs[VAR_6],
     VAR_5->qdio.out_qs[VAR_6]->bufs[VAR_7],
     VAR_3);
  }
  VAR_5->qdio.out_qs[VAR_6]->card = VAR_5;
  VAR_5->qdio.out_qs[VAR_6]->next_buf_to_fill = 0;
  VAR_5->qdio.out_qs[VAR_6]->do_pack = 0;
  FUNC_3(&VAR_5->qdio.out_qs[VAR_6]->used_buffers, 0);
  FUNC_3(&VAR_5->qdio.out_qs[VAR_6]->set_pci_flags_count, 0);
  FUNC_3(&VAR_5->qdio.out_qs[VAR_6]->state,
      VAR_2);
 }
 return 0;
}
