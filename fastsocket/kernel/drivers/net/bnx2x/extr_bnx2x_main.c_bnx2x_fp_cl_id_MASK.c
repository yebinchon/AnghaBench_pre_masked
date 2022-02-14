
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bnx2x_fastpath {scalar_t__ index; int bp; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct bnx2x_fastpath*) ;

__attribute__((used)) static u8 FUNC_3(struct bnx2x_fastpath *VAR_0)
{
 if (FUNC_1(VAR_0->bp))
  return FUNC_0(VAR_0->bp) + VAR_0->index;
 else
  return FUNC_2(VAR_0);
}
