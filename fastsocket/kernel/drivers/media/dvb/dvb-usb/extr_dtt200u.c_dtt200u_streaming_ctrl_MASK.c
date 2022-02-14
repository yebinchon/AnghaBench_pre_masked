
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_2, int VAR_3)
{
 u8 VAR_4[2] = { VAR_1, VAR_3 };
 u8 VAR_5 = VAR_0;

 FUNC_0(VAR_2->dev, VAR_4, 2);

 if (VAR_3 == 0)
  FUNC_0(VAR_2->dev, &VAR_5, 1);
 return 0;
}
