
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct TYPE_4__ {short ao_update_bits; } ;
struct TYPE_3__ {int ao_n_chan; int resolution; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (short,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6->chanspec);

 int VAR_9 = VAR_3->ao_n_chan - 1;
 short VAR_10;
 unsigned long VAR_11;


 VAR_10 = VAR_7[0] - (1 << (VAR_3->resolution - 1));

 if (VAR_8 == VAR_9)
  VAR_2->ao_update_bits = VAR_10;

 FUNC_4(&VAR_4->spinlock, VAR_11);
 FUNC_2(FUNC_1(VAR_8), VAR_4->iobase + VAR_1);
 FUNC_3(VAR_10, VAR_4->iobase + VAR_0);

 if (VAR_8 != VAR_9) {
  FUNC_2(FUNC_1(VAR_9), VAR_4->iobase + VAR_1);
  FUNC_3(VAR_2->ao_update_bits, VAR_4->iobase + VAR_0);
 }
 FUNC_5(&VAR_4->spinlock, VAR_11);

 return 1;
}
