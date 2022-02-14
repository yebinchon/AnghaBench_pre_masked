
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_fastpath {scalar_t__ disable_tpa; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_fastpath*,int) ;

__attribute__((used)) static inline void FUNC_1(struct bnx2x *VAR_0,
        struct bnx2x_fastpath *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->disable_tpa)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, VAR_1, VAR_3);
}
