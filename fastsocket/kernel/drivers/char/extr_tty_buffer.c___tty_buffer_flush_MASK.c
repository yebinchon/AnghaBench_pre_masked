
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty_buffer* head; struct tty_buffer* tail; } ;
struct tty_struct {TYPE_1__ buf; } ;
struct tty_buffer {int commit; int read; struct tty_buffer* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*,struct tty_buffer*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct tty_buffer *VAR_1;

 if (VAR_0->buf.head == ((void*)0))
  return;
 while ((VAR_1 = VAR_0->buf.head->next) != ((void*)0)) {
  FUNC_1(VAR_0, VAR_0->buf.head);
  VAR_0->buf.head = VAR_1;
 }
 FUNC_0(VAR_0->buf.head != VAR_0->buf.tail);
 VAR_0->buf.head->read = VAR_0->buf.head->commit;
}
