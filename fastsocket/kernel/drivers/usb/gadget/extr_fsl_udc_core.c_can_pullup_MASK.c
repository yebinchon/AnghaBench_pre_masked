
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_udc {scalar_t__ vbus_active; scalar_t__ softconnect; scalar_t__ driver; } ;



__attribute__((used)) static int FUNC_0(struct fsl_udc *VAR_0)
{
 return VAR_0->driver && VAR_0->softconnect && VAR_0->vbus_active;
}
