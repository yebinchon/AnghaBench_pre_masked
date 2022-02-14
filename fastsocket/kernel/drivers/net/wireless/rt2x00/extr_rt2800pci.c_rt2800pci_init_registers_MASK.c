
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 scalar_t__ FUNC_0 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_19)
{
 u32 VAR_20;




 FUNC_3(VAR_19, VAR_11, &VAR_20);
 FUNC_2(&VAR_20, VAR_13, 1);
 FUNC_2(&VAR_20, VAR_14, 1);
 FUNC_2(&VAR_20, VAR_15, 1);
 FUNC_2(&VAR_20, VAR_16, 1);
 FUNC_2(&VAR_20, VAR_17, 1);
 FUNC_2(&VAR_20, VAR_18, 1);
 FUNC_2(&VAR_20, VAR_12, 1);
 FUNC_4(VAR_19, VAR_11, VAR_20);

 FUNC_4(VAR_19, VAR_6, 0x00000e1f);
 FUNC_4(VAR_19, VAR_6, 0x00000e00);

 if (FUNC_0(VAR_19) &&
     (FUNC_1(VAR_19, VAR_8) ||
      FUNC_1(VAR_19, VAR_9) ||
      FUNC_1(VAR_19, VAR_10))) {
  FUNC_3(VAR_19, VAR_0, &VAR_20);
  FUNC_2(&VAR_20, VAR_1, 1);
  FUNC_2(&VAR_20, VAR_2, 1);
  FUNC_4(VAR_19, VAR_0, VAR_20);
 }

 FUNC_4(VAR_19, VAR_7, 0x00000003);

 VAR_20 = 0;
 FUNC_2(&VAR_20, VAR_5, 1);
 FUNC_2(&VAR_20, VAR_4, 1);
 FUNC_4(VAR_19, VAR_3, VAR_20);

 FUNC_4(VAR_19, VAR_3, 0x00000000);

 return 0;
}
