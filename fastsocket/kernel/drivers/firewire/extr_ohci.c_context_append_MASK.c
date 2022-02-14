
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct descriptor_buffer {int buffer_bus; int used; struct descriptor* buffer; } ;
struct descriptor {int dummy; } ;
struct context {int ohci; int regs; TYPE_1__* prev; struct descriptor_buffer* buffer_tail; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int branch_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct descriptor*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct context *VAR_1,
      struct descriptor *VAR_2, int VAR_3, int VAR_4)
{
 dma_addr_t VAR_5;
 struct descriptor_buffer *VAR_6 = VAR_1->buffer_tail;

 VAR_5 = VAR_6->buffer_bus + (VAR_2 - VAR_6->buffer) * sizeof(*VAR_2);

 VAR_6->used += (VAR_3 + VAR_4) * sizeof(*VAR_2);
 VAR_1->prev->branch_address = FUNC_1(VAR_5 | VAR_3);
 VAR_1->prev = FUNC_2(VAR_2, VAR_3);

 FUNC_4(VAR_1->ohci, FUNC_0(VAR_1->regs), VAR_0);
 FUNC_3(VAR_1->ohci);
}
