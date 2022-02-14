
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {int * tx_last; struct r3964_block_header* tx_first; int lock; int read_wait; } ;
struct r3964_block_header {struct r3964_block_header* next; int length; scalar_t__ owner; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct r3964_block_header*) ;
 int FUNC_1 (char*,struct r3964_block_header*,int *) ;
 int FUNC_2 (scalar_t__,int ,int ,int,int *) ;
 int FUNC_3 (struct r3964_block_header*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct r3964_info *VAR_1, int VAR_2)
{
 struct r3964_block_header *VAR_3;
 unsigned long VAR_4;




 VAR_3 = VAR_1->tx_first;

 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3->owner) {
  if (VAR_2) {
   FUNC_2(VAR_3->owner, VAR_0, 0,
    VAR_2, ((void*)0));
  } else {
   FUNC_2(VAR_3->owner, VAR_0, VAR_3->length,
    VAR_2, ((void*)0));
  }
  FUNC_7(&VAR_1->read_wait);
 }

 FUNC_5(&VAR_1->lock, VAR_4);

 VAR_1->tx_first = VAR_3->next;
 if (VAR_1->tx_first == ((void*)0)) {
  VAR_1->tx_last = ((void*)0);
 }

 FUNC_6(&VAR_1->lock, VAR_4);

 FUNC_3(VAR_3);
 FUNC_0("remove_from_tx_queue - kfree %p", VAR_3);

 FUNC_1("remove_from_tx_queue: tx_first = %p, tx_last = %p",
  VAR_1->tx_first, VAR_1->tx_last);
}
