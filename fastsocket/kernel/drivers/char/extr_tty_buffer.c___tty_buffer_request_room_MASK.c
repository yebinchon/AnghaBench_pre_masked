
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty_buffer* tail; struct tty_buffer* head; } ;
struct tty_struct {TYPE_1__ buf; } ;
struct tty_buffer {int size; int used; int commit; struct tty_buffer* next; } ;


 struct tty_buffer* FUNC_0 (struct tty_struct*,size_t) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, size_t VAR_1)
{
 struct tty_buffer *VAR_2, *VAR_3;
 int VAR_4;



 if ((VAR_2 = VAR_0->buf.tail) != ((void*)0))
  VAR_4 = VAR_2->size - VAR_2->used;
 else
  VAR_4 = 0;

 if (VAR_4 < VAR_1) {

  if ((VAR_3 = FUNC_0(VAR_0, VAR_1)) != ((void*)0)) {
   if (VAR_2 != ((void*)0)) {
    VAR_2->next = VAR_3;
    VAR_2->commit = VAR_2->used;
   } else
    VAR_0->buf.head = VAR_3;
   VAR_0->buf.tail = VAR_3;
  } else
   VAR_1 = VAR_4;
 }

 return VAR_1;
}
