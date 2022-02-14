
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;


 int VAR_0 ;
 struct kvm* FUNC_0 (int ) ;
 int VAR_1 ;
 struct kvm* FUNC_1 (int,int ) ;

struct kvm *FUNC_2(void)
{
 struct kvm *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct kvm), VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 return VAR_2;
}
