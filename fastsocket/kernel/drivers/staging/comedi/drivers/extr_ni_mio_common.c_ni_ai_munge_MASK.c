
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int subdev_flags; struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {unsigned int chanlist_len; } ;
struct comedi_async {TYPE_1__ cmd; } ;
struct TYPE_4__ {scalar_t__* ai_offset; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 TYPE_2__* VAR_1 ;
 short FUNC_1 (short) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
   void *VAR_4, unsigned int VAR_5,
   unsigned int VAR_6)
{
 struct comedi_async *VAR_7 = VAR_3->async;
 unsigned int VAR_8;
 unsigned int VAR_9 = VAR_5 / FUNC_0(VAR_3);
 short *VAR_10 = VAR_4;
 unsigned int *VAR_11 = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {






  if (VAR_3->subdev_flags & VAR_0)
   VAR_11[VAR_8] += VAR_1->ai_offset[VAR_6];
  else
   VAR_10[VAR_8] += VAR_1->ai_offset[VAR_6];
  VAR_6++;
  VAR_6 %= VAR_7->cmd.chanlist_len;
 }
}
