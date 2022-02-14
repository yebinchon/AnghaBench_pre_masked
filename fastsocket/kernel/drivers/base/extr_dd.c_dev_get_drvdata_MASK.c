
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* p; } ;
struct TYPE_2__ {void* driver_data; } ;



void *FUNC_0(const struct device *VAR_0)
{
 if (VAR_0 && VAR_0->p)
  return VAR_0->p->driver_data;
 return ((void*)0);
}
