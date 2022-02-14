
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_1, int VAR_2, u16 VAR_3, int VAR_4)
{
 u8 VAR_5[4];
 VAR_3 = VAR_4 ? VAR_3 : 0;

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_2;
 VAR_5[2] = VAR_3 & 0xff;
 VAR_5[3] = (VAR_3 >> 8) & 0x1f;

 return FUNC_0(VAR_1->dev, VAR_5, 4);
}
