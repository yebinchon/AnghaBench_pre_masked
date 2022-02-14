
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {scalar_t__ priv; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct az6027_device_state {int ca_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int,int,int,int*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(struct dvb_ca_en50221 *VAR_3,
          int VAR_4,
          u8 VAR_5)
{
 struct dvb_usb_device *VAR_6 = (struct dvb_usb_device *)VAR_3->data;
 struct az6027_device_state *VAR_7 = (struct az6027_device_state *)VAR_6->priv;

 int VAR_8;
 u8 VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 int VAR_12;
 u8 *VAR_13;

 if (VAR_4 != 0)
  return -VAR_0;

 VAR_13 = FUNC_3(12, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_4(&VAR_7->ca_mutex);

 VAR_9 = 0xC3;
 VAR_10 = VAR_5;
 VAR_11 = 0;
 VAR_12 = 2;

 VAR_8 = FUNC_0(VAR_6, VAR_9, VAR_10, VAR_11, VAR_13, VAR_12);
 if (VAR_8 < 0) {
  FUNC_6("usb in operation failed. (%d)", VAR_8);
  VAR_8 = -VAR_0;
 } else {
  if (VAR_13[0] == 0)
   FUNC_6("Read CI IO error");

  VAR_8 = VAR_13[1];
  FUNC_1("read cam data = %x from 0x%x", VAR_13[1], VAR_10);
 }

 FUNC_5(&VAR_7->ca_mutex);
 FUNC_2(VAR_13);
 return VAR_8;
}
