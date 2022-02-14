
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ int_block; } ;
struct bnx2x {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;

__attribute__((used)) static inline u16 FUNC_3(struct bnx2x *VAR_1)
{
 FUNC_0();
 if (VAR_1->common.int_block == VAR_0)
  return FUNC_1(VAR_1);
 else
  return FUNC_2(VAR_1);
}
