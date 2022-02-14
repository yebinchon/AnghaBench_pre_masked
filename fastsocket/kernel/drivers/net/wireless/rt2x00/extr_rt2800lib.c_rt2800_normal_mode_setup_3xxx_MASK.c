
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int cap_flags; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int txmixer_gain_24g; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct rt2x00_dev*,int,int*) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int,int*) ;
 int FUNC_3 (struct rt2x00_dev*,int,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct rt2x00_dev *VAR_29)
{
 struct rt2800_drv_data *VAR_30 = VAR_29->drv_data;
 u8 VAR_31, VAR_32, VAR_33;
 u16 VAR_34;

 FUNC_2(VAR_29, 17, &VAR_32);

 FUNC_8(&VAR_32, VAR_13, 0);
 if (FUNC_6(VAR_29, VAR_25) ||
     FUNC_7(VAR_29, VAR_26, VAR_7) ||
     FUNC_7(VAR_29, VAR_27, VAR_8) ||
     FUNC_7(VAR_29, VAR_28, VAR_9)) {
  if (!FUNC_9(VAR_2, &VAR_29->cap_flags))
   FUNC_8(&VAR_32, VAR_11, 1);
 }

 VAR_31 = FUNC_6(VAR_29, VAR_25) ? 1 : 2;
 if (VAR_30->txmixer_gain_24g >= VAR_31) {
  FUNC_8(&VAR_32, VAR_12,
      VAR_30->txmixer_gain_24g);
 }

 FUNC_3(VAR_29, 17, VAR_32);

 if (FUNC_6(VAR_29, VAR_27)) {

  FUNC_0(VAR_29, 138, &VAR_33);
  FUNC_4(VAR_29, VAR_3, &VAR_34);
  if (FUNC_5(VAR_34, VAR_4) == 1)
   FUNC_8(&VAR_33, VAR_0, 0);
  if (FUNC_5(VAR_34, VAR_5) == 1)
   FUNC_8(&VAR_33, VAR_1, 1);
  FUNC_1(VAR_29, 138, VAR_33);
 }

 if (FUNC_6(VAR_29, VAR_25)) {
  FUNC_2(VAR_29, 27, &VAR_32);
  if (FUNC_7(VAR_29, VAR_25, VAR_6))
   FUNC_8(&VAR_32, VAR_21, 3);
  else
   FUNC_8(&VAR_32, VAR_21, 0);
  FUNC_8(&VAR_32, VAR_22, 0);
  FUNC_8(&VAR_32, VAR_23, 0);
  FUNC_8(&VAR_32, VAR_24, 0);
  FUNC_3(VAR_29, 27, VAR_32);
 } else if (FUNC_6(VAR_29, VAR_26) ||
     FUNC_6(VAR_29, VAR_27) ||
     FUNC_6(VAR_29, VAR_28)) {
  FUNC_2(VAR_29, 1, &VAR_32);
  FUNC_8(&VAR_32, VAR_14, 1);
  FUNC_8(&VAR_32, VAR_15, 0);
  FUNC_8(&VAR_32, VAR_17, 0);
  FUNC_8(&VAR_32, VAR_16, 1);
  FUNC_8(&VAR_32, VAR_18, 1);
  FUNC_3(VAR_29, 1, VAR_32);

  FUNC_2(VAR_29, 15, &VAR_32);
  FUNC_8(&VAR_32, VAR_10, 0);
  FUNC_3(VAR_29, 15, VAR_32);

  FUNC_2(VAR_29, 20, &VAR_32);
  FUNC_8(&VAR_32, VAR_19, 0);
  FUNC_3(VAR_29, 20, VAR_32);

  FUNC_2(VAR_29, 21, &VAR_32);
  FUNC_8(&VAR_32, VAR_20, 0);
  FUNC_3(VAR_29, 21, VAR_32);
 }
}
