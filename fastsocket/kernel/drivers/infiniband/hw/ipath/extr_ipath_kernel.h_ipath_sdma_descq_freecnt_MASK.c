
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipath_devdata {int ipath_sdma_descq_cnt; int ipath_sdma_descq_added; int ipath_sdma_descq_removed; int ipath_sdma_desc_nreserved; } ;



__attribute__((used)) static inline u16 FUNC_0(const struct ipath_devdata *VAR_0)
{
 return VAR_0->ipath_sdma_descq_cnt -
  (VAR_0->ipath_sdma_descq_added - VAR_0->ipath_sdma_descq_removed) -
  1 - VAR_0->ipath_sdma_desc_nreserved;
}
