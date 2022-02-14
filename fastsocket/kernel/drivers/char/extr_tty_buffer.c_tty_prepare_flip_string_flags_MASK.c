
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; struct tty_buffer* tail; } ;
struct tty_struct {TYPE_1__ buf; } ;
struct tty_buffer {unsigned char* char_buf_ptr; int used; char* flag_buf_ptr; } ;


 int FUNC_0 (struct tty_struct*,size_t) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct tty_struct *VAR_0,
   unsigned char **VAR_1, char **VAR_2, size_t VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct tty_buffer *VAR_6;

 FUNC_2(&VAR_0->buf.lock, VAR_5);
 VAR_4 = FUNC_0(VAR_0, VAR_3);

 VAR_6 = VAR_0->buf.tail;
 if (FUNC_1(VAR_4)) {
  *VAR_1 = VAR_6->char_buf_ptr + VAR_6->used;
  *VAR_2 = VAR_6->flag_buf_ptr + VAR_6->used;
  VAR_6->used += VAR_4;
 }
 FUNC_3(&VAR_0->buf.lock, VAR_5);
 return VAR_4;
}
