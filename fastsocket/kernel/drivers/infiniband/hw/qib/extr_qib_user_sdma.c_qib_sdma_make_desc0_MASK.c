
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u8 ;
typedef int u64 ;
struct qib_pportdata {unsigned long long sdma_generation; } ;
typedef int __le64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline __le64 FUNC_1(struct qib_pportdata *VAR_0,
      u64 VAR_1, u64 VAR_2, u64 VAR_3)
{
 u8 VAR_4;

 VAR_4 = VAR_0->sdma_generation;

 return FUNC_0(
      ((VAR_1 & 0xfffffffcULL) << 32) |

      ((VAR_4 & 3ULL) << 30) |

      ((VAR_2 & 0x7ffULL) << 16) |

      (VAR_3 & 0x7ffULL));
}
