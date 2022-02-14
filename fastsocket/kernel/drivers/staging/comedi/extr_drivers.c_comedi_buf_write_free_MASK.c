
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {unsigned int buf_write_count; unsigned int buf_write_alloc_count; unsigned int buf_write_ptr; unsigned int munge_count; unsigned int prealloc_bufsz; } ;


 int FUNC_0 (struct comedi_async*,unsigned int) ;
 int FUNC_1 (char*) ;

unsigned FUNC_2(struct comedi_async *VAR_0, unsigned int VAR_1)
{
 if ((int)(VAR_0->buf_write_count + VAR_1 -
    VAR_0->buf_write_alloc_count) > 0) {
  FUNC_1
      ("comedi: attempted to write-free more bytes than have been write-allocated.\n");
  VAR_1 = VAR_0->buf_write_alloc_count - VAR_0->buf_write_count;
 }
 VAR_0->buf_write_count += VAR_1;
 VAR_0->buf_write_ptr += VAR_1;
 FUNC_0(VAR_0, VAR_0->buf_write_count - VAR_0->munge_count);
 if (VAR_0->buf_write_ptr >= VAR_0->prealloc_bufsz) {
  VAR_0->buf_write_ptr %= VAR_0->prealloc_bufsz;
 }
 return VAR_1;
}
