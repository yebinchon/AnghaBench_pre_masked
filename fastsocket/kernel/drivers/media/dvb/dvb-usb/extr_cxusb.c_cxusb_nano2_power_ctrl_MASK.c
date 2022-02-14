
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int ) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_1)
  FUNC_0(VAR_0, 0);

 return VAR_2;
}
