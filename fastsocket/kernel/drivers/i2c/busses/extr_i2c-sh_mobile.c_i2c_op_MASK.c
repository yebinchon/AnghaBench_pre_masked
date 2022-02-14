
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int dev; int lock; } ;
typedef enum sh_mobile_i2c_op { ____Placeholder_sh_mobile_i2c_op } sh_mobile_i2c_op ;


 int FUNC_0 (struct sh_mobile_i2c_data*) ;
 int FUNC_1 (struct sh_mobile_i2c_data*) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int,unsigned char) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static unsigned char FUNC_8(struct sh_mobile_i2c_data *VAR_4,
       enum sh_mobile_i2c_op VAR_5, unsigned char VAR_6)
{
 unsigned char VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_3(VAR_4->dev, "op %d, data in 0x%02x\n", VAR_5, VAR_6);

 FUNC_6(&VAR_4->lock, VAR_8);

 switch (VAR_5) {
 case 132:
  FUNC_5(0x94, FUNC_0(VAR_4));
  break;
 case 130:
  FUNC_5(VAR_3 | VAR_0 | VAR_2, FUNC_2(VAR_4));
  FUNC_5(VAR_6, FUNC_1(VAR_4));
  break;
 case 131:
  FUNC_5(VAR_6, FUNC_1(VAR_4));
  break;
 case 129:
  FUNC_5(VAR_6, FUNC_1(VAR_4));
  FUNC_5(0x90, FUNC_0(VAR_4));
  break;
 case 128:
  FUNC_5(0x81, FUNC_0(VAR_4));
  break;
 case 135:
  VAR_7 = FUNC_4(FUNC_1(VAR_4));
  break;
 case 134:
  FUNC_5(VAR_1 | VAR_3 | VAR_0 | VAR_2,
    FUNC_2(VAR_4));
  FUNC_5(0xc0, FUNC_0(VAR_4));
  break;
 case 133:
  FUNC_5(VAR_1 | VAR_3 | VAR_0 | VAR_2,
    FUNC_2(VAR_4));
  VAR_7 = FUNC_4(FUNC_1(VAR_4));
  FUNC_5(0xc0, FUNC_0(VAR_4));
  break;
 }

 FUNC_7(&VAR_4->lock, VAR_8);

 FUNC_3(VAR_4->dev, "op %d, data out 0x%02x\n", VAR_5, VAR_7);
 return VAR_7;
}
