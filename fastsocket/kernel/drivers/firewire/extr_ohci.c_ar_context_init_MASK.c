
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fw_ohci {int dummy; } ;
struct ar_context {TYPE_1__* current_buffer; int pointer; int tasklet; struct ar_buffer* last_buffer; struct fw_ohci* ohci; int regs; } ;
struct ar_buffer {TYPE_1__* next; } ;
struct TYPE_2__ {int data; } ;


 int FUNC_0 (struct ar_context*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ar_context *VAR_1,
      struct fw_ohci *VAR_2, u32 VAR_3)
{
 struct ar_buffer VAR_4;

 VAR_1->regs = VAR_3;
 VAR_1->ohci = VAR_2;
 VAR_1->last_buffer = &VAR_4;
 FUNC_1(&VAR_1->tasklet, VAR_0, (unsigned long)VAR_1);

 FUNC_0(VAR_1);
 FUNC_0(VAR_1);
 VAR_1->current_buffer = VAR_4.next;
 VAR_1->pointer = VAR_1->current_buffer->data;

 return 0;
}
