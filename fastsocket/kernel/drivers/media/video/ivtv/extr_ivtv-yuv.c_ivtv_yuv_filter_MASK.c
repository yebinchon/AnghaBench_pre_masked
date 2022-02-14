
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ivtv *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;


 if (VAR_3 > -1) {
  if (VAR_3 > 4)
   VAR_3 = 4;
  VAR_6 = VAR_0 + (VAR_3 * 384);
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   FUNC_2(FUNC_1(VAR_6), 0x02804);
   FUNC_2(FUNC_1(VAR_6), 0x0281c);
   VAR_6 += 4;
   FUNC_2(FUNC_1(VAR_6), 0x02808);
   FUNC_2(FUNC_1(VAR_6), 0x02820);
   VAR_6 += 4;
   FUNC_2(FUNC_1(VAR_6), 0x0280c);
   FUNC_2(FUNC_1(VAR_6), 0x02824);
   VAR_6 += 4;
   FUNC_2(FUNC_1(VAR_6), 0x02810);
   FUNC_2(FUNC_1(VAR_6), 0x02828);
   VAR_6 += 4;
   FUNC_2(FUNC_1(VAR_6), 0x02814);
   FUNC_2(FUNC_1(VAR_6), 0x0282c);
   VAR_6 += 8;
   FUNC_2(0, 0x02818);
   FUNC_2(0, 0x02830);
  }
  FUNC_0("h_filter -> %d\n", VAR_3);
 }

 if (VAR_4 > -1) {
  if (VAR_4 > 4)
   VAR_4 = 4;
  VAR_6 = VAR_1 + (VAR_4 * 192);
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   FUNC_2(FUNC_1(VAR_6), 0x02900);
   VAR_6 += 4;
   FUNC_2(FUNC_1(VAR_6), 0x02904);
   VAR_6 += 8;
   FUNC_2(0, 0x02908);
  }
  FUNC_0("v_filter_1 -> %d\n", VAR_4);
 }

 if (VAR_5 > -1) {
  if (VAR_5 > 4)
   VAR_5 = 4;
  VAR_6 = VAR_1 + (VAR_5 * 192);
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   FUNC_2(FUNC_1(VAR_6), 0x0290c);
   VAR_6 += 4;
   FUNC_2(FUNC_1(VAR_6), 0x02910);
   VAR_6 += 8;
   FUNC_2(0, 0x02914);
  }
  FUNC_0("v_filter_2 -> %d\n", VAR_5);
 }
}
