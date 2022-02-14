
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int last_channel; int last_range; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_7,
      struct comedi_subdevice *VAR_8, struct comedi_insn *VAR_9,
      unsigned int *VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 unsigned char VAR_15, VAR_16, VAR_17;


 VAR_13 = FUNC_1(VAR_9->chanspec);
 VAR_14 = FUNC_0(VAR_9->chanspec);
 if (VAR_14 != VAR_6->last_channel || VAR_13 != VAR_6->last_range) {
  FUNC_3((VAR_13 << 4) | VAR_14, VAR_7->iobase + VAR_2);
  FUNC_4(50);
 }


 VAR_17 = FUNC_2(VAR_7->iobase + VAR_1);


 for (VAR_11 = 0; VAR_11 < VAR_9->n; VAR_11++) {


  VAR_12 = 0;
  do {

   VAR_17 = FUNC_2(VAR_7->iobase + VAR_4);
   VAR_17 = VAR_17 & VAR_3;
  } while (VAR_17 == 0 && ++VAR_12 < VAR_5);



  VAR_15 = FUNC_2(VAR_7->iobase + VAR_0);
  VAR_16 = FUNC_2(VAR_7->iobase + VAR_1);


  VAR_10[VAR_11] = (VAR_15 << 8) | VAR_16;

 }


 return VAR_11;
}
