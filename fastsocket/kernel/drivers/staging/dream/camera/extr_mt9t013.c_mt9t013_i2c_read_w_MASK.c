
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_1 (unsigned short,unsigned char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int32_t FUNC_3(unsigned short VAR_1,
 unsigned short VAR_2, unsigned short *VAR_3)
{
 int32_t VAR_4 = 0;
 unsigned char VAR_5[4];

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_5, 0, sizeof(VAR_5));

 VAR_5[0] = (VAR_2 & 0xFF00)>>8;
 VAR_5[1] = (VAR_2 & 0x00FF);

 VAR_4 = FUNC_1(VAR_1, VAR_5, 2);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 = VAR_5[0] << 8 | VAR_5[1];

 if (VAR_4 < 0)
  FUNC_2("mt9t013_i2c_read failed!\n");

 return VAR_4;
}
