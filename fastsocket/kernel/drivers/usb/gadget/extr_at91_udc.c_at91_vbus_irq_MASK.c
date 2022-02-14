
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vbus_pin; } ;
struct at91_udc {unsigned int vbus; int gadget; TYPE_1__ board; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct at91_udc *VAR_3 = VAR_2;
 unsigned VAR_4;


 FUNC_2(10);
 VAR_4 = FUNC_1(VAR_3->board.vbus_pin);
 if (VAR_4 != VAR_3->vbus)
  FUNC_0(&VAR_3->gadget, VAR_4);

 return VAR_0;
}
