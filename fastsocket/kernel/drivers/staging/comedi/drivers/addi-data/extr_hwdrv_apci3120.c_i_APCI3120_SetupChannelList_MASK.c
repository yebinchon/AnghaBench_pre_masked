
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int us_OutputRegister; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (unsigned short,scalar_t__) ;
 int FUNC_4 (char*,unsigned short) ;

int FUNC_5(struct comedi_device *VAR_6, struct comedi_subdevice *VAR_7,
 int VAR_8, unsigned int *VAR_9, char VAR_10)
{
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned short VAR_13;


 if (VAR_8 < 1) {
  if (!VAR_10)
   FUNC_2(VAR_6, "range/channel list is empty!");
  return 0;
 }

 if (VAR_10)
  return 1;


 VAR_5->us_OutputRegister =
  VAR_5->us_OutputRegister & VAR_1;
 VAR_5->us_OutputRegister = ((VAR_8 - 1) & 0xf) << 8;
 FUNC_3(VAR_5->us_OutputRegister, VAR_6->iobase + VAR_4);

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {

  VAR_13 = FUNC_0(VAR_9[VAR_11]);

  if (FUNC_1(VAR_9[VAR_11]) < VAR_0) {
   VAR_13 &= ((~VAR_3) & 0xff);
  } else {
   VAR_13 |= VAR_3;
  }

  VAR_12 = FUNC_1(VAR_9[VAR_11]);
  VAR_13 |= ((VAR_12 & 0x03) << 4);
  VAR_13 |= VAR_11 << 8;
  FUNC_3(VAR_13, VAR_6->iobase + VAR_2);

  FUNC_4("\n Gain = %i",
   (((unsigned char)FUNC_1(VAR_9[VAR_11]) & 0x03) << 2));
  FUNC_4("\n Channel = %i", FUNC_0(VAR_9[VAR_11]));
  FUNC_4("\n Polarity = %i", VAR_13 & VAR_3);
 }
 return 1;
}
