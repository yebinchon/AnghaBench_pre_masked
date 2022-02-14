
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
struct TYPE_2__ {int variant; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ni_gpct const*) ;



 int FUNC_2 (struct ni_gpct const*) ;

__attribute__((used)) static unsigned FUNC_3(const struct ni_gpct *VAR_0)
{
 switch (VAR_0->counter_dev->variant) {
 case 129:
 case 128:
  return FUNC_2(VAR_0);
  break;
 case 130:
  return FUNC_1(VAR_0);
  break;
 default:
  FUNC_0();
  break;
 }
 return 0;
}
