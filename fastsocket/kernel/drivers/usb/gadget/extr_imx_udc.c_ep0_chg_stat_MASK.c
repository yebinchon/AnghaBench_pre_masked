
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_udc_struct {size_t ep0state; int dev; } ;
typedef enum ep0_state { ____Placeholder_ep0_state } ep0_state ;


 int FUNC_0 (int ,char*,char const*,int ,int ) ;
 int * VAR_0 ;

void FUNC_1(const char *VAR_1,
   struct imx_udc_struct *VAR_2, enum ep0_state VAR_3)
{
 FUNC_0(VAR_2->dev, "<%s> from %15s to %15s\n",
  VAR_1, VAR_0[VAR_2->ep0state], VAR_0[VAR_3]);

 if (VAR_2->ep0state == VAR_3)
  return;

 VAR_2->ep0state = VAR_3;
}
