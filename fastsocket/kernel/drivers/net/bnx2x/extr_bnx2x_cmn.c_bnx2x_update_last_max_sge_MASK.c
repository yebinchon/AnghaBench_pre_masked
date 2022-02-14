
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2x_fastpath {int last_max_sge; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct bnx2x_fastpath *VAR_0,
          u16 VAR_1)
{
 u16 VAR_2 = VAR_0->last_max_sge;

 if (FUNC_0(VAR_1, VAR_2) > 0)
  VAR_0->last_max_sge = VAR_1;
}
