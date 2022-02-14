
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_pcl {int dummy; } ;
struct ti_lynx {scalar_t__ pcl_mem; } ;
typedef int pcl_t ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(const struct ti_lynx *VAR_0, pcl_t VAR_1,
                           struct ti_pcl *VAR_2)
{
        FUNC_0((u32 *)VAR_2,
                    (u32 *)(VAR_0->pcl_mem + VAR_1 * sizeof(struct ti_pcl)),
                    sizeof(struct ti_pcl));
}
