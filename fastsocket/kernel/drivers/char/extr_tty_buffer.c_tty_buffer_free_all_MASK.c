
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ memory_used; int * tail; struct tty_buffer* free; struct tty_buffer* head; } ;
struct tty_struct {TYPE_1__ buf; } ;
struct tty_buffer {struct tty_buffer* next; } ;


 int FUNC_0 (struct tty_buffer*) ;

void FUNC_1(struct tty_struct *VAR_0)
{
 struct tty_buffer *VAR_1;
 while ((VAR_1 = VAR_0->buf.head) != ((void*)0)) {
  VAR_0->buf.head = VAR_1->next;
  FUNC_0(VAR_1);
 }
 while ((VAR_1 = VAR_0->buf.free) != ((void*)0)) {
  VAR_0->buf.free = VAR_1->next;
  FUNC_0(VAR_1);
 }
 VAR_0->buf.tail = ((void*)0);
 VAR_0->buf.memory_used = 0;
}
