
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int clock_and_fout; int (* stc_writew ) (struct comedi_device*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5,
      struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 VAR_3->clock_and_fout &= ~VAR_2;
 VAR_3->stc_writew(VAR_4, VAR_3->clock_and_fout,
       VAR_0);
 VAR_3->clock_and_fout &= ~VAR_1;
 VAR_3->clock_and_fout |= FUNC_0(VAR_7[0]);
 VAR_3->clock_and_fout |= VAR_2;
 VAR_3->stc_writew(VAR_4, VAR_3->clock_and_fout,
       VAR_0);
 return VAR_6->n;
}
