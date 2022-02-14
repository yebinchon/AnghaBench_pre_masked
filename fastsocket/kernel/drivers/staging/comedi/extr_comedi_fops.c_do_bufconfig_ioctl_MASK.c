
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ n_subdevices; struct comedi_subdevice* subdevices; } ;
struct comedi_bufconfig {scalar_t__ subdevice; scalar_t__ maximum_size; scalar_t__ size; } ;
struct comedi_async {scalar_t__ max_bufsize; scalar_t__ prealloc_bufsz; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct comedi_bufconfig*,void*,int) ;
 scalar_t__ FUNC_3 (void*,struct comedi_bufconfig*,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_async*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4, void *VAR_5)
{
 struct comedi_bufconfig VAR_6;
 struct comedi_async *VAR_7;
 struct comedi_subdevice *VAR_8;
 int VAR_9 = 0;

 if (FUNC_2(&VAR_6, VAR_5, sizeof(struct comedi_bufconfig)))
  return -VAR_1;

 if (VAR_6.subdevice >= VAR_4->n_subdevices || VAR_6.subdevice < 0)
  return -VAR_2;

 VAR_8 = VAR_4->subdevices + VAR_6.subdevice;
 VAR_7 = VAR_8->async;

 if (!VAR_7) {
  FUNC_0("subdevice does not have async capability\n");
  VAR_6.size = 0;
  VAR_6.maximum_size = 0;
  goto copyback;
 }

 if (VAR_6.maximum_size) {
  if (!FUNC_1(VAR_0))
   return -VAR_3;

  VAR_7->max_bufsize = VAR_6.maximum_size;
 }

 if (VAR_6.size) {
  VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_7, VAR_6.size);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_6.size = VAR_7->prealloc_bufsz;
 VAR_6.maximum_size = VAR_7->max_bufsize;

copyback:
 if (FUNC_3(VAR_5, &VAR_6, sizeof(struct comedi_bufconfig)))
  return -VAR_1;

 return 0;
}
