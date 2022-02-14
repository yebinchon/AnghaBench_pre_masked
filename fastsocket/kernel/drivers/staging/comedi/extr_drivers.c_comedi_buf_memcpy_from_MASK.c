
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {unsigned int buf_read_ptr; unsigned int prealloc_bufsz; void* prealloc_buf; } ;


 int FUNC_0 (void*,void*,unsigned int) ;

void FUNC_1(struct comedi_async *VAR_0, unsigned int VAR_1,
       void *VAR_2, unsigned int VAR_3)
{
 void *VAR_4;
 unsigned int VAR_5 = VAR_0->buf_read_ptr + VAR_1;

 if (VAR_5 >= VAR_0->prealloc_bufsz)
  VAR_5 %= VAR_0->prealloc_bufsz;

 while (VAR_3) {
  unsigned int VAR_6;

  VAR_4 = VAR_0->prealloc_buf + VAR_5;

  if (VAR_3 >= VAR_0->prealloc_bufsz - VAR_5)
   VAR_6 = VAR_0->prealloc_bufsz - VAR_5;
  else
   VAR_6 = VAR_3;

  FUNC_0(VAR_2, VAR_4, VAR_6);
  VAR_3 -= VAR_6;
  VAR_2 += VAR_6;
  VAR_5 = 0;
 }
}
