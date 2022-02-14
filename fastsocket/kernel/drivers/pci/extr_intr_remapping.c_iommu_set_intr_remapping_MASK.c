
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_iommu {int register_lock; scalar_t__ reg; int gcmd; TYPE_1__* ir_table; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct intel_iommu*,int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct intel_iommu*) ;
 int VAR_8 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct intel_iommu *VAR_9, int VAR_10)
{
 u64 VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;

 VAR_11 = FUNC_6((void *)VAR_9->ir_table->base);

 FUNC_4(&VAR_9->register_lock, VAR_13);

 FUNC_2(VAR_9->reg + VAR_2,
      (VAR_11) | FUNC_1(VAR_10) | VAR_7);


 VAR_9->gcmd |= VAR_4;
 FUNC_7(VAR_9->gcmd, VAR_9->reg + VAR_0);

 FUNC_0(VAR_9, VAR_1,
        VAR_8, (VAR_12 & VAR_6), VAR_12);
 FUNC_5(&VAR_9->register_lock, VAR_13);





 FUNC_3(VAR_9);

 FUNC_4(&VAR_9->register_lock, VAR_13);


 VAR_9->gcmd |= VAR_3;
 FUNC_7(VAR_9->gcmd, VAR_9->reg + VAR_0);

 FUNC_0(VAR_9, VAR_1,
        VAR_8, (VAR_12 & VAR_5), VAR_12);

 FUNC_5(&VAR_9->register_lock, VAR_13);
}
