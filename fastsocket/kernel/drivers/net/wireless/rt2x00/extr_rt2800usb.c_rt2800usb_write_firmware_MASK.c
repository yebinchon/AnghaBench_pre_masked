
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int const*,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct rt2x00_dev *VAR_10,
        const u8 *VAR_11, const size_t VAR_12)
{
 int VAR_13;
 u32 VAR_14;
 u32 VAR_15;




 if (FUNC_2(VAR_10, VAR_5) ||
     FUNC_2(VAR_10, VAR_6) ||
     FUNC_2(VAR_10, VAR_7)) {
  VAR_14 = 0;
  VAR_15 = 4096;
 } else {
  VAR_14 = 4096;
  VAR_15 = 4096;
 }




 FUNC_3(VAR_10, VAR_0,
          VAR_11 + VAR_14, VAR_15);

 FUNC_4(VAR_10, VAR_1, ~0);
 FUNC_4(VAR_10, VAR_3, ~0);





 VAR_13 = FUNC_5(VAR_10, VAR_8,
          0, VAR_9,
          VAR_4);
 if (VAR_13 < 0) {
  FUNC_1(VAR_10, "Failed to write Firmware to device\n");
  return VAR_13;
 }

 FUNC_0(10);
 FUNC_4(VAR_10, VAR_2, 0);

 return 0;
}
