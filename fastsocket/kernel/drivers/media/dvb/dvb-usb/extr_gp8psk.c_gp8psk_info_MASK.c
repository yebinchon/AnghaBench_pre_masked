
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct dvb_usb_device*,scalar_t__*) ;
 int FUNC_2 (struct dvb_usb_device*,scalar_t__*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(struct dvb_usb_device *VAR_0)
{
 u8 VAR_1, VAR_2[6];

 if (!FUNC_2(VAR_0, VAR_2))
  FUNC_3("FW Version = %i.%02i.%i (0x%x)  Build %4i/%02i/%02i",
  VAR_2[2], VAR_2[1], VAR_2[0], FUNC_0(VAR_2),
  2000 + VAR_2[5], VAR_2[4], VAR_2[3]);
 else
  FUNC_3("failed to get FW version");

 if (!FUNC_1(VAR_0, &VAR_1))
  FUNC_3("FPGA Version = %i", VAR_1);
 else
  FUNC_3("failed to get FPGA version");
}
