
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int da_ranges; unsigned int* ao_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_6->chanspec);
 VAR_10 = FUNC_1(VAR_6->chanspec);
 if (VAR_9) {
  VAR_3->da_ranges &= 0xfb;
  VAR_3->da_ranges |= (VAR_10 << 2);
  FUNC_2(VAR_3->da_ranges, VAR_4->iobase + VAR_2);
  VAR_11 = VAR_1;
 } else {
  VAR_3->da_ranges &= 0xfe;
  VAR_3->da_ranges |= VAR_10;
  FUNC_2(VAR_3->da_ranges, VAR_4->iobase + VAR_2);
  VAR_11 = VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->n; VAR_8++)
  FUNC_2(VAR_7[VAR_8], VAR_4->iobase + VAR_11);

 VAR_3->ao_data[VAR_9] = VAR_7[VAR_8];

 return VAR_8;

}
