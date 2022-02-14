
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ath5k_hw {int dummy; } ;


 int FUNC_0 (struct ath5k_hw*) ;

__attribute__((used)) static inline u64 FUNC_1(struct ath5k_hw *VAR_0, u32 VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_0);

 if ((VAR_2 & 0x7fff) < VAR_1)
  VAR_2 -= 0x8000;

 return (VAR_2 & ~0x7fff) | VAR_1;
}
