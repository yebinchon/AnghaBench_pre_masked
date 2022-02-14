
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dvb_usb_device {scalar_t__ priv; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct az6027_device_state {int ca_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_usb_device*,int,scalar_t__,scalar_t__,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_ca_en50221 *VAR_5, int VAR_6, int VAR_7)
{
 struct dvb_usb_device *VAR_8 = (struct dvb_usb_device *)VAR_5->data;
 struct az6027_device_state *VAR_9 = (struct az6027_device_state *)VAR_8->priv;
 int VAR_10;
 u8 VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 int VAR_14;
 u8 *VAR_15;

 VAR_15 = FUNC_2(12, VAR_4);
 if (!VAR_15)
  return -VAR_3;
 FUNC_3(&VAR_9->ca_mutex);

 VAR_11 = 0xC5;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = 1;

 VAR_10 = FUNC_0(VAR_8, VAR_11, VAR_12, VAR_13, VAR_15, VAR_14);
 if (VAR_10 < 0) {
  FUNC_5("usb in operation failed. (%d)", VAR_10);
  VAR_10 = -VAR_2;
 } else
  VAR_10 = 0;

 if (!VAR_10 && VAR_15[0] == 1) {
  VAR_10 = VAR_0 |
        VAR_1;
 }

 FUNC_4(&VAR_9->ca_mutex);
 FUNC_1(VAR_15);
 return VAR_10;
}
