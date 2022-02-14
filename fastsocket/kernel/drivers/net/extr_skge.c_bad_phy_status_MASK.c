
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_0(const struct skge_hw *VAR_5, u32 VAR_6)
{
 if (VAR_5->chip_id == VAR_0)
  return (VAR_6 & (VAR_4 | VAR_3)) != 0;
 else
  return (VAR_6 & VAR_1) ||
   (VAR_6 & VAR_2) == 0;
}
