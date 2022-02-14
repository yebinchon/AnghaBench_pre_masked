
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000p_state {int dummy; } ;
typedef enum dib7000p_power_mode { ____Placeholder_dib7000p_power_mode } dib7000p_power_mode ;





 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_0, enum dib7000p_power_mode VAR_1)
{

 u16 VAR_2 = 0xffff, VAR_3 = 0xffff, VAR_4 = 0x0007, VAR_5 = 0x0003,
  VAR_6 = (0xfe00) | (FUNC_0(VAR_0, 1280) & 0x01ff);


 switch (VAR_1) {

  case 130:
   VAR_2 = 0x0000; VAR_3 = 0x0000; VAR_4 = 0x0; VAR_5 = 0x0; VAR_6 &= 0x01ff;
   break;

  case 129:

   VAR_2 &= ~((1 << 15) | (1 << 14) | (1 << 11) | (1 << 10) | (1 << 9));

   VAR_4 &= ~((1 << 0));

   VAR_6 &= ~((1 << 11));



  case 128:
   VAR_6 &= ~((1 << 14) | (1 << 13) | (1 << 12) | (1 << 10));
   break;


 }

 FUNC_1(VAR_0, 774, VAR_2);
 FUNC_1(VAR_0, 775, VAR_3);
 FUNC_1(VAR_0, 776, VAR_4);
 FUNC_1(VAR_0, 899, VAR_5);
 FUNC_1(VAR_0, 1280, VAR_6);

 return 0;
}
