
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stv {int VideoMode; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_stv*,int,int ,int) ;
 int FUNC_4 (int,struct usb_stv*,int,int,unsigned char*,int) ;
 int FUNC_5 (struct usb_stv*) ;

__attribute__((used)) static int FUNC_6 (struct usb_stv *VAR_1)
{
 int VAR_2, VAR_3 = 1;
 unsigned char *VAR_4;

 VAR_4 = FUNC_2 (40, VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_0 (0, "STV(e): Out of (small buf) memory");
  return -1;
 }

 if ((VAR_2 = FUNC_3 (VAR_1, 1, 0, 0)) < 0) {
  FUNC_1(VAR_4);
  return VAR_2;
 }

 VAR_2 = FUNC_4 (2, VAR_1, 0x06, 0x0100, VAR_4, 0x12);
 if (!(VAR_2 > 0) && (VAR_4[8] == 0x53) && (VAR_4[9] == 0x05)) {
  FUNC_0 (1, "STV(e): Could not get descriptor 0100.");
  goto error;
 }


 if ((VAR_2 = FUNC_3 (VAR_1, 1, 0, 1)) < 0)
  goto error;

 if ((VAR_2 = FUNC_4 (0, VAR_1, 0x85, 0, VAR_4, 0x10)) != 0x10)
  goto error;
 FUNC_0 (1, "STV(i): Setting video mode.");

 if ((VAR_2 = FUNC_4 (1, VAR_1, 0x09, VAR_1->VideoMode, VAR_4, 0x0)) < 0) {
  VAR_3 = 0;
  goto error;
 }
 goto exit;

error:
 FUNC_1(VAR_4);
 if (VAR_3 == 1)
  FUNC_5 (VAR_1);
 return -1;

exit:
 FUNC_1(VAR_4);
 return 0;
}
