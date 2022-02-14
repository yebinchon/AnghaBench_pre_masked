
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stv {unsigned char origMode; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (struct usb_stv*,int,int ,int ) ;
 int FUNC_5 (int,struct usb_stv*,int,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_6 (struct usb_stv *VAR_1)
{
 int VAR_2;
 unsigned char *VAR_3;

 VAR_3 = FUNC_2 (40, VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_0 (0, "STV(e): Out of (small buf) memory");
  return -1;
 }


 if ((VAR_2 = FUNC_5 (1, VAR_1, 0x04, 0x0000, VAR_3, 0x0)) < 0) {
  VAR_2 = FUNC_5 (0, VAR_1, 0x80, 0, VAR_3, 0x02);
  FUNC_0 (1, "STV(i): last error: %i,  command = 0x%x", VAR_3[0], VAR_3[1]);
 } else {
  FUNC_0 (1, "STV(i): Camera reset to idle mode.");
 }

 if ((VAR_2 = FUNC_4 (VAR_1, 1, 0, 0)) < 0)
  FUNC_0 (1, "STV(e): Reset config during exit failed");


 VAR_3[0] = 0xf0;
 if ((VAR_2 = FUNC_5 (0, VAR_1, 0x87, 0, VAR_3, 0x08)) != 0x08)
  FUNC_0 (0, "STV(e): Stop_video: problem setting original mode");
 if (VAR_1->origMode != VAR_3[0]) {
  FUNC_3 (VAR_3, 0, 8);
  VAR_3[0] = (unsigned char) VAR_1->origMode;
  if ((VAR_2 = FUNC_5 (3, VAR_1, 0x07, 0x0100, VAR_3, 0x08)) != 0x08) {
   FUNC_0 (0, "STV(e): Stop_video: Set_Camera_Mode failed");
   VAR_2 = -1;
  }
  VAR_3[0] = 0xf0;
  VAR_2 = FUNC_5 (0, VAR_1, 0x87, 0, VAR_3, 0x08);
  if ((VAR_2 != 0x08) || (VAR_3[0] != VAR_1->origMode)) {
   FUNC_0 (0, "STV(e): camera NOT set to original resolution.");
   VAR_2 = -1;
  } else
   FUNC_0 (0, "STV(i): Camera set to original resolution");
 }

 FUNC_1(VAR_3);
 return VAR_2;
}
