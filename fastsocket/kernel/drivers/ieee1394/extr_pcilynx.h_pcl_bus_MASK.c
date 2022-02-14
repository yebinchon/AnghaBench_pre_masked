
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ti_pcl {int dummy; } ;
struct ti_lynx {scalar_t__ pcl_mem_dma; } ;
typedef int pcl_t ;



__attribute__((used)) static inline u32 FUNC_0(const struct ti_lynx *VAR_0, pcl_t VAR_1)
{
        return VAR_0->pcl_mem_dma + VAR_1 * sizeof(struct ti_pcl);
}
