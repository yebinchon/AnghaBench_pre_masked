
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; int spinlock; } ;
struct TYPE_2__ {int command2_bits; int command3_bits; int (* write_byte ) (int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6, struct comedi_subdevice *VAR_7)
{
 unsigned long VAR_8;

 FUNC_0(&VAR_6->spinlock, VAR_8);
 VAR_5->command2_bits &= ~VAR_4 & ~VAR_2 & ~VAR_3;
 VAR_5->write_byte(VAR_5->command2_bits, VAR_6->iobase + VAR_0);
 FUNC_1(&VAR_6->spinlock, VAR_8);

 VAR_5->command3_bits = 0;
 VAR_5->write_byte(VAR_5->command3_bits, VAR_6->iobase + VAR_1);

 return 0;
}
