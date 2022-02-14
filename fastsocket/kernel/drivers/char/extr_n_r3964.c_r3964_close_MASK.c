
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct r3964_message* disc_data; } ;
struct r3964_message {struct r3964_message* tx_buf; struct r3964_message* rx_buf; int read_wait; struct r3964_message* next; int lock; int * tx_last; struct r3964_message* tx_first; int pid; scalar_t__ msg_count; struct r3964_message* firstClient; int tmr; } ;
struct r3964_info {struct r3964_info* tx_buf; struct r3964_info* rx_buf; int read_wait; struct r3964_info* next; int lock; int * tx_last; struct r3964_info* tx_first; int pid; scalar_t__ msg_count; struct r3964_info* firstClient; int tmr; } ;
struct r3964_client_info {struct r3964_client_info* tx_buf; struct r3964_client_info* rx_buf; int read_wait; struct r3964_client_info* next; int lock; int * tx_last; struct r3964_client_info* tx_first; int pid; scalar_t__ msg_count; struct r3964_client_info* firstClient; int tmr; } ;
struct r3964_block_header {struct r3964_block_header* tx_buf; struct r3964_block_header* rx_buf; int read_wait; struct r3964_block_header* next; int lock; int * tx_last; struct r3964_block_header* tx_first; int pid; scalar_t__ msg_count; struct r3964_block_header* firstClient; int tmr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct r3964_message*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct r3964_message*) ;
 int FUNC_4 (int ) ;
 struct r3964_message* FUNC_5 (struct r3964_message*,struct r3964_message*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_0)
{
 struct r3964_info *VAR_1 = VAR_0->disc_data;
 struct r3964_client_info *VAR_2, *VAR_3;
 struct r3964_message *VAR_4;
 struct r3964_block_header *VAR_5, *VAR_6;
 unsigned long VAR_7;

 FUNC_0("close");





 FUNC_2(&VAR_1->tmr);


 VAR_2 = VAR_1->firstClient;
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  while (VAR_2->msg_count) {
   VAR_4 = FUNC_5(VAR_1, VAR_2);
   if (VAR_4) {
    FUNC_3(VAR_4);
    FUNC_1("r3964_close - msg kfree %p", VAR_4);
   }
  }
  FUNC_4(VAR_2->pid);
  FUNC_3(VAR_2);
  FUNC_1("r3964_close - client kfree %p", VAR_2);
  VAR_2 = VAR_3;
 }

 FUNC_6(&VAR_1->lock, VAR_7);
 VAR_5 = VAR_1->tx_first;
 VAR_1->tx_first = VAR_1->tx_last = ((void*)0);
 FUNC_7(&VAR_1->lock, VAR_7);

 while (VAR_5) {
  VAR_6 = VAR_5->next;
  FUNC_3(VAR_5);
  VAR_5 = VAR_6;
 }


 FUNC_8(&VAR_1->read_wait);
 FUNC_3(VAR_1->rx_buf);
 FUNC_1("r3964_close - rx_buf kfree %p", VAR_1->rx_buf);
 FUNC_3(VAR_1->tx_buf);
 FUNC_1("r3964_close - tx_buf kfree %p", VAR_1->tx_buf);
 FUNC_3(VAR_1);
 FUNC_1("r3964_close - info kfree %p", VAR_1);
}
