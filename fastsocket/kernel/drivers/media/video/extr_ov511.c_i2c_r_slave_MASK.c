
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; unsigned char primary_i2c_slave; int i2c_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_ov511*,unsigned char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_ov511*,unsigned char) ;
 int FUNC_5 (struct usb_ov511*,unsigned char) ;

__attribute__((used)) static int
FUNC_6(struct usb_ov511 *VAR_1,
     unsigned char VAR_2,
     unsigned char VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_1->i2c_lock);


 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 < 0)
  goto out;

 if (VAR_1->bclass == VAR_0)
  VAR_4 = FUNC_5(VAR_1, VAR_3);
 else
  VAR_4 = FUNC_4(VAR_1, VAR_3);

out:

 if (FUNC_1(VAR_1, VAR_1->primary_i2c_slave) < 0)
  FUNC_0("Couldn't restore primary I2C slave");

 FUNC_3(&VAR_1->i2c_lock);
 return VAR_4;
}
