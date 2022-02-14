
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {unsigned int buf_read_alloc_count; unsigned int munge_count; } ;


 int FUNC_0 () ;

unsigned FUNC_1(struct comedi_async *VAR_0, unsigned VAR_1)
{
 if ((int)(VAR_0->buf_read_alloc_count + VAR_1 - VAR_0->munge_count) >
     0) {
  VAR_1 = VAR_0->munge_count - VAR_0->buf_read_alloc_count;
 }
 VAR_0->buf_read_alloc_count += VAR_1;


 FUNC_0();
 return VAR_1;
}
