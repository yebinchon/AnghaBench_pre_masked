
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct bcma_device {TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (struct bcma_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct bcma_device *VAR_0, u16 VAR_1)
{
 VAR_1 += FUNC_0(VAR_0);
 return FUNC_1(VAR_0->bus->mmio + VAR_1);
}
