
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 int VAR_7;


 VAR_4 = 0xC7;
 VAR_5 = VAR_2;
 VAR_6 = 0;
 VAR_7 = 0;

 VAR_3 = FUNC_0(VAR_1->dev, VAR_4, VAR_5, VAR_6, ((void*)0), VAR_7);
 if (VAR_3 != 0)
  return -VAR_0;

 return 0;
}
