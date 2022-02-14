
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct egpio_info {int bus_shift; scalar_t__ base_addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct egpio_info *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->base_addr + (VAR_1 << VAR_0->bus_shift));
}
