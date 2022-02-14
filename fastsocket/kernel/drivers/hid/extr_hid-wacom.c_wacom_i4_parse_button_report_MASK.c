
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_data {int butstate; } ;
struct input_dev {int dummy; } ;
typedef int __u16 ;


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
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct wacom_data *VAR_14,
   struct input_dev *VAR_15, unsigned char *VAR_16)
{
 __u16 VAR_17;

 VAR_17 = (VAR_16[3] << 1) | (VAR_16[2] & 0x01);
 if (VAR_17 != VAR_14->butstate) {
  VAR_14->butstate = VAR_17;
  FUNC_2(VAR_15, VAR_1, VAR_17 & 0x001);
  FUNC_2(VAR_15, VAR_2, VAR_17 & 0x002);
  FUNC_2(VAR_15, VAR_3, VAR_17 & 0x004);
  FUNC_2(VAR_15, VAR_4, VAR_17 & 0x008);
  FUNC_2(VAR_15, VAR_5, VAR_17 & 0x010);
  FUNC_2(VAR_15, VAR_6, VAR_17 & 0x020);
  FUNC_2(VAR_15, VAR_7, VAR_17 & 0x040);
  FUNC_2(VAR_15, VAR_8, VAR_17 & 0x080);
  FUNC_2(VAR_15, VAR_9, VAR_17 & 0x100);
  FUNC_2(VAR_15, VAR_10, 1);
  FUNC_1(VAR_15, VAR_0, VAR_13);
  FUNC_0(VAR_15, VAR_11, VAR_12, 0xffffffff);
  FUNC_3(VAR_15);
 }
}
