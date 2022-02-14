
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_channel {int dummy; } ;
struct comedi_async {unsigned int buf_write_alloc_count; unsigned int buf_write_count; int scan_progress; int events; int prealloc_bufsz; int subdevice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_async*,int ) ;
 int FUNC_2 (struct comedi_async*,int) ;
 unsigned int FUNC_3 (struct mite_channel*) ;
 unsigned int FUNC_4 (struct mite_channel*) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct mite_channel *VAR_3,
   struct comedi_async *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7;
 const unsigned VAR_8 = FUNC_0(VAR_4->subdevice);

 VAR_7 = VAR_4->buf_write_alloc_count;

 FUNC_1(VAR_4, VAR_4->prealloc_bufsz);

 VAR_6 = FUNC_3(VAR_3);
 if ((int)(FUNC_4(VAR_3) -
    VAR_7) > 0) {
  FUNC_5("mite: DMA overwrite of free area\n");
  VAR_4->events |= VAR_2;
  return -1;
 }

 VAR_5 = VAR_6 - VAR_4->buf_write_count;


 if (VAR_5 <= 0)
  return 0;

 FUNC_2(VAR_4, VAR_5);

 VAR_4->scan_progress += VAR_5;
 if (VAR_4->scan_progress >= VAR_8) {
  VAR_4->scan_progress %= VAR_8;
  VAR_4->events |= VAR_1;
 }
 VAR_4->events |= VAR_0;
 return 0;
}
