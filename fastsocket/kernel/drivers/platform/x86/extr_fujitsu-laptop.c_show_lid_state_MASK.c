
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int rfkill_supported; int rfkill_state; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 if (!(VAR_0->rfkill_supported & 0x100))
  return FUNC_0(VAR_3, "unknown\n");
 if (VAR_0->rfkill_state & 0x100)
  return FUNC_0(VAR_3, "open\n");
 else
  return FUNC_0(VAR_3, "closed\n");
}
