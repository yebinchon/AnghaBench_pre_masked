
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_device {int chipset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct nouveau_device* FUNC_0 (void*) ;
 int FUNC_1 (struct nouveau_device*,int,int) ;

__attribute__((used)) static unsigned int
FUNC_2(void *VAR_4, bool VAR_5)
{
 struct nouveau_device *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->chipset >= 0x40)
  FUNC_1(VAR_6, 0x088054, VAR_5);
 else
  FUNC_1(VAR_6, 0x001854, VAR_5);

 if (VAR_5)
  return VAR_0 | VAR_1 |
         VAR_2 | VAR_3;
 else
  return VAR_2 | VAR_3;
}
