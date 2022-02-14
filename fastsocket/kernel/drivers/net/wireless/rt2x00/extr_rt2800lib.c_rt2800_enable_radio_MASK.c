
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int,int,int) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int ) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int*) ;
 scalar_t__ FUNC_9 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_10 (struct rt2x00_dev*,int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct rt2x00_dev *VAR_23)
{
 u32 VAR_24;
 u16 VAR_25;




 if (FUNC_13(FUNC_7(VAR_23) ||
       FUNC_2(VAR_23)))
  return -VAR_3;




 FUNC_6(VAR_23, VAR_4, 0);
 FUNC_6(VAR_23, VAR_6, 0);
 if (FUNC_9(VAR_23)) {
  FUNC_6(VAR_23, VAR_5, 0);
  FUNC_4(VAR_23, VAR_10, 0, 0, 0);
 }
 FUNC_0(1);

 if (FUNC_13(FUNC_1(VAR_23)))
  return -VAR_3;

 FUNC_3(VAR_23);

 if (FUNC_9(VAR_23) &&
     (FUNC_10(VAR_23, VAR_15) ||
      FUNC_10(VAR_23, VAR_16) ||
      FUNC_10(VAR_23, VAR_17))) {
  FUNC_12(200);
  FUNC_4(VAR_23, VAR_11, 0, 0, 0);
  FUNC_12(10);
 }




 FUNC_5(VAR_23, VAR_7, &VAR_24);
 FUNC_11(&VAR_24, VAR_9, 1);
 FUNC_11(&VAR_24, VAR_8, 0);
 FUNC_6(VAR_23, VAR_7, VAR_24);

 FUNC_12(50);

 FUNC_5(VAR_23, VAR_18, &VAR_24);
 FUNC_11(&VAR_24, VAR_20, 1);
 FUNC_11(&VAR_24, VAR_19, 1);
 FUNC_11(&VAR_24, VAR_22, 2);
 FUNC_11(&VAR_24, VAR_21, 1);
 FUNC_6(VAR_23, VAR_18, VAR_24);

 FUNC_5(VAR_23, VAR_7, &VAR_24);
 FUNC_11(&VAR_24, VAR_9, 1);
 FUNC_11(&VAR_24, VAR_8, 1);
 FUNC_6(VAR_23, VAR_7, VAR_24);




 FUNC_8(VAR_23, VAR_1, &VAR_25);
 FUNC_4(VAR_23, VAR_13, 0xff,
      VAR_25 & 0xff, (VAR_25 >> 8) & 0xff);

 FUNC_8(VAR_23, VAR_0, &VAR_25);
 FUNC_4(VAR_23, VAR_12, 0xff,
      VAR_25 & 0xff, (VAR_25 >> 8) & 0xff);

 FUNC_8(VAR_23, VAR_2, &VAR_25);
 FUNC_4(VAR_23, VAR_14, 0xff,
      VAR_25 & 0xff, (VAR_25 >> 8) & 0xff);

 return 0;
}
