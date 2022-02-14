
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int reg_type; } ;
struct TYPE_3__ {unsigned int* ao; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int *,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6,
       struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_7->chanspec);
 unsigned int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_6, &VAR_7->chanspec, 1, 0);

 VAR_3->ao[VAR_9] = VAR_8[0];

 if (VAR_2.reg_type & VAR_4) {
  FUNC_3(VAR_8[0], FUNC_1(VAR_9));
 } else
  FUNC_3(VAR_8[0] ^ VAR_10,
     (VAR_9) ? VAR_1 : VAR_0);

 return 1;
}
