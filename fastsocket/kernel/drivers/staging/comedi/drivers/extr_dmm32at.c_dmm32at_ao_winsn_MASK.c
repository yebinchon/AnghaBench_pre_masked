
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_readback; } ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 unsigned char FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int ,unsigned char) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7,
       struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 int VAR_10;
 int VAR_11 = FUNC_0(VAR_8->chanspec);
 unsigned char VAR_12, VAR_13, VAR_14;



 for (VAR_10 = 0; VAR_10 < VAR_8->n; VAR_10++) {

  VAR_5->ao_readback[VAR_11] = VAR_9[VAR_10];


  VAR_13 = VAR_9[VAR_10] & 0x00ff;

  VAR_12 = (VAR_9[VAR_10] >> 8) + VAR_11 * (1 << 6);


  FUNC_2(VAR_6, VAR_1, VAR_13);
  FUNC_2(VAR_6, VAR_2, VAR_12);


  for (VAR_10 = 0; VAR_10 < 40000; VAR_10++) {
   VAR_14 = FUNC_1(VAR_6, VAR_3);
   if ((VAR_14 & VAR_0) == 0)
    break;
  }
  if (VAR_10 == 40000) {
   FUNC_3("timeout\n");
   return -VAR_4;
  }

  VAR_14 = FUNC_1(VAR_6, VAR_2);

 }


 return VAR_10;
}
