
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stv {unsigned char SupportedModes; int CIF; int VGA; int QVGA; unsigned char origMode; int VideoMode; unsigned char cwidth; unsigned char cheight; unsigned char origGain; int maxwidth; int maxheight; int vwidth; int vheight; unsigned long rawbufsize; unsigned long maxframesize; int bulk_in_endpointAddr; int brightness; int colour; int contrast; int hue; int depth; int palette; scalar_t__ whiteness; scalar_t__ chgbright; scalar_t__ streaming; scalar_t__ readcount; scalar_t__ framecount; scalar_t__ error; scalar_t__ dropped; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (struct usb_stv*,int,int ,int) ;
 scalar_t__ FUNC_5 (struct usb_stv*) ;
 int FUNC_6 (int,struct usb_stv*,int,int,unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8 (struct usb_stv *VAR_4)
{
 int VAR_5 = 0;
 unsigned char *VAR_6;
 unsigned long int VAR_7;

 VAR_6 = FUNC_2 (40, VAR_0);
 if (VAR_6 == ((void*)0)) {
  FUNC_0 (0, "STV(e): Out of (small buf) memory");
  return -1;
 }
 FUNC_7 (100);


 if ((VAR_5 = FUNC_4 (VAR_4, 1, 0, 0)) < 0) {
  FUNC_1(VAR_6);
  FUNC_0 (0, "STV(e): set config 1,0,0 failed");
  return -1;
 }

 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x88, 0x5678, VAR_6, 0x02)) != 0x02)
  goto error;
 if ((VAR_6[0] != 0x56) || (VAR_6[1] != 0x78)) {
  FUNC_0 (1, "STV(e): camera ping failed!!");
  goto error;
 }


 if ((VAR_5 = FUNC_6 (2, VAR_4, 0x06, 0x0200, VAR_6, 0x09)) != 0x09)
  goto error;
 VAR_5 = FUNC_6 (2, VAR_4, 0x06, 0x0200, VAR_6, 0x22);
 if (!(VAR_5 >= 0) && (VAR_6[7] == 0xa0) && (VAR_6[8] == 0x23)) {
  FUNC_0 (1, "STV(e): Could not get descriptor 0200.");
  goto error;
 }
 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x8a, 0, VAR_6, 0x02)) != 0x02)
  goto error;
 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x8b, 0, VAR_6, 0x24)) != 0x24)
  goto error;
 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x85, 0, VAR_6, 0x10)) != 0x10)
  goto error;

 VAR_4->SupportedModes = VAR_6[7];
 VAR_5 = VAR_4->SupportedModes;
 VAR_4->CIF = 0;
 VAR_4->VGA = 0;
 VAR_4->QVGA = 0;
 if (VAR_5 & 1)
  VAR_4->CIF = 1;
 if (VAR_5 & 2)
  VAR_4->VGA = 1;
 if (VAR_5 & 8)
  VAR_4->QVGA = 1;
 if (VAR_4->SupportedModes == 0) {
  FUNC_0 (0, "STV(e): There are NO supported STV680 modes!!");
  VAR_5 = -1;
  goto error;
 } else {
  if (VAR_4->CIF)
   FUNC_0 (0, "STV(i): CIF is supported");
  if (VAR_4->QVGA)
   FUNC_0 (0, "STV(i): QVGA is supported");
 }

 FUNC_0 (1, "STV(i): Firmware rev is %i.%i", VAR_6[0], VAR_6[1]);
 FUNC_0 (1, "STV(i): ASIC rev is %i.%i", VAR_6[2], VAR_6[3]);
 FUNC_0 (1, "STV(i): Sensor ID is %i", (VAR_6[4]*16) + (VAR_6[5]>>4));


 if ((VAR_5 = FUNC_4 (VAR_4, 1, 0, 1)) < 0)
  goto error;

 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x85, 0, VAR_6, 0x10)) != 0x10)
  goto error;
 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x8d, 0, VAR_6, 0x08)) != 0x08)
  goto error;
 VAR_5 = VAR_6[3];
 FUNC_0 (0, "STV(i): Camera has %i pictures.", VAR_5);


 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x87, 0, VAR_6, 0x08)) != 0x08)
  goto error;
 VAR_4->origMode = VAR_6[0];


 FUNC_3 (VAR_6, 0, 8);
 if (VAR_4->CIF)
  VAR_6[0] = 0x00;
 else if (VAR_4->QVGA)
  VAR_6[0] = 0x03;
 if ((VAR_5 = FUNC_6 (3, VAR_4, 0x07, 0x0100, VAR_6, 0x08)) != 0x08) {
  FUNC_0 (0, "STV(i): Set_Camera_Mode failed");
  VAR_5 = -1;
  goto error;
 }
 VAR_6[0] = 0xf0;
 FUNC_6 (0, VAR_4, 0x87, 0, VAR_6, 0x08);
 if (((VAR_4->CIF == 1) && (VAR_6[0] != 0x00)) || ((VAR_4->QVGA == 1) && (VAR_6[0] != 0x03))) {
  FUNC_0 (0, "STV(e): Error setting camera video mode!");
  VAR_5 = -1;
  goto error;
 } else {
  if (VAR_6[0] == 0) {
   VAR_4->VideoMode = 0x0000;
   FUNC_0 (0, "STV(i): Video Mode set to CIF");
  }
  if (VAR_6[0] == 0x03) {
   VAR_4->VideoMode = 0x0300;
   FUNC_0 (0, "STV(i): Video Mode set to QVGA");
  }
 }
 if ((VAR_5 = FUNC_6 (0, VAR_4, 0x8f, 0, VAR_6, 0x10)) != 0x10)
  goto error;
 VAR_7 = (VAR_6[0] << 24) | (VAR_6[1] << 16) | (VAR_6[2] << 8) | (VAR_6[3]);
 VAR_4->cwidth = (VAR_6[4] << 8) | (VAR_6[5]);
 VAR_4->cheight = (VAR_6[6] << 8) | (VAR_6[7]);
 VAR_4->origGain = VAR_6[12];

 goto exit;

