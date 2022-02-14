
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* v_hwdrv_Interrupt ) (int,void*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,void*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct comedi_device *VAR_3 = VAR_2;
 VAR_0->v_hwdrv_Interrupt(VAR_1, VAR_2);
 return FUNC_0(1);
}
