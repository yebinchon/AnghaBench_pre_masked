
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24113_state {int rev; scalar_t__ vcodiv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (struct cx24113_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cx24113_state *VAR_1, u8 VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1, 0x02);
 if (VAR_1->rev == 0x43 && VAR_1->vcodiv == VAR_0)
  VAR_2 = 1;

 VAR_3 &= ~0x2;
 if (VAR_2)
  VAR_3 |= VAR_2 << 1;
 return FUNC_1(VAR_1, 0x02, VAR_3);
}
