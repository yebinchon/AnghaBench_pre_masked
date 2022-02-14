
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ control_2; scalar_t__ control_1; scalar_t__ dac_control; scalar_t__ me_regbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_5)
{

 FUNC_0(0x00, VAR_4->me_regbase + VAR_0);
 FUNC_0(0x00, VAR_4->me_regbase + VAR_1);
 FUNC_0(0x00, VAR_4->me_regbase + VAR_3);
 FUNC_0(0x00, VAR_4->me_regbase + VAR_2);


 VAR_4->dac_control = 0;
 VAR_4->control_1 = 0;
 VAR_4->control_2 = 0;

 return 0;
}
