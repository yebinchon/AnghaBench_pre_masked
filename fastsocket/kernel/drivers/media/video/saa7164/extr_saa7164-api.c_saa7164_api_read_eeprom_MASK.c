
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct saa7164_dev {int * i2c_bus; } ;
typedef int reg ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int*,int,int*) ;

int FUNC_1(struct saa7164_dev *VAR_1, u8 *VAR_2, int VAR_3)
{
 u8 VAR_4[] = { 0x0f, 0x00 };

 if (VAR_3 < 128)
  return -VAR_0;



 return FUNC_0(&VAR_1->i2c_bus[0], 0xa0 >> 1, sizeof(VAR_4),
  &VAR_4[0], 128, VAR_2);
}
