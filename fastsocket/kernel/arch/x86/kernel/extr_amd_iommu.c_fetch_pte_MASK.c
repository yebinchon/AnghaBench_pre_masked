
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {int mode; int * pt_root; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static u64 *FUNC_4(struct protection_domain *VAR_0,
        unsigned long VAR_1, int VAR_2)
{
 int VAR_3;
 u64 *VAR_4;

 VAR_3 = VAR_0->mode - 1;
 VAR_4 = &VAR_0->pt_root[FUNC_2(VAR_3, VAR_1)];

 while (VAR_3 > VAR_2) {
  if (!FUNC_1(*VAR_4))
   return ((void*)0);

  VAR_3 -= 1;

  VAR_4 = FUNC_0(*VAR_4);
  VAR_4 = &VAR_4[FUNC_2(VAR_3, VAR_1)];

  if ((FUNC_3(*VAR_4) == 0) && VAR_3 != VAR_2) {
   VAR_4 = ((void*)0);
   break;
  }
 }

 return VAR_4;
}
