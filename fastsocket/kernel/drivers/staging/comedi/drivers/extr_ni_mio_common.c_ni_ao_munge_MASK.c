
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {unsigned int chanlist_len; int * chanlist; } ;
struct comedi_async {TYPE_1__ cmd; } ;
struct TYPE_4__ {int aobits; scalar_t__ ao_unipolar; } ;


 unsigned int FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;
 short FUNC_1 (short) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
   void *VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 struct comedi_async *VAR_6 = VAR_2->async;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = VAR_4 / sizeof(short);
 short *VAR_11 = VAR_3;

 VAR_9 = 1 << (VAR_0.aobits - 1);
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_7 = FUNC_0(VAR_6->cmd.chanlist[VAR_5]);
  if (VAR_0.ao_unipolar == 0 || (VAR_7 & 1) == 0)
   VAR_11[VAR_8] -= VAR_9;



  VAR_5++;
  VAR_5 %= VAR_6->cmd.chanlist_len;
 }
}
