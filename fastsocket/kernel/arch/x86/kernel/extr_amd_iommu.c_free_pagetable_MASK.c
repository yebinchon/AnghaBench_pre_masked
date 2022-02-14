
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {int * pt_root; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct protection_domain *VAR_0)
{
 int VAR_1, VAR_2;
 u64 *VAR_3, *VAR_4, *VAR_5;

 VAR_3 = VAR_0->pt_root;

 if (!VAR_3)
  return;

 for (VAR_1 = 0; VAR_1 < 512; ++VAR_1) {
  if (!FUNC_1(VAR_3[VAR_1]))
   continue;

  VAR_4 = FUNC_0(VAR_3[VAR_1]);
  for (VAR_2 = 0; VAR_2 < 512; ++VAR_2) {
   if (!FUNC_1(VAR_4[VAR_2]))
    continue;
   VAR_5 = FUNC_0(VAR_4[VAR_2]);
   FUNC_2((unsigned long)VAR_5);
  }

  FUNC_2((unsigned long)VAR_4);
 }

 FUNC_2((unsigned long)VAR_3);

 VAR_0->pt_root = ((void*)0);
}
