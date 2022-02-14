
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ io_addr; int IntStatus; int IntEnable; int AdcCmdStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_9,
      struct comedi_subdevice *VAR_10,
      struct comedi_insn *VAR_11, unsigned int *VAR_12)
{
 int VAR_13, VAR_14;





 VAR_8->IntEnable &= ~VAR_1;
 FUNC_5(VAR_8->IntEnable, VAR_8->io_addr + VAR_6);


 VAR_8->IntStatus |= VAR_1;
 FUNC_5(VAR_8->IntStatus, VAR_8->io_addr + VAR_7);


 FUNC_3(VAR_9, VAR_10, &VAR_11->chanspec, 1);







 for (VAR_13 = 0; VAR_13 < VAR_11->n; VAR_13++) {

  VAR_8->AdcCmdStatus |= VAR_2;
  FUNC_5(VAR_8->AdcCmdStatus,
         VAR_8->io_addr + VAR_4);
  VAR_8->AdcCmdStatus &= ~VAR_2;






  FUNC_4(1);







  VAR_14 = 100;
  while (VAR_14--) {
   if (!(FUNC_2(VAR_8->io_addr +
        VAR_4) & VAR_0))
    goto conv_finish;
   FUNC_4(1);
  }


  FUNC_0(VAR_9, "A/D insn timeout");


  VAR_8->IntEnable &= ~VAR_1;
  FUNC_5(VAR_8->IntEnable, VAR_8->io_addr + VAR_6);


  VAR_8->IntStatus |= VAR_1;
  FUNC_5(VAR_8->IntStatus,
         VAR_8->io_addr + VAR_7);


  VAR_12[VAR_13] = 0;






  return -VAR_3;

conv_finish:
  VAR_12[VAR_13] =
      (FUNC_2(VAR_8->io_addr + VAR_5) >> 4) & 0x0fff;
 }


 VAR_8->IntEnable &= ~VAR_1;
 FUNC_5(VAR_8->IntEnable, VAR_8->io_addr + VAR_6);


 VAR_8->IntStatus |= VAR_1;
 FUNC_5(VAR_8->IntStatus, VAR_8->io_addr + VAR_7);




 return VAR_13;
}
