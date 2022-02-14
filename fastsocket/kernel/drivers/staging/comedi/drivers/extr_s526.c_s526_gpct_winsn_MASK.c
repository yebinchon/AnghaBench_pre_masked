
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union cmReg {int value; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int * data; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s526_gpct_config; } ;
struct TYPE_3__ {int app; int * data; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 TYPE_2__* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (short,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7,
      unsigned int *VAR_8)
{
 int VAR_9 = FUNC_1(VAR_7->chanspec);
 short VAR_10;
 union cmReg VAR_11;

 FUNC_4("s526: GPCT_INSN_WRITE on channel %d\n", VAR_9);
 VAR_11.value = FUNC_2(FUNC_0(VAR_3, VAR_9));
 FUNC_4("s526: Counter Mode Register: %x\n", VAR_11.value);

 switch (VAR_4->s526_gpct_config[VAR_9].app) {
 case 130:
  FUNC_4("S526: INSN_WRITE: PM\n");
  FUNC_3(0xFFFF & ((*VAR_8) >> 16), FUNC_0(VAR_1,
            VAR_9));
  FUNC_3(0xFFFF & (*VAR_8), FUNC_0(VAR_2, VAR_9));
  break;

 case 128:
  FUNC_4("S526: INSN_WRITE: SPG\n");
  FUNC_3(0xFFFF & ((*VAR_8) >> 16), FUNC_0(VAR_1,
            VAR_9));
  FUNC_3(0xFFFF & (*VAR_8), FUNC_0(VAR_2, VAR_9));
  break;

 case 129:






  FUNC_4("S526: INSN_WRITE: PTG\n");
  if ((VAR_7->data[1] > VAR_7->data[0]) && (VAR_7->data[0] > 0)) {
   (VAR_4->s526_gpct_config[VAR_9]).data[0] =
       VAR_7->data[0];
   (VAR_4->s526_gpct_config[VAR_9]).data[1] =
       VAR_7->data[1];
  } else {
   FUNC_4("s526: INSN_WRITE: PTG: Problem with Pulse params -> %d %d\n",
    VAR_7->data[0], VAR_7->data[1]);
   return -VAR_0;
  }

  VAR_10 = (short)((*VAR_8 >> 16) & 0xFFFF);
  FUNC_3(VAR_10, FUNC_0(VAR_1, VAR_9));
  VAR_10 = (short)(*VAR_8 & 0xFFFF);
  FUNC_3(VAR_10, FUNC_0(VAR_2, VAR_9));
  break;
 default:
  FUNC_4
      ("s526: INSN_WRITE: Functionality %d not implemented yet\n",
       VAR_4->s526_gpct_config[VAR_9].app);
  return -VAR_0;
  break;
 }

 return VAR_7->n;
}
