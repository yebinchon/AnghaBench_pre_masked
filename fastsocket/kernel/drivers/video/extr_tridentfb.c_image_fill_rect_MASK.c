
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct tridentfb_par*,int,int) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_3,
       u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 FUNC_1(VAR_3, 0x2120, 0x80000000);
 FUNC_1(VAR_3, 0x2120, 0x90000000 | VAR_2);

 FUNC_1(VAR_3, 0x2144, VAR_8);

 FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_4, VAR_5));
 FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_4 + VAR_6 - 1, VAR_5 + VAR_7 - 1));

 FUNC_1(VAR_3, 0x2124, 0x80000000 | 3 << 22 | 1 << 10 | 1 << 9);
}
