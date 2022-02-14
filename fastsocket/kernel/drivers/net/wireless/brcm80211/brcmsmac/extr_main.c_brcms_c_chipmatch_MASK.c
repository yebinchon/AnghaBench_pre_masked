
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcma_device {TYPE_1__* bus; } ;
struct TYPE_2__ {int hosttype; } ;




 int FUNC_0 (struct bcma_device*) ;
 int FUNC_1 (struct bcma_device*) ;
 int FUNC_2 (char*,int) ;

bool FUNC_3(struct bcma_device *VAR_0)
{
 switch (VAR_0->bus->hosttype) {
 case 129:
  return FUNC_0(VAR_0);
 case 128:
  return FUNC_1(VAR_0);
 default:
  FUNC_2("unknown host type: %i\n", VAR_0->bus->hosttype);
  return 0;
 }
}
