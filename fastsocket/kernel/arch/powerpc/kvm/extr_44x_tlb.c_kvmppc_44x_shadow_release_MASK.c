
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_44x {struct kvmppc_44x_shadow_ref* shadow_refs; } ;
struct kvmppc_44x_shadow_ref {int * page; scalar_t__ writeable; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct kvmppc_vcpu_44x *VAR_0,
                                      unsigned int VAR_1)
{
 struct kvmppc_44x_shadow_ref *VAR_2 = &VAR_0->shadow_refs[VAR_1];

 if (!VAR_2->page)
  return;




 FUNC_2(VAR_1);


 if (VAR_2->writeable)
  FUNC_1(VAR_2->page);
 else
  FUNC_0(VAR_2->page);

 VAR_2->page = ((void*)0);



 FUNC_3(VAR_1);
}
