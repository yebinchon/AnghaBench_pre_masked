
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct fpustate {int dummy; } ;
typedef unsigned long s32 ;
typedef unsigned long s16 ;
 struct fpustate* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (struct fpustate*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct pt_regs*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct fpustate *VAR_4 = VAR_0;
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_3(VAR_4, FUNC_1(VAR_2));
 VAR_6 = FUNC_3(VAR_4, FUNC_2(VAR_2));

 VAR_7 = 0;

 switch (VAR_3) {
 case 133:
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   s16 VAR_9 = (VAR_5 >> (VAR_8 * 16)) & 0xffff;
   s16 VAR_10 = (VAR_6 >> (VAR_8 * 16)) & 0xffff;

   if (VAR_9 > VAR_10)
    VAR_7 |= 1 << VAR_8;
  }
  break;

 case 132:
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
   s32 VAR_11 = (VAR_5 >> (VAR_8 * 32)) & 0xffff;
   s32 VAR_12 = (VAR_6 >> (VAR_8 * 32)) & 0xffff;

   if (VAR_11 > VAR_12)
    VAR_7 |= 1 << VAR_8;
  }
  break;

 case 131:
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   s16 VAR_13 = (VAR_5 >> (VAR_8 * 16)) & 0xffff;
   s16 VAR_14 = (VAR_6 >> (VAR_8 * 16)) & 0xffff;

   if (VAR_13 <= VAR_14)
    VAR_7 |= 1 << VAR_8;
  }
  break;

 case 130:
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
   s32 VAR_15 = (VAR_5 >> (VAR_8 * 32)) & 0xffff;
   s32 VAR_16 = (VAR_6 >> (VAR_8 * 32)) & 0xffff;

   if (VAR_15 <= VAR_16)
    VAR_7 |= 1 << VAR_8;
  }
  break;

 case 129:
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   s16 VAR_17 = (VAR_5 >> (VAR_8 * 16)) & 0xffff;
   s16 VAR_18 = (VAR_6 >> (VAR_8 * 16)) & 0xffff;

   if (VAR_17 != VAR_18)
    VAR_7 |= 1 << VAR_8;
  }
  break;

 case 128:
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
   s32 VAR_19 = (VAR_5 >> (VAR_8 * 32)) & 0xffff;
   s32 VAR_20 = (VAR_6 >> (VAR_8 * 32)) & 0xffff;

   if (VAR_19 != VAR_20)
    VAR_7 |= 1 << VAR_8;
  }
  break;

 case 135:
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   s16 VAR_21 = (VAR_5 >> (VAR_8 * 16)) & 0xffff;
   s16 VAR_22 = (VAR_6 >> (VAR_8 * 16)) & 0xffff;

   if (VAR_21 == VAR_22)
    VAR_7 |= 1 << VAR_8;
  }
  break;

 case 134:
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
   s32 VAR_23 = (VAR_5 >> (VAR_8 * 32)) & 0xffff;
   s32 VAR_24 = (VAR_6 >> (VAR_8 * 32)) & 0xffff;

   if (VAR_23 == VAR_24)
    VAR_7 |= 1 << VAR_8;
  }
  break;
 };

 FUNC_4(0, 0, FUNC_0(VAR_2), 0);
 FUNC_5(VAR_1, VAR_7, FUNC_0(VAR_2));
}
