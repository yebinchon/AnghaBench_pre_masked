
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int const*,size_t const) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_14,
     const u8 *VAR_15, const size_t VAR_16)
{
 int VAR_17;
 u32 VAR_18;




 for (VAR_17 = 0; VAR_17 < 100; VAR_17++) {
  FUNC_5(VAR_14, VAR_5, &VAR_18);
  if (VAR_18)
   break;
  FUNC_0(1);
 }

 if (!VAR_18) {
  FUNC_1(VAR_14, "Unstable hardware\n");
  return -VAR_0;
 }




 VAR_18 = 0;
 FUNC_3(&VAR_18, VAR_12, 1);
 FUNC_6(VAR_14, VAR_10, VAR_18);
 FUNC_6(VAR_14, VAR_4, 0xffffffff);
 FUNC_6(VAR_14, VAR_2, 0);
 FUNC_6(VAR_14, VAR_3, 0);




 VAR_18 = 0;
 FUNC_3(&VAR_18, VAR_12, 1);
 FUNC_3(&VAR_18, VAR_13, 1);
 FUNC_6(VAR_14, VAR_10, VAR_18);

 FUNC_4(VAR_14, VAR_1,
           VAR_15, VAR_16);

 FUNC_3(&VAR_18, VAR_13, 0);
 FUNC_6(VAR_14, VAR_10, VAR_18);

 FUNC_3(&VAR_18, VAR_12, 0);
 FUNC_6(VAR_14, VAR_10, VAR_18);

 for (VAR_17 = 0; VAR_17 < 100; VAR_17++) {
  FUNC_5(VAR_14, VAR_10, &VAR_18);
  if (FUNC_2(VAR_18, VAR_11))
   break;
  FUNC_0(1);
 }

 if (VAR_17 == 100) {
  FUNC_1(VAR_14, "MCU Control register not ready\n");
  return -VAR_0;
 }




 FUNC_0(1);




 VAR_18 = 0;
 FUNC_3(&VAR_18, VAR_9, 1);
 FUNC_3(&VAR_18, VAR_7, 1);
 FUNC_6(VAR_14, VAR_6, VAR_18);

 FUNC_5(VAR_14, VAR_6, &VAR_18);
 FUNC_3(&VAR_18, VAR_9, 0);
 FUNC_3(&VAR_18, VAR_7, 0);
 FUNC_6(VAR_14, VAR_6, VAR_18);

 FUNC_5(VAR_14, VAR_6, &VAR_18);
 FUNC_3(&VAR_18, VAR_8, 1);
 FUNC_6(VAR_14, VAR_6, VAR_18);

 return 0;
}
