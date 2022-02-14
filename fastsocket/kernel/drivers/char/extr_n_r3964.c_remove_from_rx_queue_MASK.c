
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {int blocks_in_rx_queue; struct r3964_block_header* rx_last; struct r3964_block_header* rx_first; int lock; } ;
struct r3964_block_header {struct r3964_block_header* next; int length; } ;


 int FUNC_0 (char*,struct r3964_block_header*) ;
 int FUNC_1 (char*,struct r3964_block_header*,struct r3964_block_header*,...) ;
 int FUNC_2 (struct r3964_block_header*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct r3964_info *VAR_0,
     struct r3964_block_header *VAR_1)
{
 unsigned long VAR_2;
 struct r3964_block_header *VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1("remove_from_rx_queue: rx_first = %p, rx_last = %p, count = %d",
  VAR_0->rx_first, VAR_0->rx_last, VAR_0->blocks_in_rx_queue);
 FUNC_1("remove_from_rx_queue: %p, length %u",
  VAR_1, VAR_1->length);

 FUNC_3(&VAR_0->lock, VAR_2);

 if (VAR_0->rx_first == VAR_1) {

  VAR_0->rx_first = VAR_1->next;

  if (VAR_0->rx_first == ((void*)0)) {
   VAR_0->rx_last = ((void*)0);
  }
  VAR_0->blocks_in_rx_queue--;
 } else {

  for (VAR_3 = VAR_0->rx_first; VAR_3; VAR_3 = VAR_3->next) {
   if (VAR_3->next == VAR_1) {

    VAR_3->next = VAR_1->next;
    VAR_0->blocks_in_rx_queue--;
    if (VAR_3->next == ((void*)0)) {

     VAR_0->rx_last = VAR_3;
    }
    break;
   }
  }
 }

 FUNC_4(&VAR_0->lock, VAR_2);

 FUNC_2(VAR_1);
 FUNC_0("remove_from_rx_queue - kfree %p", VAR_1);

 FUNC_1("remove_from_rx_queue: rx_first = %p, rx_last = %p, count = %d",
  VAR_0->rx_first, VAR_0->rx_last, VAR_0->blocks_in_rx_queue);
}
