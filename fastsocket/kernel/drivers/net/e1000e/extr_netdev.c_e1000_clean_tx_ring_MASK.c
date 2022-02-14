
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_ring {unsigned int count; unsigned long size; int tail; TYPE_1__* adapter; int head; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct e1000_buffer* desc; struct e1000_buffer* buffer_info; } ;
struct e1000_buffer {int dummy; } ;
struct TYPE_2__ {int flags2; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_ring*,struct e1000_buffer*) ;
 int FUNC_1 (struct e1000_ring*,int ) ;
 int FUNC_2 (struct e1000_buffer*,int ,unsigned long) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_ring *VAR_1)
{
 struct e1000_buffer *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++) {
  VAR_2 = &VAR_1->buffer_info[VAR_4];
  FUNC_0(VAR_1, VAR_2);
 }

 VAR_3 = sizeof(struct e1000_buffer) * VAR_1->count;
 FUNC_2(VAR_1->buffer_info, 0, VAR_3);

 FUNC_2(VAR_1->desc, 0, VAR_1->size);

 VAR_1->next_to_use = 0;
 VAR_1->next_to_clean = 0;

 FUNC_3(0, VAR_1->head);
 if (VAR_1->adapter->flags2 & VAR_0)
  FUNC_1(VAR_1, 0);
 else
  FUNC_3(0, VAR_1->tail);
}
