
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pfn_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_2, gfn_t VAR_3, pfn_t VAR_4)
{
 FUNC_3(VAR_4);
 if (FUNC_2(VAR_4)) {
  FUNC_4(FUNC_0(VAR_2, VAR_3), VAR_1);
  return 0;
 } else if (FUNC_1(VAR_4))
  return -VAR_0;

 return 1;
}
