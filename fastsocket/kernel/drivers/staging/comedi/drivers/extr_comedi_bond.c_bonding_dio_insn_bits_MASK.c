
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct BondedDevice {int nchans; int subdev; int dev; } ;
struct TYPE_2__ {unsigned int nchans; unsigned int ndevs; struct BondedDevice** devs; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
     struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{

 unsigned VAR_7 = (sizeof(unsigned int)*8), VAR_8 = 0, VAR_9;
 if (VAR_5->n != 2)
  return -VAR_0;

 if (VAR_2->nchans < VAR_7)
  VAR_7 = VAR_2->nchans;



 for (VAR_9 = 0; VAR_8 < VAR_7 && VAR_9 < VAR_2->ndevs; ++VAR_9) {
  struct BondedDevice *VAR_10 = VAR_2->devs[VAR_9];




  unsigned int VAR_11 = ((1 << VAR_10->nchans) - 1);
  unsigned int VAR_12, VAR_13;


  if (VAR_10->nchans >= (sizeof(unsigned int)*8))
   VAR_11 = (unsigned int)(-1);

  VAR_12 = (VAR_6[0] >> VAR_8) & VAR_11;
  VAR_13 = (VAR_6[1] >> VAR_8) & VAR_11;


  if (FUNC_0(VAR_10->dev, VAR_10->subdev, VAR_12,
     &VAR_13) != 2)
   return -VAR_0;


  VAR_6[1] &= ~(VAR_11 << VAR_8);

  VAR_6[1] |= (VAR_13 & VAR_11) << VAR_8;

  VAR_4->state = VAR_6[1];

  VAR_8 += VAR_10->nchans;
 }

 return VAR_5->n;
}
