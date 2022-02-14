
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_mc_hash {int low; int high; } ;



__attribute__((used)) static inline void FUNC_0(struct zd_mc_hash *VAR_0, u8 *VAR_1)
{
 unsigned int VAR_2 = VAR_1[5] >> 2;
 if (VAR_2 < 32) {
  VAR_0->low |= 1 << VAR_2;
 } else {
  VAR_0->high |= 1 << (VAR_2-32);
 }
}
