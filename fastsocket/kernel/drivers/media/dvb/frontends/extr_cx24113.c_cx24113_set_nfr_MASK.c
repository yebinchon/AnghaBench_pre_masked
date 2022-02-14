
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cx24113_state {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (struct cx24113_state*,int) ;
 int FUNC_2 (struct cx24113_state*,int,int) ;

__attribute__((used)) static void FUNC_3(struct cx24113_state *VAR_0, u16 VAR_1, s32 VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 FUNC_2(VAR_0, 0x19, (VAR_1 >> 1) & 0xff);

 VAR_4 = ((VAR_1 & 0x1) << 7) | ((VAR_2 >> 11) & 0x7f);
 FUNC_2(VAR_0, 0x1a, VAR_4);

 FUNC_2(VAR_0, 0x1b, (VAR_2 >> 3) & 0xff);

 VAR_4 = FUNC_0(VAR_0, 0x1c) & 0x1f;
 FUNC_2(VAR_0, 0x1c, VAR_4 | ((VAR_2 & 0x7) << 5));

 FUNC_1(VAR_0, VAR_3 - 1);
}
