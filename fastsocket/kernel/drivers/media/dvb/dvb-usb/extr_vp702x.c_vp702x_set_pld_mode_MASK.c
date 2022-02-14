
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_adapter {int dev; } ;


 int FUNC_0 (int ,int,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_0, u8 VAR_1)
{
 u8 VAR_2[16] = { 0 };
 return FUNC_0(VAR_0->dev, 0xe0, (VAR_1 << 8) | 0x0e, 0, VAR_2, 16);
}