error:
 VAR_5 = FUNC_6 (0, VAR_4, 0x80, 0, VAR_6, 0x02);
 FUNC_0 (1, "STV(i): last error: %i,  command = 0x%x", VAR_6[0], VAR_6[1]);
 FUNC_1(VAR_6);
 return -1;

exit:
 FUNC_1(VAR_6);


 if (VAR_4->CIF == 1) {
  VAR_4->maxwidth = 352;
  VAR_4->maxheight = 288;
  VAR_4->vwidth = 352;
  VAR_4->vheight = 288;
 }
 if (VAR_4->QVGA == 1) {
  VAR_4->maxwidth = 320;
  VAR_4->maxheight = 240;
  VAR_4->vwidth = 320;
  VAR_4->vheight = 240;
 }

 VAR_4->rawbufsize = VAR_7;
 VAR_4->maxframesize = VAR_7 * 3;
 FUNC_0 (2, "STV(i): cwidth = %i, cheight = %i", VAR_4->cwidth, VAR_4->cheight);
 FUNC_0 (1, "STV(i): width = %i, height = %i, rawbufsize = %li", VAR_4->vwidth, VAR_4->vheight, VAR_4->rawbufsize);


 VAR_4->bulk_in_endpointAddr = 0x82;
 VAR_4->dropped = 0;
 VAR_4->error = 0;
 VAR_4->framecount = 0;
 VAR_4->readcount = 0;
 VAR_4->streaming = 0;

 VAR_4->brightness = 32767;
 VAR_4->chgbright = 0;
 VAR_4->whiteness = 0;
 VAR_4->colour = 32767;
 VAR_4->contrast = 32767;
 VAR_4->hue = 32767;
 VAR_4->palette = VAR_1;
 VAR_4->depth = 24;
 if ((VAR_3 == 0) && (VAR_2 == 0))
  FUNC_0 (1, "STV(i): swapRGB is (auto) OFF");
 else if ((VAR_3 == 0) && (VAR_2 == 1))
  FUNC_0 (1, "STV(i): swapRGB is (auto) ON");
 else if (VAR_3 == 1)
  FUNC_0 (1, "STV(i): swapRGB is (forced) ON");
 else if (VAR_3 == -1)
  FUNC_0 (1, "STV(i): swapRGB is (forced) OFF");

 if (FUNC_5 (VAR_4) < 0) {
  FUNC_0 (0, "STV(e): Could not set video mode in stv_init");
  return -1;
 }

 return 0;
}
