
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int kvm; } ;
struct vcpu_svm {TYPE_1__ vcpu; } ;
struct page {int dummy; } ;
typedef enum km_type { ____Placeholder_km_type } km_type ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 void* FUNC_2 (struct page*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static void *FUNC_5(struct vcpu_svm *VAR_1, u64 VAR_2, enum km_type VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_0(VAR_1->vcpu.kvm, VAR_2 >> VAR_0);
 if (FUNC_1(VAR_4))
  goto error;

 return FUNC_2(VAR_4, VAR_3);

error:
 FUNC_4(VAR_4);
 FUNC_3(&VAR_1->vcpu, 0);

 return ((void*)0);
}
