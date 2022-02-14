
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24113_state {int rev; scalar_t__ vcodiv; int refdiv; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct cx24113_state *VAR_1, u8 VAR_2)
{
 if (VAR_1->rev == 0x43 && VAR_1->vcodiv == VAR_0)
  VAR_2 = 2;
 return VAR_1->refdiv = VAR_2;
}
