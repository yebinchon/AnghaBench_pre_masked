
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {unsigned char primary_i2c_slave; int i2c_lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_ov511*,unsigned char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_ov511*,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static int
FUNC_5(struct usb_ov511 *VAR_0,
     unsigned char VAR_1,
     unsigned char VAR_2,
     unsigned char VAR_3,
     unsigned char VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(&VAR_0->i2c_lock);


 VAR_5 = FUNC_1(VAR_0, VAR_1);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4);

out:

 if (FUNC_1(VAR_0, VAR_0->primary_i2c_slave) < 0)
  FUNC_0("Couldn't restore primary I2C slave");

 FUNC_3(&VAR_0->i2c_lock);
 return VAR_5;
}
