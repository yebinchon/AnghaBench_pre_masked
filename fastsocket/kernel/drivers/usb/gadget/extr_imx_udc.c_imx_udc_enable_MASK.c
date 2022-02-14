
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct imx_udc_struct {TYPE_1__ gadget; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct imx_udc_struct *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4->base + VAR_2);
 FUNC_1(VAR_5 | VAR_1 | VAR_0,
      VAR_4->base + VAR_2);
 VAR_4->gadget.speed = VAR_3;
}
