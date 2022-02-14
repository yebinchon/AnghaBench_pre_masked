
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct stv090x_state*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u32 FUNC_2(struct stv090x_state *VAR_3, u32 VAR_4)
{
 s32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2) << 16;
 VAR_5 |= FUNC_0(VAR_3, VAR_1) << 8;
 VAR_5 |= FUNC_0(VAR_3, VAR_0);

 VAR_5 = FUNC_1(VAR_5, 24);
 if (!VAR_5)
  VAR_5 = 1;

 VAR_5 = ((s32) VAR_4 * 10) / ((s32) 0x1000000 / VAR_5);
 VAR_5 /= 320;

 return VAR_5;
}
