
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int minor; } ;
struct TYPE_2__ {scalar_t__ is_8112; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (char*,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9,
     struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_2(VAR_8, VAR_10->chanspec);

 for (VAR_13 = 0; VAR_13 < VAR_10->n; VAR_13++) {




  FUNC_1(1, VAR_8->iobase + VAR_4);

  if (VAR_7->is_8112) {
  } else {
   FUNC_1(0, VAR_8->iobase + VAR_5);
  }

  VAR_12 = VAR_6;
  while (--VAR_12) {
   VAR_14 = FUNC_0(VAR_8->iobase + VAR_1);
   if (!(VAR_14 & VAR_3))
    goto ok;
   FUNC_4(1);
  }
  FUNC_3("comedi%d: pcl711: A/D timeout\n", VAR_8->minor);
  return -VAR_0;

ok:
  VAR_15 = FUNC_0(VAR_8->iobase + VAR_2);

  VAR_11[VAR_13] = ((VAR_14 & 0xf) << 8) | VAR_15;
 }

 return VAR_13;
}
