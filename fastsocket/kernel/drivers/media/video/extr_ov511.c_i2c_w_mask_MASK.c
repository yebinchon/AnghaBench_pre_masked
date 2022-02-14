
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int i2c_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_ov511*,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static int
FUNC_3(struct usb_ov511 *VAR_0,
    unsigned char VAR_1,
    unsigned char VAR_2,
    unsigned char VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->i2c_lock);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->i2c_lock);

 return VAR_4;
}
