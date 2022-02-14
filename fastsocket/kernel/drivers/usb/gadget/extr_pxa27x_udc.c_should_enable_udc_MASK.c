
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_udc {int transceiver; scalar_t__ vbus_sensed; scalar_t__ driver; scalar_t__ pullup_on; } ;



__attribute__((used)) static int FUNC_0(struct pxa_udc *VAR_0)
{
 int VAR_1;

 VAR_1 = ((VAR_0->pullup_on) && (VAR_0->driver));
 VAR_1 &= ((VAR_0->vbus_sensed) || (!VAR_0->transceiver));
 return VAR_1;
}
