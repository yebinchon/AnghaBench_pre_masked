
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {scalar_t__ driver; } ;



int FUNC_0(struct parisc_device *VAR_0)
{
 if (!VAR_0)
  return 0;

 if (VAR_0->driver)
  return 1;

 return 0;
}
