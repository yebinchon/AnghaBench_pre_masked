
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct bcma_bus {scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct bcma_bus *VAR_0, u8 VAR_1,
         u16 VAR_2)
{
 return FUNC_0(VAR_0->mmio + VAR_2);
}
