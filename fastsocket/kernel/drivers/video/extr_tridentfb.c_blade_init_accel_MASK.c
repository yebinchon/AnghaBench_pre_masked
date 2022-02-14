
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int dummy; } ;


 int FUNC_0 (struct tridentfb_par*,int,int) ;

__attribute__((used)) static void FUNC_1(struct tridentfb_par *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_1 >> 3) << 20;
 int VAR_4 = VAR_2 == 24 ? 2 : (VAR_2 >> 4);
 int VAR_5 = VAR_3 | (VAR_4 << 29);

 FUNC_0(VAR_0, 0x21C0, VAR_5);
 FUNC_0(VAR_0, 0x21C4, VAR_5);
 FUNC_0(VAR_0, 0x21B8, VAR_5);
 FUNC_0(VAR_0, 0x21BC, VAR_5);
 FUNC_0(VAR_0, 0x21D0, VAR_3);
 FUNC_0(VAR_0, 0x21D4, VAR_3);
 FUNC_0(VAR_0, 0x21C8, VAR_3);
 FUNC_0(VAR_0, 0x21CC, VAR_3);
 FUNC_0(VAR_0, 0x216C, 0);
}
