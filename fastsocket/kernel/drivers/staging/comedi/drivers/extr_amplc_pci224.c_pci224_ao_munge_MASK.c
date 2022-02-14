
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int * chanlist; } ;
struct comedi_async {TYPE_1__ cmd; } ;
struct TYPE_6__ {int* hwrange; } ;
struct TYPE_5__ {int ao_bits; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
  void *VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 struct comedi_async *VAR_9 = VAR_5->async;
 short *VAR_10 = VAR_6;
 unsigned int VAR_11 = VAR_7 / sizeof(*VAR_10);
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;


 VAR_13 = 16 - VAR_3->ao_bits;

 if ((VAR_2->hwrange[FUNC_0(VAR_9->cmd.chanlist[0])] &
      VAR_0) == VAR_1) {

  VAR_12 = 0;
 } else {

  VAR_12 = 32768;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  VAR_10[VAR_14] = (VAR_10[VAR_14] << VAR_13) - VAR_12;
 }
}
