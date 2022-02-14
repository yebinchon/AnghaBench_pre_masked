
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
struct TYPE_2__ {scalar_t__ main_iobase; int dac_control1_bits; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int *,int,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_2,
     const struct comedi_cmd *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->chanlist_len; VAR_4++) {
  int VAR_5, VAR_6;

  VAR_5 = FUNC_0(VAR_3->chanlist[VAR_4]);
  VAR_6 = FUNC_1(VAR_3->chanlist[VAR_4]);
  FUNC_3(VAR_2, &FUNC_2(VAR_2)->dac_control1_bits, VAR_5,
       VAR_6);
 }
 FUNC_2(VAR_2)->dac_control1_bits |= VAR_1;
 FUNC_4(FUNC_2(VAR_2)->dac_control1_bits,
        FUNC_2(VAR_2)->main_iobase + VAR_0);
}
