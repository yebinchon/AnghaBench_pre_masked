
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {int range_correction; int old_chan_reg; int old_gain_reg; int mode_reg_int; } ;
struct TYPE_3__ {int board_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct comedi_device*,int,int ,int ) ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_12)
{



 FUNC_0(0, VAR_12->iobase + VAR_9);
 FUNC_0(0 + VAR_10->range_correction, VAR_12->iobase + VAR_7);
 VAR_10->old_chan_reg = -1;
 VAR_10->old_gain_reg = -1;

 switch (VAR_11->board_type) {
 case 130:
 case 131:
 case 135:
 case 133:
  FUNC_0(0, VAR_12->iobase + VAR_4);
  FUNC_0(0, VAR_12->iobase + VAR_3);
 case 136:
  FUNC_0(0, VAR_12->iobase + VAR_2);
  FUNC_0(0, VAR_12->iobase + VAR_1);
  FUNC_2(VAR_12, -1, 0, 0);
  FUNC_0(0, VAR_12->iobase + VAR_5);
  FUNC_0(0, VAR_12->iobase + VAR_6);
  FUNC_0(VAR_10->mode_reg_int | 0, VAR_12->iobase + VAR_8);
  FUNC_0(0, VAR_12->iobase + VAR_0);
  break;
 case 128:
 case 129:
 case 132:
 case 134:
  FUNC_3(5);
  break;
 }
 FUNC_3(5);



}
