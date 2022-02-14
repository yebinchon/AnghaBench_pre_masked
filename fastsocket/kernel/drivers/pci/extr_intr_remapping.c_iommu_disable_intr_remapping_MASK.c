
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {int register_lock; scalar_t__ reg; int gcmd; int ecap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_iommu*,scalar_t__,int ,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_iommu*) ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct intel_iommu *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 if (!FUNC_2(VAR_5->ecap))
  return;





 FUNC_3(VAR_5);

 FUNC_4(&VAR_5->register_lock, VAR_6);

 VAR_7 = FUNC_1(VAR_5->reg + VAR_1);
 if (!(VAR_7 & VAR_3))
  goto end;

 VAR_5->gcmd &= ~VAR_2;
 FUNC_6(VAR_5->gcmd, VAR_5->reg + VAR_0);

 FUNC_0(VAR_5, VAR_1,
        VAR_4, !(VAR_7 & VAR_3), VAR_7);

end:
 FUNC_5(&VAR_5->register_lock, VAR_6);
}
