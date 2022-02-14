
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(const struct skge_hw *VAR_1)
{
 return (VAR_1->chip_id == VAR_0) ? 53125 : 78125;
}
