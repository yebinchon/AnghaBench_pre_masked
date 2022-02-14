
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daqboard2000_hw {int acqControl; int acqPacerClockDivLow; unsigned int acqResultsFIFO; scalar_t__ acqPacerClockDivHigh; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {struct daqboard2000_hw* daq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 (struct comedi_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_11,
         struct comedi_subdevice *VAR_12,
         struct comedi_insn *VAR_13,
         unsigned int *VAR_14)
{
 int VAR_15;
 struct daqboard2000_hw *VAR_16 = VAR_10->daq;
 int VAR_17, VAR_18, VAR_19;

 VAR_16->acqControl =
     VAR_4 |
     VAR_3 | VAR_2;



 VAR_16->acqPacerClockDivLow = 1000000;
 VAR_16->acqPacerClockDivHigh = 0;

 VAR_17 = FUNC_1(VAR_13->chanspec);
 VAR_18 = FUNC_0(VAR_13->chanspec);





 for (VAR_15 = 0; VAR_15 < VAR_13->n; VAR_15++) {
  FUNC_2(VAR_11, VAR_18, VAR_17);

  VAR_16->acqControl = VAR_8;
  for (VAR_19 = 0; VAR_19 < 20; VAR_19++) {
   if (VAR_16->acqControl & VAR_0) {
    break;
   }

  }
  VAR_16->acqControl = VAR_7;
  for (VAR_19 = 0; VAR_19 < 20; VAR_19++) {
   if (VAR_16->acqControl & VAR_1) {
    break;
   }

  }
  for (VAR_19 = 0; VAR_19 < 20; VAR_19++) {
   if (VAR_16->acqControl &
       VAR_5) {
    break;
   }

  }
  VAR_14[VAR_15] = VAR_16->acqResultsFIFO;
  VAR_16->acqControl = VAR_6;
  VAR_16->acqControl = VAR_9;
 }

 return VAR_15;
}
