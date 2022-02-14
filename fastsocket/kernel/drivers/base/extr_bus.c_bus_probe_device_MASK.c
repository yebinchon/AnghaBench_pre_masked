
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct bus_type* bus; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_2__ {scalar_t__ drivers_autoprobe; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct device *VAR_0)
{
 struct bus_type *VAR_1 = VAR_0->bus;
 int VAR_2;

 if (VAR_1 && VAR_1->p->drivers_autoprobe) {
  VAR_2 = FUNC_1(VAR_0);
  FUNC_0(VAR_2 < 0);
 }
}
