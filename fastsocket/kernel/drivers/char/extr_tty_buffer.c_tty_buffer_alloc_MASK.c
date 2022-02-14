
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t memory_used; } ;
struct tty_struct {TYPE_1__ buf; } ;
struct tty_buffer {size_t size; char* char_buf_ptr; unsigned char* flag_buf_ptr; scalar_t__ data; scalar_t__ read; scalar_t__ commit; int * next; scalar_t__ used; } ;


 int VAR_0 ;
 struct tty_buffer* FUNC_0 (int,int ) ;

__attribute__((used)) static struct tty_buffer *FUNC_1(struct tty_struct *VAR_1, size_t VAR_2)
{
 struct tty_buffer *VAR_3;

 if (VAR_1->buf.memory_used + VAR_2 > 65536)
  return ((void*)0);
 VAR_3 = FUNC_0(sizeof(struct tty_buffer) + 2 * VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3->used = 0;
 VAR_3->size = VAR_2;
 VAR_3->next = ((void*)0);
 VAR_3->commit = 0;
 VAR_3->read = 0;
 VAR_3->char_buf_ptr = (char *)(VAR_3->data);
 VAR_3->flag_buf_ptr = (unsigned char *)VAR_3->char_buf_ptr + VAR_2;
 VAR_1->buf.memory_used += VAR_2;
 return VAR_3;
}
