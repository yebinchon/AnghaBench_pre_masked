
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {int execute; } ;



__attribute__((used)) static inline bool
FUNC_0(struct nvbios_init *VAR_0)
{
 return (VAR_0->execute == 1) || ((VAR_0->execute & 5) == 5);
}
