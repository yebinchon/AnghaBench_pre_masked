
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int const*,size_t const) ;
 int FUNC_3 (struct rt2x00_dev*,int ,scalar_t__*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_6,
     const u8 *VAR_7, const size_t VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;
 u32 VAR_11;




 for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
  FUNC_3(VAR_6, VAR_2, &VAR_11);
  if (VAR_11)
   break;
  FUNC_0(1);
 }

 if (!VAR_11) {
  FUNC_1(VAR_6, "Unstable hardware\n");
  return -VAR_0;
 }




 FUNC_2(VAR_6, VAR_1, VAR_7, VAR_8);





 VAR_10 = FUNC_4(VAR_6, VAR_4,
          0, VAR_5,
          VAR_3);
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, "Failed to write Firmware to device\n");
  return VAR_10;
 }

 return 0;
}
