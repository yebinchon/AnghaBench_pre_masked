
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; struct comedi_async* async; } ;
struct comedi_device {scalar_t__ n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_bufinfo {scalar_t__ subdevice; scalar_t__ buf_write_count; scalar_t__ buf_read_count; scalar_t__ buf_read_ptr; scalar_t__ buf_write_ptr; scalar_t__ bytes_written; scalar_t__ bytes_read; } ;
struct comedi_async {scalar_t__ buf_write_count; scalar_t__ buf_read_count; scalar_t__ buf_read_ptr; scalar_t__ buf_write_ptr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct comedi_async*,scalar_t__) ;
 int FUNC_2 (struct comedi_async*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct comedi_async*,scalar_t__) ;
 int FUNC_4 (struct comedi_async*,scalar_t__) ;
 int FUNC_5 (struct comedi_subdevice*) ;
 scalar_t__ FUNC_6 (struct comedi_bufinfo*,void*,int) ;
 scalar_t__ FUNC_7 (void*,struct comedi_bufinfo*,int) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_6, void *VAR_7)
{
 struct comedi_bufinfo VAR_8;
 struct comedi_subdevice *VAR_9;
 struct comedi_async *VAR_10;

 if (FUNC_6(&VAR_8, VAR_7, sizeof(struct comedi_bufinfo)))
  return -VAR_0;

 if (VAR_8.subdevice >= VAR_6->n_subdevices || VAR_8.subdevice < 0)
  return -VAR_1;

 VAR_9 = VAR_6->subdevices + VAR_8.subdevice;
 VAR_10 = VAR_9->async;

 if (!VAR_10) {
  FUNC_0("subdevice does not have async capability\n");
  VAR_8.buf_write_ptr = 0;
  VAR_8.buf_read_ptr = 0;
  VAR_8.buf_write_count = 0;
  VAR_8.buf_read_count = 0;
  goto copyback;
 }

 if (VAR_8.bytes_read && (VAR_9->subdev_flags & VAR_2)) {
  VAR_8.bytes_read = FUNC_1(VAR_10, VAR_8.bytes_read);
  FUNC_2(VAR_10, VAR_8.bytes_read);

  if (!(FUNC_5(VAR_9) & (VAR_4 |
         VAR_5))
      && VAR_10->buf_write_count == VAR_10->buf_read_count) {
   FUNC_8(VAR_6, VAR_9);
  }
 }

 if (VAR_8.bytes_written && (VAR_9->subdev_flags & VAR_3)) {
  VAR_8.bytes_written =
      FUNC_3(VAR_10, VAR_8.bytes_written);
  FUNC_4(VAR_10, VAR_8.bytes_written);
 }

 VAR_8.buf_write_count = VAR_10->buf_write_count;
 VAR_8.buf_write_ptr = VAR_10->buf_write_ptr;
 VAR_8.buf_read_count = VAR_10->buf_read_count;
 VAR_8.buf_read_ptr = VAR_10->buf_read_ptr;

copyback:
 if (FUNC_7(VAR_7, &VAR_8, sizeof(struct comedi_bufinfo)))
  return -VAR_0;

 return 0;
}
