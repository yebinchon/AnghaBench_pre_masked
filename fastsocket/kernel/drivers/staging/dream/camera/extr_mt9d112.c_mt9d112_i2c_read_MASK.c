
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef enum mt9d112_width { ____Placeholder_mt9d112_width } mt9d112_width ;
typedef int buf ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (unsigned short,unsigned char*,int) ;

__attribute__((used)) static int32_t FUNC_3(unsigned short VAR_1,
 unsigned short VAR_2, unsigned short *VAR_3, enum mt9d112_width VAR_4)
{
 int32_t VAR_5 = 0;
 unsigned char VAR_6[4];

 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_6, 0, sizeof(VAR_6));

 switch (VAR_4) {
 case 128: {
  VAR_6[0] = (VAR_2 & 0xFF00)>>8;
  VAR_6[1] = (VAR_2 & 0x00FF);

  VAR_5 = FUNC_2(VAR_1, VAR_6, 2);
  if (VAR_5 < 0)
   return VAR_5;

  *VAR_3 = VAR_6[0] << 8 | VAR_6[1];
 }
  break;

 default:
  break;
 }

 if (VAR_5 < 0)
  FUNC_0("mt9d112_i2c_read failed!\n");

 return VAR_5;
}
