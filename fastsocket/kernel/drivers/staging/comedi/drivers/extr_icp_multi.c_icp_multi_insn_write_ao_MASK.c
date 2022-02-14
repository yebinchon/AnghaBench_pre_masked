
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int IntEnable; unsigned int IntStatus; int DacCmdStatus; unsigned int* ao_data; scalar_t__ io_addr; } ;
struct TYPE_3__ {int* rangecode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_10,
       struct comedi_subdevice *VAR_11,
       struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;





 VAR_8->IntEnable &= ~VAR_1;
 FUNC_6(VAR_8->IntEnable, VAR_8->io_addr + VAR_6);


 VAR_8->IntStatus |= VAR_1;
 FUNC_6(VAR_8->IntStatus, VAR_8->io_addr + VAR_7);


 VAR_15 = FUNC_0(VAR_12->chanspec);
 VAR_16 = FUNC_1(VAR_12->chanspec);






 VAR_8->DacCmdStatus &= 0xfccf;
 VAR_8->DacCmdStatus |= VAR_9->rangecode[VAR_16];
 VAR_8->DacCmdStatus |= (VAR_15 << 8);

 FUNC_6(VAR_8->DacCmdStatus, VAR_8->io_addr + VAR_5);

 for (VAR_14 = 0; VAR_14 < VAR_12->n; VAR_14++) {

  VAR_17 = 100;
  while (VAR_17--) {
   if (!(FUNC_4(VAR_8->io_addr +
        VAR_5) & VAR_0))
    goto dac_ready;
   FUNC_5(1);
  }


  FUNC_2(VAR_10, "D/A insn timeout");


  VAR_8->IntEnable &= ~VAR_1;
  FUNC_6(VAR_8->IntEnable, VAR_8->io_addr + VAR_6);


  VAR_8->IntStatus |= VAR_1;
  FUNC_6(VAR_8->IntStatus,
         VAR_8->io_addr + VAR_7);


  VAR_8->ao_data[VAR_15] = 0;






  return -VAR_3;

dac_ready:

  FUNC_6(VAR_13[VAR_14], VAR_8->io_addr + VAR_4);


  VAR_8->DacCmdStatus |= VAR_2;
  FUNC_6(VAR_8->DacCmdStatus,
         VAR_8->io_addr + VAR_5);
  VAR_8->DacCmdStatus &= ~VAR_2;


  VAR_8->ao_data[VAR_15] = VAR_13[VAR_14];
 }




 return VAR_14;
}
