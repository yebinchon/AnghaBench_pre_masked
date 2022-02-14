
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {unsigned int n_chan; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int reg_type; } ;
struct TYPE_3__ {int ao_cmd1; int ao_cmd2; int ao_mode1; int ao_mode2; int ao_mode3; int ao_trigger_select; int (* stc_writew ) (struct comedi_device*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (unsigned int,int ) ;
 TYPE_2__ VAR_22 ;
 TYPE_1__* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;
 int FUNC_6 (struct comedi_device*,int,int ) ;
 int FUNC_7 (struct comedi_device*,int,int ) ;
 int FUNC_8 (struct comedi_device*,int,int ) ;
 int FUNC_9 (struct comedi_device*,int,int ) ;
 int FUNC_10 (struct comedi_device*,int,int ) ;
 int FUNC_11 (struct comedi_device*,int,int ) ;
 int FUNC_12 (struct comedi_device*,int,int ) ;
 int FUNC_13 (struct comedi_device*,int,int ) ;
 int FUNC_14 (struct comedi_device*,int,int ) ;
 int FUNC_15 (struct comedi_device*,int,int ) ;
 int FUNC_16 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_17(struct comedi_device *VAR_26, struct comedi_subdevice *VAR_27)
{






 FUNC_1(VAR_26);

 VAR_23->stc_writew(VAR_26, VAR_4, VAR_21);
 VAR_23->stc_writew(VAR_26, VAR_5, VAR_1);
 FUNC_2(VAR_26, VAR_20, ~0, 0);
 VAR_23->stc_writew(VAR_26, VAR_0, VAR_13);
 VAR_23->stc_writew(VAR_26, 0x3f98, VAR_19);
 VAR_23->stc_writew(VAR_26, VAR_0 | VAR_17 |
       VAR_15, VAR_13);
 VAR_23->stc_writew(VAR_26, 0, VAR_12);
 VAR_23->stc_writew(VAR_26, 0, VAR_14);
 VAR_23->ao_cmd1 = 0;
 VAR_23->stc_writew(VAR_26, VAR_23->ao_cmd1, VAR_1);
 VAR_23->ao_cmd2 = 0;
 VAR_23->stc_writew(VAR_26, VAR_23->ao_cmd2, VAR_2);
 VAR_23->ao_mode1 = 0;
 VAR_23->stc_writew(VAR_26, VAR_23->ao_mode1, VAR_9);
 VAR_23->ao_mode2 = 0;
 VAR_23->stc_writew(VAR_26, VAR_23->ao_mode2, VAR_10);
 if (VAR_22.reg_type & VAR_25)
  VAR_23->ao_mode3 = VAR_7;
 else
  VAR_23->ao_mode3 = 0;
 VAR_23->stc_writew(VAR_26, VAR_23->ao_mode3, VAR_11);
 VAR_23->ao_trigger_select = 0;
 VAR_23->stc_writew(VAR_26, VAR_23->ao_trigger_select,
       VAR_16);
 if (VAR_22.reg_type & VAR_24) {
  unsigned VAR_28 = 0;
  unsigned VAR_29;
  for (VAR_29 = 0; VAR_29 < VAR_27->n_chan; ++VAR_29) {
   VAR_28 |= 1 << VAR_29;
  }
  FUNC_0(VAR_28, VAR_6);
  FUNC_0(VAR_18, VAR_8);
 }
 VAR_23->stc_writew(VAR_26, VAR_3, VAR_21);

 return 0;
}
