
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int bbp25; int bbp26; void* calibration_bw40; void* calibration_bw20; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int,int*) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 void* FUNC_2 (struct rt2x00_dev*,int,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int*) ;
 int FUNC_4 (struct rt2x00_dev*,int,int) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*,int ) ;
 int FUNC_6 (int*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_3)
{
 struct rt2800_drv_data *VAR_4 = VAR_3->drv_data;
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7, VAR_8;




 if (FUNC_5(VAR_3, VAR_2)) {
  VAR_5 = 0x16;
  VAR_6 = 0x19;
 } else {
  VAR_5 = 0x13;
  VAR_6 = 0x15;
 }

 VAR_4->calibration_bw20 =
  FUNC_2(VAR_3, 0, VAR_5);
 VAR_4->calibration_bw40 =
  FUNC_2(VAR_3, 1, VAR_6);




 FUNC_0(VAR_3, 25, &VAR_4->bbp25);
 FUNC_0(VAR_3, 26, &VAR_4->bbp26);




 FUNC_1(VAR_3, 24, 0);

 FUNC_3(VAR_3, 22, &VAR_7);
 FUNC_6(&VAR_7, VAR_1, 0);
 FUNC_4(VAR_3, 22, VAR_7);




 FUNC_0(VAR_3, 4, &VAR_8);
 FUNC_6(&VAR_8, VAR_0, 0);
 FUNC_1(VAR_3, 4, VAR_8);
}
