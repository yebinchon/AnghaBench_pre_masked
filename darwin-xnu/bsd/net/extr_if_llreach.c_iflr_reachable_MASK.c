
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
struct if_llreach {scalar_t__ lr_lastrcvd; scalar_t__ lr_reachable; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static __inline int
FUNC_1(struct if_llreach *VAR_0, int VAR_1, u_int64_t VAR_2)
{
 u_int64_t VAR_3;
 u_int64_t VAR_4;

 VAR_3 = FUNC_0();



 VAR_4 = VAR_0->lr_lastrcvd + VAR_0->lr_reachable;





 if (!VAR_1)
  return (VAR_4 >= VAR_3);






 return ((VAR_4 >= VAR_3) && (VAR_3 - VAR_2) < VAR_0->lr_reachable);
}
