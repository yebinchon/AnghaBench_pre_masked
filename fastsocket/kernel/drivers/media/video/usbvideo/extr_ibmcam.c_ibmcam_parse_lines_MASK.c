
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hue; int colour; } ;
struct uvd {int videosize; int dp; TYPE_1__ vpic; } ;
struct usbvideo_frame {int request; int header; int curline; unsigned char* data; int deinterlace; } ;
typedef int lineBuffer ;
struct TYPE_5__ {scalar_t__ camera_model; int has_hdr; } ;
typedef TYPE_2__ ibmcam_t ;
typedef enum ParseState { ____Placeholder_ParseState } ParseState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (int,int const,int const) ;
 int FUNC_2 (struct usbvideo_frame*,int,int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (int *,unsigned char*,unsigned int) ;
 unsigned int FUNC_4 (int *) ;
 int VAR_5 ;



 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int,int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (unsigned char*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static enum ParseState FUNC_11(
 struct uvd *VAR_11,
 struct usbvideo_frame *VAR_12,
 long *VAR_13)
{
 unsigned char *VAR_14;
 ibmcam_t *VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;
 const int VAR_22 = (VAR_11->vpic.hue - 0x8000) >> 10;
 const int VAR_23 = (VAR_7 - 128) / 4;
 const int VAR_24 = 128;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29=0, VAR_30;
 static unsigned char VAR_31[640*3];
 unsigned const char *VAR_32, *VAR_33;

 FUNC_8(VAR_11 != ((void*)0));
 FUNC_8(VAR_12 != ((void*)0));
 VAR_15 = FUNC_0(VAR_11);
 FUNC_8(VAR_15 != ((void*)0));
 VAR_30 = (VAR_11->vpic.colour - 0x8000) >> 8;
 FUNC_1(VAR_30, -VAR_24, VAR_24+1);

 VAR_21 = FUNC_5(VAR_12->request) * VAR_5;

 if (FUNC_0(VAR_11)->camera_model == VAR_4) {

  switch (VAR_11->videosize) {
  case 130:
  case 129:
  case 128:
   VAR_17 = FUNC_5(VAR_11->videosize);
   VAR_18 = FUNC_6(VAR_11->videosize);
   break;
  default:
   FUNC_9("ibmcam_parse_lines: Wrong mode.");
   return VAR_10;
  }
  VAR_20 = 1;
  VAR_19 = 1;
 } else {
  switch (VAR_12->header) {
  case 133:
   VAR_17 = 128;
   VAR_18 = 96;
   VAR_19 = 1;
   break;
  case 132:
   VAR_17 = 176;
   VAR_18 = 144;
   VAR_19 = 1;
   break;
  case 131:
   VAR_17 = 352;
   VAR_18 = 288;
   VAR_19 = 0;
   break;
  default:
   FUNC_9("Unknown header signature 00 FF 00 %02lX", VAR_12->header);
   return VAR_9;
  }

  VAR_20 = (FUNC_0(VAR_11)->camera_model == VAR_3);
 }

 VAR_16 = VAR_17 * 3;
 FUNC_8(VAR_16 <= sizeof(VAR_31));
 if (FUNC_4(&VAR_11->dp) < VAR_16)
  return VAR_10;


 FUNC_3(&VAR_11->dp, VAR_31, VAR_16);







 if ((VAR_12->curline + 2) >= FUNC_6(VAR_12->request))
  return VAR_9;
 FUNC_8(VAR_12->data != ((void*)0));
 VAR_14 = VAR_12->data + (VAR_21 * VAR_12->curline);
 VAR_33 = VAR_31;
 VAR_32 = VAR_31 + VAR_17;
 for (VAR_28 = 0; VAR_28 < FUNC_5(VAR_12->request); VAR_28++)
 {
  unsigned char VAR_34, VAR_35, VAR_36;


  if ((VAR_6 & VAR_1) && (VAR_15->has_hdr)) {







   if (VAR_15->has_hdr == 1) {
    VAR_36 = 0;
    VAR_35 = 0xFF;
    VAR_34 = 0xFF;
   } else {
    VAR_36 = 0xFF;
    VAR_35 = 0xFF;
    VAR_34 = 0;
   }
   VAR_15->has_hdr = 0;
   goto make_pixel;
  }







  if (((VAR_12->curline + 2) >= VAR_18) || (VAR_28 >= VAR_17)) {
   const int VAR_37 = VAR_28 * VAR_5;




   FUNC_10(VAR_14, 0, VAR_21 - VAR_37);
   break;
  }

  VAR_25 = VAR_33[VAR_28];
  if (VAR_6 & VAR_2)
   VAR_34 = VAR_35 = VAR_36 = VAR_25;
  else {
   int VAR_38, VAR_39;

   VAR_38 = (VAR_28 >> 1) << 2;
   VAR_39 = VAR_38 + 2;

   if (VAR_20) {
    VAR_38++;
    VAR_39++;
   }
   if (!VAR_19) {
    VAR_38 += 2;
    VAR_39 -= 2;
   }
   VAR_26 = VAR_32[VAR_38] + VAR_22;
   VAR_27 = VAR_32[VAR_39] + VAR_23;


   if (VAR_30 != 0) {

    VAR_26 = 128 + ((VAR_24 + VAR_30) * (VAR_26 - 128)) / VAR_24;
    VAR_27 = 128 + ((VAR_24 + VAR_30) * (VAR_27 - 128)) / VAR_24;
   }
   FUNC_7(VAR_25, VAR_26, VAR_27, VAR_34, VAR_35, VAR_36);
  }

 make_pixel:
  *VAR_14++ = VAR_36;
  *VAR_14++ = VAR_35;
  *VAR_14++ = VAR_34;
  if (VAR_29)
   break;
 }






 VAR_12->curline += 2;
 if (VAR_13 != ((void*)0))
  *VAR_13 += 2 * VAR_21;
 VAR_12->deinterlace = VAR_0;

 if (VAR_29 || (VAR_12->curline >= FUNC_6(VAR_12->request)))
  return VAR_9;
 else
  return VAR_8;
}
