
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct BondedDevice {int subdev; int dev; scalar_t__ chanid_offset; } ;
struct TYPE_2__ {int nchans; struct BondedDevice** chanIdDevMap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 int FUNC_1 (int ,int ,int,unsigned int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6->chanspec), VAR_9, VAR_10 = VAR_5->io_bits;
 unsigned int VAR_11;
 struct BondedDevice *VAR_12;

 if (VAR_8 < 0 || VAR_8 >= VAR_3->nchans)
  return -VAR_2;
 VAR_12 = VAR_3->chanIdDevMap[VAR_8];





 switch (VAR_7[0]) {
 case 129:
  VAR_11 = VAR_1;
  VAR_10 |= 1 << VAR_8;
  break;
 case 130:
  VAR_11 = VAR_0;
  VAR_10 &= ~(1 << VAR_8);
  break;
 case 128:
  VAR_7[1] =
      (VAR_10 & (1 << VAR_8)) ? VAR_1 : VAR_0;
  return VAR_6->n;
  break;
 default:
  return -VAR_2;
  break;
 }

 VAR_8 -= VAR_12->chanid_offset;
 VAR_9 = FUNC_1(VAR_12->dev, VAR_12->subdev, VAR_8, VAR_11);
 if (VAR_9 != 1)
  return -VAR_2;


 VAR_5->io_bits = VAR_10;
 return VAR_6->n;
}
