
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pcl {int dummy; } ;
struct ti_lynx {struct ti_pcl* pcl_mem; } ;
typedef int pcltmp_t ;
typedef int pcl_t ;



__attribute__((used)) static inline struct ti_pcl *FUNC_0(const struct ti_lynx *VAR_0, pcl_t VAR_1,
                                      pcltmp_t *VAR_2)
{
        return VAR_0->pcl_mem + VAR_1 * sizeof(struct ti_pcl);
}
