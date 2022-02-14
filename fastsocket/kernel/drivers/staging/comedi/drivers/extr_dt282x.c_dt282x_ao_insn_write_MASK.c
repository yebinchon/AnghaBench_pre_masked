
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {int dabits; } ;
struct TYPE_3__ {short* ao; scalar_t__ da1_2scomp; int dacsr; scalar_t__ da0_2scomp; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (short,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 short VAR_10;
 unsigned int VAR_11;

 VAR_11 = FUNC_0(VAR_8->chanspec);
 VAR_10 = VAR_9[0];
 VAR_10 &= (1 << VAR_4.dabits) - 1;
 VAR_5->ao[VAR_11] = VAR_10;

 VAR_5->dacsr |= VAR_2;

 if (VAR_11) {

  VAR_5->dacsr |= VAR_3;
  if (VAR_5->da0_2scomp)
   VAR_10 ^= (1 << (VAR_4.dabits - 1));
 } else {
  VAR_5->dacsr &= ~VAR_3;
  if (VAR_5->da1_2scomp)
   VAR_10 ^= (1 << (VAR_4.dabits - 1));
 }

 FUNC_2(0);

 FUNC_1(VAR_10, VAR_6->iobase + VAR_1);

 FUNC_3(VAR_0);

 return 1;
}
