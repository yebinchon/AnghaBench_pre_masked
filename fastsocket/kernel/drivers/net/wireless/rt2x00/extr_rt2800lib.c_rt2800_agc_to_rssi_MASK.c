
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {scalar_t__ curr_band; int lna_gain; } ;
typedef int s8 ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rt2x00_dev *VAR_14, u32 VAR_15)
{
 s8 VAR_16 = FUNC_3(VAR_15, VAR_11);
 s8 VAR_17 = FUNC_3(VAR_15, VAR_12);
 s8 VAR_18 = FUNC_3(VAR_15, VAR_13);
 u16 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22;

 if (VAR_14->curr_band == VAR_10) {
  FUNC_1(VAR_14, VAR_5, &VAR_19);
  VAR_20 = FUNC_2(VAR_19, VAR_8);
  VAR_21 = FUNC_2(VAR_19, VAR_9);
  FUNC_1(VAR_14, VAR_6, &VAR_19);
  VAR_22 = FUNC_2(VAR_19, VAR_7);
 } else {
  FUNC_1(VAR_14, VAR_0, &VAR_19);
  VAR_20 = FUNC_2(VAR_19, VAR_3);
  VAR_21 = FUNC_2(VAR_19, VAR_4);
  FUNC_1(VAR_14, VAR_1, &VAR_19);
  VAR_22 = FUNC_2(VAR_19, VAR_2);
 }






 VAR_16 = (VAR_16) ? (-12 - VAR_20 - VAR_14->lna_gain - VAR_16) : -128;
 VAR_17 = (VAR_17) ? (-12 - VAR_21 - VAR_14->lna_gain - VAR_17) : -128;
 VAR_18 = (VAR_18) ? (-12 - VAR_22 - VAR_14->lna_gain - VAR_18) : -128;







 VAR_16 = FUNC_0(VAR_16, VAR_17);
 return (int)FUNC_0(VAR_16, VAR_18);
}
