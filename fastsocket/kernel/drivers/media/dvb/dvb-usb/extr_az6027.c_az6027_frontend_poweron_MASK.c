
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_1)
{
 int VAR_2;
 u8 VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 int VAR_6;

 VAR_3 = 0xBC;
 VAR_4 = 1;
 VAR_5 = 3;
 VAR_6 = 0;

 VAR_2 = FUNC_0(VAR_1->dev, VAR_3, VAR_4, VAR_5, ((void*)0), VAR_6);
 if (VAR_2 != 0)
  return -VAR_0;

 return 0;
}
