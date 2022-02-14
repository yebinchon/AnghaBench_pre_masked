
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* bus; } ;
typedef int pm_message_t ;
struct TYPE_2__ {scalar_t__ pm; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,int ,char*) ;
 int FUNC_3 (struct device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, pm_message_t VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0);
 FUNC_1(0);

 if (!VAR_0->bus)
  goto End;

 if (VAR_0->bus->pm) {
  FUNC_2(VAR_0, VAR_1, "EARLY ");
  VAR_2 = FUNC_3(VAR_0, VAR_0->bus->pm, VAR_1);
 }
 End:
 FUNC_1(VAR_2);
 return VAR_2;
}
