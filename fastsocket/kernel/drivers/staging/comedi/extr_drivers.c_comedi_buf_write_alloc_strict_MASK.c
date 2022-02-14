
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {unsigned int buf_read_count; unsigned int prealloc_bufsz; unsigned int buf_write_alloc_count; } ;


 int FUNC_0 () ;

unsigned int FUNC_1(struct comedi_async *VAR_0,
        unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->buf_read_count + VAR_0->prealloc_bufsz;

 if ((int)(VAR_0->buf_write_alloc_count + VAR_1 - VAR_2) > 0) {
  VAR_1 = 0;
 }
 VAR_0->buf_write_alloc_count += VAR_1;


 FUNC_0();
 return VAR_1;
}
