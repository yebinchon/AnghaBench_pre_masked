
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {int gcmd; int register_lock; scalar_t__ reg; void* root_entry; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_iommu*,int ,int ,int,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct intel_iommu *VAR_6)
{
 void *VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;

 VAR_7 = VAR_6->root_entry;

 FUNC_2(&VAR_6->register_lock, VAR_9);
 FUNC_1(VAR_6->reg + VAR_2, FUNC_4(VAR_7));

 FUNC_5(VAR_6->gcmd | VAR_3, VAR_6->reg + VAR_0);


 FUNC_0(VAR_6, VAR_1,
        VAR_5, (VAR_8 & VAR_4), VAR_8);

 FUNC_3(&VAR_6->register_lock, VAR_9);
}
