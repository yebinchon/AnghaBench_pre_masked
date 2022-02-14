
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {int mode; int * pt_root; } ;
typedef int gfp_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int,unsigned long) ;
 int FUNC_3 (int,int ) ;
 unsigned long FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct protection_domain*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static u64 *FUNC_8(struct protection_domain *VAR_0,
        unsigned long VAR_1,
        int VAR_2,
        u64 **VAR_3,
        gfp_t VAR_4)
{
 u64 *VAR_5, *VAR_6;
 int VAR_7;

 while (VAR_1 > FUNC_4(VAR_0->mode))
  FUNC_6(VAR_0, VAR_4);

 VAR_7 = VAR_0->mode - 1;
 VAR_5 = &VAR_0->pt_root[FUNC_2(VAR_7, VAR_1)];

 while (VAR_7 > VAR_2) {
  if (!FUNC_1(*VAR_5)) {
   VAR_6 = (u64 *)FUNC_5(VAR_4);
   if (!VAR_6)
    return ((void*)0);
   *VAR_5 = FUNC_3(VAR_7, FUNC_7(VAR_6));
  }

  VAR_7 -= 1;

  VAR_5 = FUNC_0(*VAR_5);

  if (VAR_3 && VAR_7 == VAR_2)
   *VAR_3 = VAR_5;

  VAR_5 = &VAR_5[FUNC_2(VAR_7, VAR_1)];
 }

 return VAR_5;
}
