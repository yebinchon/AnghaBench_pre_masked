
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memory_used; struct tty_buffer* free; } ;
struct tty_struct {TYPE_1__ buf; } ;
struct tty_buffer {int size; struct tty_buffer* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tty_buffer*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, struct tty_buffer *VAR_1)
{

 VAR_0->buf.memory_used -= VAR_1->size;
 FUNC_0(VAR_0->buf.memory_used < 0);

 if (VAR_1->size >= 512)
  FUNC_1(VAR_1);
 else {
  VAR_1->next = VAR_0->buf.free;
  VAR_0->buf.free = VAR_1;
 }
}
