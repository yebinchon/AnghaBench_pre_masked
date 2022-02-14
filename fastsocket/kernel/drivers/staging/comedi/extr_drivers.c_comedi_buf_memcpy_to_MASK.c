
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {unsigned int buf_write_ptr; unsigned int prealloc_bufsz; scalar_t__ prealloc_buf; } ;


 int FUNC_0 (scalar_t__,void const*,unsigned int) ;

void FUNC_1(struct comedi_async *VAR_0, unsigned int VAR_1,
     const void *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0->buf_write_ptr + VAR_1;

 if (VAR_4 >= VAR_0->prealloc_bufsz)
  VAR_4 %= VAR_0->prealloc_bufsz;

 while (VAR_3) {
  unsigned int VAR_5;

  if (VAR_4 + VAR_3 > VAR_0->prealloc_bufsz)
   VAR_5 = VAR_0->prealloc_bufsz - VAR_4;
  else
   VAR_5 = VAR_3;

  FUNC_0(VAR_0->prealloc_buf + VAR_4, VAR_2, VAR_5);

  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;

  VAR_4 = 0;
 }
}
