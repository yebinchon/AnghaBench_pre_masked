
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tridentfb_par*,int,int) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_5,
       u32 VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 int VAR_12 = 0x4;
 u32 VAR_13 = FUNC_0(VAR_6, VAR_7);
 u32 VAR_14 = FUNC_0(VAR_6 + VAR_10 - 1, VAR_7 + VAR_11 - 1);
 u32 VAR_15 = FUNC_0(VAR_8, VAR_9);
 u32 VAR_16 = FUNC_0(VAR_8 + VAR_10 - 1, VAR_9 + VAR_11 - 1);

 if ((VAR_7 > VAR_9) || ((VAR_7 == VAR_9) && (VAR_6 > VAR_8)))
  VAR_12 = 0;

 FUNC_1(VAR_5, 0x2120, 0x80000000);
 FUNC_1(VAR_5, 0x2120, 0x90000000 | VAR_2);

 FUNC_1(VAR_5, VAR_3, VAR_12 ? VAR_14 : VAR_13);
 FUNC_1(VAR_5, VAR_4, VAR_12 ? VAR_13 : VAR_14);
 FUNC_1(VAR_5, VAR_0, VAR_12 ? VAR_16 : VAR_15);
 FUNC_1(VAR_5, VAR_1, VAR_12 ? VAR_15 : VAR_16);
 FUNC_1(VAR_5, 0x2124,
   0x80000000 | 1 << 22 | 1 << 10 | 1 << 7 | VAR_12);
}
