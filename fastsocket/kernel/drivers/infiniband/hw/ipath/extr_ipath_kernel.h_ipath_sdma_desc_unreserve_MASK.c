
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ipath_devdata {int ipath_sdma_desc_nreserved; } ;



__attribute__((used)) static inline void FUNC_0(struct ipath_devdata *VAR_0, u16 VAR_1)
{
 VAR_0->ipath_sdma_desc_nreserved -= VAR_1;
}
