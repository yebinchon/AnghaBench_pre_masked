
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t memory_used; struct tty_buffer* free; } ;
struct tty_struct {TYPE_1__ buf; } ;
struct tty_buffer {size_t size; struct tty_buffer* next; scalar_t__ read; scalar_t__ commit; scalar_t__ used; } ;


 struct tty_buffer* FUNC_0 (struct tty_struct*,size_t) ;

__attribute__((used)) static struct tty_buffer *FUNC_1(struct tty_struct *VAR_0, size_t VAR_1)
{
 struct tty_buffer **VAR_2 = &VAR_0->buf.free;
 while ((*VAR_2) != ((void*)0)) {
  struct tty_buffer *VAR_3 = *VAR_2;
  if (VAR_3->size >= VAR_1) {
   *VAR_2 = VAR_3->next;
   VAR_3->next = ((void*)0);
   VAR_3->used = 0;
   VAR_3->commit = 0;
   VAR_3->read = 0;
   VAR_0->buf.memory_used += VAR_3->size;
   return VAR_3;
  }
  VAR_2 = &((*VAR_2)->next);
 }

 VAR_1 = (VAR_1 + 0xFF) & ~0xFF;
 return FUNC_0(VAR_0, VAR_1);


}
