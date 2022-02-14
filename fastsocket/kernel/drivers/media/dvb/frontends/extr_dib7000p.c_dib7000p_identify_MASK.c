
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000p_state {int i2c_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_1)
{
 u16 VAR_2;
 FUNC_1( "checking demod on I2C address: %d (%x)",
  VAR_1->i2c_addr, VAR_1->i2c_addr);

 if ((VAR_2 = FUNC_0(VAR_1, 768)) != 0x01b3) {
  FUNC_1( "wrong Vendor ID (read=0x%x)",VAR_2);
  return -VAR_0;
 }

 if ((VAR_2 = FUNC_0(VAR_1, 769)) != 0x4000) {
  FUNC_1( "wrong Device ID (%x)",VAR_2);
  return -VAR_0;
 }

 return 0;
}
