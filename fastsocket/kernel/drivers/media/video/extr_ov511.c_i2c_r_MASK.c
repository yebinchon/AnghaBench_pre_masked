
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; int i2c_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_ov511*,unsigned char) ;
 int FUNC_3 (struct usb_ov511*,unsigned char) ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_1, unsigned char VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->i2c_lock);

 if (VAR_1->bclass == VAR_0)
  VAR_3 = FUNC_3(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_2(VAR_1, VAR_2);

 FUNC_1(&VAR_1->i2c_lock);

 return VAR_3;
}
