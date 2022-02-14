
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct via_i2c_stuff {int i2c_port; } ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, int VAR_2)
{
 u8 VAR_3;
 struct via_i2c_stuff *VAR_4 = (struct via_i2c_stuff *)VAR_1;

 VAR_3 = FUNC_1(VAR_0, VAR_4->i2c_port) & 0xF0;
 if (VAR_2)
  VAR_3 |= 0x10;
 else
  VAR_3 &= ~0x10;
 switch (VAR_4->i2c_port) {
 case 128:
  VAR_3 |= 0x01;
  break;
 case 129:
  VAR_3 |= 0x40;
  break;
 default:
  FUNC_0("via_i2c: specify wrong i2c port.\n");
 }
 FUNC_2(VAR_4->i2c_port, VAR_0, VAR_3);
}
