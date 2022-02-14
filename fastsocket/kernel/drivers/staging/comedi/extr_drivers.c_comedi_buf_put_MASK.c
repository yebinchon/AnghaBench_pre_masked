
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {scalar_t__ buf_write_ptr; scalar_t__ prealloc_buf; int events; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_async*,int) ;
 int FUNC_1 (struct comedi_async*,int) ;

int FUNC_2(struct comedi_async *VAR_1, short VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1, sizeof(short));

 if (VAR_3 < sizeof(short)) {
  VAR_1->events |= VAR_0;
  return 0;
 }
 *(short *)(VAR_1->prealloc_buf + VAR_1->buf_write_ptr) = VAR_2;
 FUNC_1(VAR_1, sizeof(short));
 return 1;
}
