
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;


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
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int*) ;
 int FUNC_6 (struct rt2x00_dev*,int,int) ;
 int FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_11 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int*,int ,int) ;

__attribute__((used)) static void FUNC_14(struct rt2x00_dev *VAR_14)
{
 u8 VAR_15;
 u16 VAR_16;
 u32 VAR_17;


 FUNC_4(VAR_14, 30);

 FUNC_6(VAR_14, 4, 0x40);
 FUNC_6(VAR_14, 5, 0x03);
 FUNC_6(VAR_14, 6, 0x02);
 FUNC_6(VAR_14, 7, 0x60);
 FUNC_6(VAR_14, 9, 0x0f);
 FUNC_6(VAR_14, 10, 0x41);
 FUNC_6(VAR_14, 11, 0x21);
 FUNC_6(VAR_14, 12, 0x7b);
 FUNC_6(VAR_14, 14, 0x90);
 FUNC_6(VAR_14, 15, 0x58);
 FUNC_6(VAR_14, 16, 0xb3);
 FUNC_6(VAR_14, 17, 0x92);
 FUNC_6(VAR_14, 18, 0x2c);
 FUNC_6(VAR_14, 19, 0x02);
 FUNC_6(VAR_14, 20, 0xba);
 FUNC_6(VAR_14, 21, 0xdb);
 FUNC_6(VAR_14, 24, 0x16);
 FUNC_6(VAR_14, 25, 0x01);
 FUNC_6(VAR_14, 29, 0x1f);

 if (FUNC_11(VAR_14, VAR_11, VAR_7)) {
  FUNC_2(VAR_14, VAR_4, &VAR_17);
  FUNC_12(&VAR_17, VAR_5, 1);
  FUNC_12(&VAR_17, VAR_6, 3);
  FUNC_3(VAR_14, VAR_4, VAR_17);
 } else if (FUNC_10(VAR_14, VAR_12) ||
     FUNC_10(VAR_14, VAR_13)) {
  FUNC_6(VAR_14, 31, 0x14);

  FUNC_5(VAR_14, 6, &VAR_15);
  FUNC_13(&VAR_15, VAR_10, 1);
  FUNC_6(VAR_14, 6, VAR_15);

  FUNC_2(VAR_14, VAR_4, &VAR_17);
  FUNC_12(&VAR_17, VAR_5, 1);
  if (FUNC_11(VAR_14, VAR_12, VAR_8) ||
      FUNC_11(VAR_14, VAR_13, VAR_9)) {
   FUNC_8(VAR_14, VAR_0, &VAR_16);
   if (FUNC_9(VAR_16, VAR_1))
    FUNC_12(&VAR_17, VAR_6, 3);
   else
    FUNC_12(&VAR_17, VAR_6, 0);
  }
  FUNC_3(VAR_14, VAR_4, VAR_17);

  FUNC_2(VAR_14, VAR_2, &VAR_17);
  FUNC_12(&VAR_17, VAR_3, 0);
  FUNC_3(VAR_14, VAR_2, VAR_17);
 }

 FUNC_7(VAR_14);

 if (FUNC_11(VAR_14, VAR_11, VAR_7) ||
     FUNC_11(VAR_14, VAR_12, VAR_8) ||
     FUNC_11(VAR_14, VAR_13, VAR_9))
  FUNC_6(VAR_14, 27, 0x03);

 FUNC_0(VAR_14);
 FUNC_1(VAR_14);
}
