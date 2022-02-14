
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_qdio_out_q {int card; int set_pci_flags_count; } ;
struct qeth_qdio_out_buffer {int state; scalar_t__ next_element_to_fill; TYPE_2__* buffer; scalar_t__* is_header; } ;
typedef enum qeth_qdio_buffer_states { ____Placeholder_qeth_qdio_buffer_states } qeth_qdio_buffer_states ;
struct TYPE_4__ {TYPE_1__* element; } ;
struct TYPE_3__ {int sflags; scalar_t__ eflags; int * addr; scalar_t__ length; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (struct qeth_qdio_out_buffer*) ;

__attribute__((used)) static void FUNC_5(struct qeth_qdio_out_q *VAR_3,
  struct qeth_qdio_out_buffer *VAR_4,
  enum qeth_qdio_buffer_states VAR_5)
{
 int VAR_6;


 if (VAR_4->buffer->element[0].sflags & VAR_1)
  FUNC_1(&VAR_3->set_pci_flags_count);

 if (VAR_5 == VAR_0) {
  FUNC_4(VAR_4);
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->card); ++VAR_6) {
  if (VAR_4->buffer->element[VAR_6].addr && VAR_4->is_header[VAR_6])
   FUNC_3(VAR_2,
    VAR_4->buffer->element[VAR_6].addr);
  VAR_4->is_header[VAR_6] = 0;
  VAR_4->buffer->element[VAR_6].length = 0;
  VAR_4->buffer->element[VAR_6].addr = ((void*)0);
  VAR_4->buffer->element[VAR_6].eflags = 0;
  VAR_4->buffer->element[VAR_6].sflags = 0;
 }
 VAR_4->buffer->element[15].eflags = 0;
 VAR_4->buffer->element[15].sflags = 0;
 VAR_4->next_element_to_fill = 0;
 FUNC_2(&VAR_4->state, VAR_5);
}
