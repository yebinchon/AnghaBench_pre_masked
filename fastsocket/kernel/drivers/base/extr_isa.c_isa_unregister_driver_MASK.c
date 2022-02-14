
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isa_driver {int driver; struct device* devices; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* next; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct device*) ;

void FUNC_3(struct isa_driver *VAR_0)
{
 struct device *VAR_1 = VAR_0->devices;

 while (VAR_1) {
  struct device *VAR_2 = FUNC_2(VAR_1)->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_1(&VAR_0->driver);
}
