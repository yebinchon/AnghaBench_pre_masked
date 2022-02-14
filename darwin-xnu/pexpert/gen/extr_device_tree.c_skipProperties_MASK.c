
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nProperties; } ;
typedef TYPE_1__* RealDTEntry ;
typedef int DeviceTreeNodeProperty ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static RealDTEntry
FUNC_1(RealDTEntry VAR_0)
{
 DeviceTreeNodeProperty *VAR_1;
 unsigned int VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->nProperties == 0) {
  return ((void*)0);
 } else {
  VAR_1 = (DeviceTreeNodeProperty *) (VAR_0 + 1);
  for (VAR_2 = 0; VAR_2 < VAR_0->nProperties; VAR_2++) {
   VAR_1 = FUNC_0(VAR_1);
  }
 }
 return ((RealDTEntry) VAR_1);
}
