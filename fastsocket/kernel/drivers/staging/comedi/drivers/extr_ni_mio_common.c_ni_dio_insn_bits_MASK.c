
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int (* stc_readw ) (struct comedi_device*,int ) ;int dio_output; int (* stc_writew ) (struct comedi_device*,int ,int ) ;scalar_t__ serial_interval_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 unsigned int FUNC_3 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_8,
       struct comedi_subdevice *VAR_9,
       struct comedi_insn *VAR_10, unsigned int *VAR_11)
{



 if (VAR_10->n != 2)
  return -VAR_6;
 if (VAR_11[0]) {


  if ((VAR_11[0] & (VAR_3 | VAR_4))
      && VAR_7->serial_interval_ns)
   return -VAR_5;

  VAR_9->state &= ~VAR_11[0];
  VAR_9->state |= (VAR_11[0] & VAR_11[1]);
  VAR_7->dio_output &= ~VAR_1;
  VAR_7->dio_output |= FUNC_0(VAR_9->state);
  VAR_7->stc_writew(VAR_8, VAR_7->dio_output,
        VAR_0);
 }
 VAR_11[1] = VAR_7->stc_readw(VAR_8, VAR_2);

 return 2;
}
