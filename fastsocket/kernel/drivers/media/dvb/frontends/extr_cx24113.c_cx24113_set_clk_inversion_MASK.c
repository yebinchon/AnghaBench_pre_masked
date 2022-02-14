
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24113_state {int dummy; } ;


 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (struct cx24113_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cx24113_state *VAR_0, u8 VAR_1)
{
 u8 VAR_2 = (FUNC_0(VAR_0, 0x10) & 0x7f) | ((VAR_1 & 0x1) << 7);
 return FUNC_1(VAR_0, 0x10, VAR_2);
}
