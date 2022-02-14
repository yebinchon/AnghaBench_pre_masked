
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_drv_cc {int capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcma_drv_cc*) ;

__attribute__((used)) static u32 FUNC_1(struct bcma_drv_cc *VAR_1)
{
 if (VAR_1->capabilities & VAR_0)
  return FUNC_0(VAR_1);

 return 20000000;
}
