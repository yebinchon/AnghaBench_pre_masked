
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int prev_offset; int max_skipcount; int skipcount; } ;
struct ath_hw {TYPE_1__ pacal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int FUNC_0 (int**) ;
 int FUNC_1 (struct ath_hw*) ;
 int VAR_24 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int) ;
 int FUNC_6 (struct ath_hw*,int,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_25, bool VAR_26)
{
 u32 VAR_27;
 unsigned int VAR_28;
 u32 VAR_29[][2] = {
  { 0x786c, 0 },
  { 0x7854, 0 },
  { 0x7820, 0 },
  { 0x7824, 0 },
  { 0x7868, 0 },
  { 0x783c, 0 },
  { 0x7838, 0 } ,
  { 0x7828, 0 } ,
 };

 for (VAR_28 = 0; VAR_28 < FUNC_0(VAR_29); VAR_28++)
  VAR_29[VAR_28][1] = FUNC_4(VAR_25, VAR_29[VAR_28][0]);

 VAR_27 = FUNC_4(VAR_25, 0x7834);
 VAR_27 &= (~(0x1));
 FUNC_6(VAR_25, 0x7834, VAR_27);
 VAR_27 = FUNC_4(VAR_25, 0x9808);
 VAR_27 |= (0x1 << 27);
 FUNC_6(VAR_25, 0x9808, VAR_27);


 FUNC_5(VAR_25, VAR_22, VAR_23, 1);

 FUNC_5(VAR_25, VAR_16, VAR_18, 1);

 FUNC_5(VAR_25, VAR_16, VAR_19, 1);

 FUNC_5(VAR_25, VAR_16, VAR_17, 1);

 FUNC_5(VAR_25, VAR_7, VAR_8, 0);

 FUNC_5(VAR_25, VAR_11, VAR_13, 0);

 FUNC_5(VAR_25, VAR_2, VAR_3, 0);

 FUNC_5(VAR_25, VAR_2, VAR_4, 0);

 FUNC_5(VAR_25, VAR_2, VAR_5, 0);

 FUNC_5(VAR_25, VAR_2, VAR_6, 0);

 FUNC_5(VAR_25, VAR_14, VAR_15, 7);




 FUNC_5(VAR_25, VAR_11, VAR_12, 0);

 FUNC_5(VAR_25, VAR_9, VAR_0, 0xfff);





 FUNC_6(VAR_25, VAR_21, 0xca0358a0);
 FUNC_7(30);
 FUNC_5(VAR_25, VAR_10, VAR_1, 0);


 for (VAR_28 = 6; VAR_28 > 0; VAR_28--) {
  VAR_27 = FUNC_4(VAR_25, 0x7834);
  VAR_27 |= (1 << (20 + VAR_28));
  FUNC_6(VAR_25, 0x7834, VAR_27);
  FUNC_7(1);

  VAR_27 &= (~(0x1 << (20 + VAR_28)));
  VAR_27 |= (FUNC_2(FUNC_4(VAR_25, 0x7840), VAR_20)
       << (20 + VAR_28));
  FUNC_6(VAR_25, 0x7834, VAR_27);
 }

 VAR_27 = (VAR_27 >> 20) & 0x7f;


 if ((!VAR_26) && (VAR_25->pacal_info.prev_offset == VAR_27)) {
  if (VAR_25->pacal_info.max_skipcount < VAR_24)
   VAR_25->pacal_info.max_skipcount =
    2 * VAR_25->pacal_info.max_skipcount;
  VAR_25->pacal_info.skipcount = VAR_25->pacal_info.max_skipcount;
 } else {
  VAR_25->pacal_info.max_skipcount = 1;
  VAR_25->pacal_info.skipcount = 0;
  VAR_25->pacal_info.prev_offset = VAR_27;
 }

 FUNC_1(VAR_25);

 VAR_27 = FUNC_4(VAR_25, 0x7834);
 VAR_27 |= 0x1;
 FUNC_6(VAR_25, 0x7834, VAR_27);
 VAR_27 = FUNC_4(VAR_25, 0x9808);
 VAR_27 &= (~(0x1 << 27));
 FUNC_6(VAR_25, 0x9808, VAR_27);

 for (VAR_28 = 0; VAR_28 < FUNC_0(VAR_29); VAR_28++)
  FUNC_6(VAR_25, VAR_29[VAR_28][0], VAR_29[VAR_28][1]);

 FUNC_3(VAR_25);
}
