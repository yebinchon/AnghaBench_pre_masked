
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_0, u8 VAR_1, u8 *VAR_2,
    int VAR_3, u8 *VAR_4, int VAR_5, int VAR_6)
{
 u8 VAR_7[VAR_3+2];
 u8 VAR_8[VAR_5+1];
 int VAR_9 = 0;

 VAR_7[0] = 0x00;
 VAR_7[1] = VAR_1;
 FUNC_0(&VAR_7[2],VAR_2,VAR_3);

 VAR_9 = FUNC_1(VAR_0, VAR_7, VAR_3+2, VAR_8, VAR_5+1,VAR_6);

 if (VAR_9 == 0)
  FUNC_0(VAR_4,&VAR_8[1],VAR_5);

 return VAR_9;
}
