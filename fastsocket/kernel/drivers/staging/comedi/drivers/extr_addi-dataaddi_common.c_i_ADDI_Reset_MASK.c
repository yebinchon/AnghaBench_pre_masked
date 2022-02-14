
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int (* i_hwdrv_Reset ) (struct comedi_device*) ;} ;


 int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1)
{

 VAR_0->i_hwdrv_Reset(VAR_1);
 return 0;
}
