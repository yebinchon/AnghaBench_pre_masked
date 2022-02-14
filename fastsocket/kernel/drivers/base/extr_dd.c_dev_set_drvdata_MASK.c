
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* p; } ;
struct TYPE_2__ {void* driver_data; } ;


 int FUNC_0 (struct device*) ;

void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return;
 if (!VAR_0->p) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2)
   return;
 }
 VAR_0->p->driver_data = VAR_1;
}
