
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* bus; } ;
typedef int pm_message_t ;
struct TYPE_2__ {scalar_t__ pm; } ;


 int FUNC_0 (struct device*,int ,char*) ;
 int FUNC_1 (struct device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, pm_message_t VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0->bus)
  return 0;

 if (VAR_0->bus->pm) {
  FUNC_0(VAR_0, VAR_1, "LATE ");
  VAR_2 = FUNC_1(VAR_0, VAR_0->bus->pm, VAR_1);
 }
 return VAR_2;
}
