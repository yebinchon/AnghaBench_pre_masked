
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int en; } ;
union cvmx_pip_tag_incx {int u64; TYPE_1__ s; } ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(uint64_t VAR_0, uint64_t VAR_1,
      uint64_t VAR_2)
{
 while (VAR_2--) {
  union cvmx_pip_tag_incx VAR_3;
  uint64_t VAR_4 = VAR_0 * 16 + VAR_1 / 8;
  VAR_3.u64 = FUNC_1(FUNC_0(VAR_4));
  VAR_3.s.en |= 0x80 >> (VAR_1 & 0x7);
  FUNC_2(FUNC_0(VAR_4), VAR_3.u64);
  VAR_1++;
 }
}
