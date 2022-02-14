
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* aoValue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct comedi_device*,int,int) ;
 int FUNC_4 (struct comedi_device*,int,int) ;
 int FUNC_5 (struct comedi_device*,int) ;
 int FUNC_6 (struct comedi_device*) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_6,
   struct comedi_subdevice *VAR_7, struct comedi_insn *VAR_8,
   unsigned int *VAR_9)
{
 int VAR_10;
 int VAR_11 = FUNC_0(VAR_8->chanspec);
 int VAR_12 = FUNC_1(VAR_8->chanspec);


 FUNC_4(VAR_6, VAR_11, VAR_12);



 for (VAR_10 = 0; VAR_10 < VAR_8->n; ++VAR_10) {
  int VAR_13 = VAR_9[VAR_10] << 3;
  int VAR_14 = 0;
  int VAR_15;



  if ((VAR_12 > 1)
      &&(VAR_9[VAR_10] < 2048)) {

   VAR_13 = (((int)VAR_9[VAR_10]) - 2048) << 3;
  } else {
   VAR_13 = VAR_9[VAR_10] << 3;
  }

  FUNC_2
      ("comedi: rtd520 DAC chan=%d range=%d writing %d as 0x%x\n",
       VAR_11, VAR_12, VAR_9[VAR_10], VAR_13);


  FUNC_3(VAR_6, VAR_11, VAR_13);
  FUNC_5(VAR_6, VAR_11);

  VAR_5->aoValue[VAR_11] = VAR_9[VAR_10];

  for (VAR_15 = 0; VAR_15 < VAR_3; ++VAR_15) {
   VAR_14 = FUNC_6(VAR_6);

   if (VAR_14 & ((0 == VAR_11) ? VAR_1 :
        VAR_2))
    break;
   VAR_4;
  }
  if (VAR_15 >= VAR_3) {
   FUNC_2
       ("rtd520: Error: DAC never finished! FifoStatus=0x%x\n",
        VAR_14 ^ 0x6666);
   return -VAR_0;
  }
 }


 return VAR_10;
}
