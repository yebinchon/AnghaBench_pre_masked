
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {unsigned char eng_oper; } ;


 int FUNC_0 (struct tridentfb_par*,int,int) ;
 int FUNC_1 (struct tridentfb_par*,int,int) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_0, int VAR_1, int VAR_2)
{
 unsigned char VAR_3 = VAR_2 == 24 ? 3 : (VAR_2 >> 4);
 int VAR_4 = VAR_1 << (VAR_2 == 24 ? 20 : (18 + VAR_3));

 switch (VAR_1 << (VAR_2 >> 3)) {
 case 8192:
 case 512:
  VAR_3 |= 0x00;
  break;
 case 1024:
  VAR_3 |= 0x04;
  break;
 case 2048:
  VAR_3 |= 0x08;
  break;
 case 4096:
  VAR_3 |= 0x0C;
  break;
 }

 FUNC_0(VAR_0, VAR_3, 0x2125);

 VAR_0->eng_oper = VAR_3 | 0x40;

 FUNC_1(VAR_0, 0x2154, VAR_4);
 FUNC_1(VAR_0, 0x2150, VAR_4);
 FUNC_0(VAR_0, 3, 0x2126);
}
