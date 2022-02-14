
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
typedef TYPE_1__ DeviceTreeNodeProperty ;


 scalar_t__ FUNC_0 (uintptr_t,int ,int,uintptr_t*) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;

__attribute__((used)) static inline DeviceTreeNodeProperty*
FUNC_2(DeviceTreeNodeProperty* VAR_0)
{
 uintptr_t VAR_1;
 if (FUNC_0((uintptr_t)VAR_0, VAR_0->length, sizeof(DeviceTreeNodeProperty) + 3, &VAR_1))
  FUNC_1("Device tree property overflow: prop %p, length 0x%x\n", VAR_0, VAR_0->length);
 VAR_1 &= ~(3ULL);
 return (DeviceTreeNodeProperty*)VAR_1;
}
