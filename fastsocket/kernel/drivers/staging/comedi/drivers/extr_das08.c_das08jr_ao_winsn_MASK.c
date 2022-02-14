
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__* ao_offset_msb; scalar_t__* ao_offset_lsb; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3,
       struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = VAR_5[0] & 0xff;
 VAR_8 = (VAR_5[0] >> 8) & 0xf;

 VAR_9 = FUNC_0(VAR_4->chanspec);

 for (VAR_6 = 0; VAR_6 < VAR_4->n; VAR_6++) {




  FUNC_4(VAR_7, VAR_2->iobase + FUNC_1(VAR_9));
  FUNC_4(VAR_8, VAR_2->iobase + FUNC_2(VAR_9));



  FUNC_3(VAR_2->iobase + VAR_0);
 }

 return VAR_6;
}
