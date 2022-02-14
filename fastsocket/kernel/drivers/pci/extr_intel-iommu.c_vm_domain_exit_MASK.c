
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int gaw; int iovad; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dmar_domain*,int ,int ) ;
 int FUNC_2 (struct dmar_domain*,int ,int ) ;
 int FUNC_3 (struct dmar_domain*) ;
 int FUNC_4 (struct dmar_domain*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dmar_domain*) ;

__attribute__((used)) static void FUNC_7(struct dmar_domain *VAR_0)
{

 if (!VAR_0)
  return;

 FUNC_6(VAR_0);

 FUNC_5(&VAR_0->iovad);


 FUNC_1(VAR_0, 0, FUNC_0(VAR_0->gaw));


 FUNC_2(VAR_0, 0, FUNC_0(VAR_0->gaw));

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
}
