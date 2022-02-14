
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
typedef int s16 ;
struct TYPE_2__ {int chanBipolar; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (struct comedi_device*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_5,
   struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7,
   unsigned int *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11;


 FUNC_2(VAR_5);


 FUNC_7(VAR_5, 1, &VAR_7->chanspec);


 FUNC_3(VAR_5, 0);


 for (VAR_9 = 0; VAR_9 < VAR_7->n; VAR_9++) {
  s16 VAR_12;

  FUNC_5(VAR_5);

  for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
   VAR_11 = FUNC_6(VAR_5);
   if (VAR_11 & VAR_1)
    break;
   VAR_3;
  }
  if (VAR_10 >= VAR_2) {
   FUNC_1
       ("rtd520: Error: ADC never finished! FifoStatus=0x%x\n",
        VAR_11 ^ 0x6666);
   return -VAR_0;
  }


  VAR_12 = FUNC_4(VAR_5);

  VAR_12 = VAR_12 >> 3;
  if (FUNC_0(VAR_4->chanBipolar, 0)) {
   VAR_8[VAR_9] = VAR_12 + 2048;
  } else {
   VAR_8[VAR_9] = VAR_12;
  }
 }


 return VAR_9;
}
