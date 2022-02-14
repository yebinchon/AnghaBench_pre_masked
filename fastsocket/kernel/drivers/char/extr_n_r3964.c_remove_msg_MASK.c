
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_message {scalar_t__ block; struct r3964_message* next; } ;
struct r3964_info {int dummy; } ;
struct r3964_client_info {int lock; scalar_t__ next_block_to_read; int msg_count; int * last_msg; struct r3964_message* first_msg; } ;


 int FUNC_0 (struct r3964_info*,struct r3964_client_info*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct r3964_message *FUNC_3(struct r3964_info *VAR_0,
     struct r3964_client_info *VAR_1)
{
 struct r3964_message *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 if (VAR_1->first_msg) {
  FUNC_1(&VAR_1->lock, VAR_3);

  VAR_2 = VAR_1->first_msg;
  VAR_1->first_msg = VAR_2->next;
  if (VAR_1->first_msg == ((void*)0)) {
   VAR_1->last_msg = ((void*)0);
  }

  VAR_1->msg_count--;
  if (VAR_2->block) {
   FUNC_0(VAR_0, VAR_1);
   VAR_1->next_block_to_read = VAR_2->block;
  }
  FUNC_2(&VAR_1->lock, VAR_3);
 }
 return VAR_2;
}
