
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dib3000mc_state {int dummy; } ;
typedef scalar_t__ s16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (struct dib3000mc_state*,int,int) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct dib3000mc_state *VAR_2, u8 VAR_3, s16 VAR_4)
{
 u16 VAR_5;
 for (VAR_5 = 58; VAR_5 < 87; VAR_5++)
  FUNC_1(VAR_2, VAR_5, VAR_1[VAR_5-58]);

 if (VAR_4 == VAR_0) {
  FUNC_1(VAR_2, 58, 0x3b);
  FUNC_1(VAR_2, 84, 0x00);
  FUNC_1(VAR_2, 85, 0x8200);
 }

 FUNC_1(VAR_2, 34, 0x1294);
 FUNC_1(VAR_2, 35, 0x1ff8);
 if (VAR_3 == 1)
  FUNC_1(VAR_2, 55, FUNC_0(VAR_2, 55) | (1 << 10));
}
