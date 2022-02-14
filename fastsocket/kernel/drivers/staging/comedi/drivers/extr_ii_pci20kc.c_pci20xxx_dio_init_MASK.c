
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; scalar_t__ io_bits; int * range_table; int insn_config; int insn_bits; int type; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7)
{

 VAR_7->type = VAR_0;
 VAR_7->subdev_flags = VAR_1 | VAR_2;
 VAR_7->n_chan = 32;
 VAR_7->insn_bits = VAR_3;
 VAR_7->insn_config = VAR_4;
 VAR_7->maxdata = 1;
 VAR_7->len_chanlist = 32;
 VAR_7->range_table = &VAR_5;
 VAR_7->io_bits = 0;


 FUNC_0(VAR_6, VAR_7);

 return 0;
}
