
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {scalar_t__ buf_read_ptr; scalar_t__ prealloc_buf; } ;


 int FUNC_0 (struct comedi_async*,int) ;
 int FUNC_1 (struct comedi_async*,int) ;
 unsigned int FUNC_2 (struct comedi_async*) ;

int FUNC_3(struct comedi_async *VAR_0, short *VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 < sizeof(short))
  return 0;
 FUNC_0(VAR_0, sizeof(short));
 *VAR_1 = *(short *)(VAR_0->prealloc_buf + VAR_0->buf_read_ptr);
 FUNC_1(VAR_0, sizeof(short));
 return 1;
}
