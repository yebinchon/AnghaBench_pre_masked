
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {scalar_t__ mode; int updated; int * pt_root; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct protection_domain *VAR_1,
       gfp_t VAR_2)
{
 u64 *VAR_3;

 if (VAR_1->mode == VAR_0)

  return 0;

 VAR_3 = (void *)FUNC_1(VAR_2);
 if (!VAR_3)
  return 0;

 *VAR_3 = FUNC_0(VAR_1->mode,
     FUNC_2(VAR_1->pt_root));
 VAR_1->pt_root = VAR_3;
 VAR_1->mode += 1;
 VAR_1->updated = 1;

 return 1;
}
