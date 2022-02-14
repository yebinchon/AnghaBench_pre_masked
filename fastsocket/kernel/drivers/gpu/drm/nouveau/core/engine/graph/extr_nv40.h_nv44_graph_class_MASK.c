
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_device {int chipset; } ;


 struct nouveau_device* FUNC_0 (void*) ;

__attribute__((used)) static inline int
FUNC_1(void *VAR_0)
{
 struct nouveau_device *VAR_1 = FUNC_0(VAR_0);

 if ((VAR_1->chipset & 0xf0) == 0x60)
  return 1;

 return !(0x0baf & (1 << (VAR_1->chipset & 0x0f)));
}
