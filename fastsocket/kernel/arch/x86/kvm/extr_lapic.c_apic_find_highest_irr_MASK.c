
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic {int irr_pending; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_lapic*) ;

__attribute__((used)) static inline int FUNC_2(struct kvm_lapic *VAR_0)
{
 int VAR_1;

 if (!VAR_0->irr_pending)
  return -1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1 == -1 || VAR_1 >= 16);

 return VAR_1;
}
