
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int *,int,int *,int,int ) ;
 int FUNC_1 (struct dvb_usb_device*,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_0,
     u8 VAR_1, u8 *VAR_2, int VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6 = (VAR_4 == ((void*)0) || VAR_5 == 0);
 u8 VAR_7[1+VAR_3];
 FUNC_3(VAR_7, 0, 1+VAR_3);

 VAR_7[0] = VAR_1;
 FUNC_2(&VAR_7[1], VAR_2, VAR_3);
 if (VAR_6)
  return FUNC_1(VAR_0, VAR_7, 1+VAR_3);
 else
  return FUNC_0(VAR_0, VAR_7, 1+VAR_3, VAR_4, VAR_5, 0);
}
