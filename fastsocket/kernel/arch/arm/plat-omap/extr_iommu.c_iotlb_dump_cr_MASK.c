
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu {int dummy; } ;
struct cr_regs {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* dump_cr ) (struct iommu*,struct cr_regs*,char*) ;} ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct iommu*,struct cr_regs*,char*) ;

__attribute__((used)) static inline ssize_t FUNC_2(struct iommu *VAR_1, struct cr_regs *VAR_2,
        char *VAR_3)
{
 FUNC_0(!VAR_2 || !VAR_3);

 return VAR_0->dump_cr(VAR_1, VAR_2, VAR_3);
}
