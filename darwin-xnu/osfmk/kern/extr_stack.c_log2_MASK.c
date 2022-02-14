
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;



__attribute__((used)) static inline int
FUNC_0(vm_offset_t VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_0 > 0; VAR_1++)
  VAR_0 >>= 1;
 return VAR_1;
}
