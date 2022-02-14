
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int aobits; } ;
struct TYPE_3__ {unsigned int* ao; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
     struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_8;

 FUNC_2(1 << VAR_7, VAR_0);
 VAR_8 = 1 << (VAR_1.aobits - 1);

 FUNC_3(VAR_3, VAR_4, &VAR_5->chanspec, 1, 0);

 VAR_2->ao[VAR_7] = VAR_6[0];
 FUNC_2(VAR_6[0] ^ VAR_8, FUNC_1(VAR_7));

 return 1;
}
