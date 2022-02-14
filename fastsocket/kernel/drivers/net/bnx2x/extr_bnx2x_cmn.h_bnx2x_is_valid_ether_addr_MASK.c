
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline bool FUNC_4(struct bnx2x *VAR_0, u8 *VAR_1)
{
 if (FUNC_2(VAR_1) ||
     (FUNC_3(VAR_1) &&
      (FUNC_1(VAR_0) || FUNC_0(VAR_0))))
  return 1;

 return 0;
}
