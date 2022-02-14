
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ timer_divisor_2; scalar_t__ timer_divisor_1; int lcr_io_base; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int ,int,int,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2)
{


 FUNC_4(VAR_0->lcr_io_base, 1, 1, 1,
      1, 0);

 FUNC_3(VAR_2, VAR_1);
 FUNC_1(VAR_2, 0);
 FUNC_0(VAR_2, 0);



 VAR_0->timer_divisor_1 = 0;
 VAR_0->timer_divisor_2 = 0;

 FUNC_2(VAR_2);

 return 0;
}
