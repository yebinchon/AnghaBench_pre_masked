
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {struct cxusb_state* priv; } ;
struct cxusb_state {int* gpio_write_state; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int*,int,int*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct dvb_usb_device *VAR_2, int VAR_3)
{
 struct cxusb_state *VAR_4 = VAR_2->priv;
 u8 VAR_5[2], VAR_6;

 if (VAR_4->gpio_write_state[VAR_1] == VAR_3)
  return;

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_3;
 FUNC_0(VAR_2, VAR_0, VAR_5, 2, &VAR_6, 1);

 if (VAR_6 != 0x01)
  FUNC_1("gpio_write failed.\n");

 VAR_4->gpio_write_state[VAR_1] = VAR_3;
}
