
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {unsigned int buf_read_count; unsigned int buf_read_alloc_count; unsigned int buf_read_ptr; unsigned int prealloc_bufsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;

unsigned FUNC_2(struct comedi_async *VAR_0, unsigned int VAR_1)
{

 FUNC_1();
 if ((int)(VAR_0->buf_read_count + VAR_1 -
    VAR_0->buf_read_alloc_count) > 0) {
  FUNC_0
      ("comedi: attempted to read-free more bytes than have been read-allocated.\n");
  VAR_1 = VAR_0->buf_read_alloc_count - VAR_0->buf_read_count;
 }
 VAR_0->buf_read_count += VAR_1;
 VAR_0->buf_read_ptr += VAR_1;
 VAR_0->buf_read_ptr %= VAR_0->prealloc_bufsz;
 return VAR_1;
}
