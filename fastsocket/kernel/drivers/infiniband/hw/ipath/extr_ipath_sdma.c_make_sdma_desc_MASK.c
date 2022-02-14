
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ipath_devdata {unsigned long long ipath_sdma_generation; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct ipath_devdata *VAR_0,
 u64 *VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_2 & 3);

 VAR_1[1] = VAR_2 >> 32;

 VAR_1[0] = (VAR_2 & 0xfffffffcULL) << 32;

 VAR_1[0] |= (VAR_0->ipath_sdma_generation & 3ULL) << 30;

 VAR_1[0] |= (VAR_3 & 0x7ffULL) << 16;

 VAR_1[0] |= VAR_4 & 0x7ffULL;
}
