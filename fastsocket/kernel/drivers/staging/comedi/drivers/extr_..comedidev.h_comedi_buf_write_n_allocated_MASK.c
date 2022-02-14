
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {int buf_write_alloc_count; int buf_write_count; } ;



__attribute__((used)) static inline unsigned FUNC_0(struct comedi_async *VAR_0)
{
 return VAR_0->buf_write_alloc_count - VAR_0->buf_write_count;
}
