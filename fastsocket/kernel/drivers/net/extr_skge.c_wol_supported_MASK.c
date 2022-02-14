
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {scalar_t__ chip_id; scalar_t__ chip_rev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(const struct skge_hw *VAR_4)
{
 if (VAR_4->chip_id == VAR_0)
  return 0;

 if (VAR_4->chip_id == VAR_1 && VAR_4->chip_rev == 0)
  return 0;

 return VAR_2 | VAR_3;
}
