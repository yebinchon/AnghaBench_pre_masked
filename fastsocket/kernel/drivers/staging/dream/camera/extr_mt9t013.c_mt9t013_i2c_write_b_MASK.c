
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_1 (unsigned short,unsigned char*,int) ;
 int FUNC_2 (char*,unsigned short,unsigned short) ;

__attribute__((used)) static int32_t FUNC_3(unsigned short VAR_1,
 unsigned short VAR_2, unsigned short VAR_3)
{
 int32_t VAR_4 = -VAR_0;
 unsigned char VAR_5[2];

 FUNC_0(VAR_5, 0, sizeof(VAR_5));
 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_3;
 VAR_4 = FUNC_1(VAR_1, VAR_5, 2);

 if (VAR_4 < 0)
  FUNC_2("i2c_write failed, addr = 0x%x, val = 0x%x!\n",
  VAR_2, VAR_3);

 return VAR_4;
}
