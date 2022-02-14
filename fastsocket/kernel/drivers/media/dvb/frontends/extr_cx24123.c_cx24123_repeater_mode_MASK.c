
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24123_state {int dummy; } ;


 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cx24123_state *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_0, 0x23) & 0x1e;
 if (VAR_1)
  VAR_3 |= (1 << 6) | (VAR_2 << 5);
 else
  VAR_3 |= (1 << 7) | (VAR_2);
 return FUNC_1(VAR_0, 0x23, VAR_3);
}
