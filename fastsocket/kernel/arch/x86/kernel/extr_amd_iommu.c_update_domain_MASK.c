
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int updated; int id; } ;


 int FUNC_0 (struct protection_domain*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct protection_domain*) ;

__attribute__((used)) static void FUNC_3(struct protection_domain *VAR_0)
{
 if (!VAR_0->updated)
  return;

 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->id);

 VAR_0->updated = 0;
}
