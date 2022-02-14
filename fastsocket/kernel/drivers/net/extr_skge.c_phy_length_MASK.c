
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct skge_hw {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u16 FUNC_0(const struct skge_hw *VAR_3, u32 VAR_4)
{
 if (VAR_3->chip_id == VAR_0)
  return VAR_4 >> VAR_2;
 else
  return VAR_4 >> VAR_1;
}
