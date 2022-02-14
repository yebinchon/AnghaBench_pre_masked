
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; } ;
struct TYPE_3__ {int chanspec; } ;
struct TYPE_4__ {scalar_t__ main_iobase; int hw_config_bits; TYPE_1__ ext_clock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_6,
         const struct comedi_cmd *VAR_7)
{

 FUNC_1(VAR_6)->hw_config_bits &= ~VAR_4;
 if (VAR_7->scan_begin_src == VAR_5) {
  int VAR_8 = FUNC_1(VAR_6)->ext_clock.chanspec;

  if (FUNC_0(VAR_8))
   FUNC_1(VAR_6)->hw_config_bits |= VAR_0;
  else
   FUNC_1(VAR_6)->hw_config_bits |= VAR_1;
 } else {
  FUNC_1(VAR_6)->hw_config_bits |= VAR_3;
 }
 FUNC_2(FUNC_1(VAR_6)->hw_config_bits,
        FUNC_1(VAR_6)->main_iobase + VAR_2);
}
