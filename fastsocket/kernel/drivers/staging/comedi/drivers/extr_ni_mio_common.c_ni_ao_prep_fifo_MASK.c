
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int reg_type; int ao_fifo_depth; } ;
struct TYPE_3__ {int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6)
{
 int VAR_7;


 VAR_3->stc_writew(VAR_5, 1, VAR_1);
 if (VAR_2.reg_type & VAR_4)
  FUNC_2(VAR_5, 0x6, VAR_0);


 VAR_7 = FUNC_0(VAR_6->async);
 if (VAR_7 == 0)
  return 0;

 VAR_7 /= sizeof(short);
 if (VAR_7 > VAR_2.ao_fifo_depth)
  VAR_7 = VAR_2.ao_fifo_depth;

 FUNC_1(VAR_5, VAR_6, VAR_7);

 return VAR_7;
}
