
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu {int ctx_lowest_free; int ctx_bitmap; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct iommu *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_1)) {
  FUNC_0(VAR_1, VAR_0->ctx_bitmap);
  if (VAR_1 < VAR_0->ctx_lowest_free)
   VAR_0->ctx_lowest_free = VAR_1;
 }
}
