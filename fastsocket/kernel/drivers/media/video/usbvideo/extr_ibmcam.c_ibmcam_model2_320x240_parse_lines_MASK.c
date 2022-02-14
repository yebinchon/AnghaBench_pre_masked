
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colour; } ;
struct uvd {int videosize; int dp; TYPE_1__ vpic; } ;
struct usbvideo_frame {int request; int curline; unsigned char* data; int deinterlace; } ;
typedef int lineBuffer ;
typedef enum ParseState { ____Placeholder_ParseState } ParseState ;
struct TYPE_4__ {int has_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct usbvideo_frame*,int,int,int,int,int) ;
 int FUNC_3 (int *,unsigned char*,unsigned int) ;
 unsigned int FUNC_4 (int *) ;
 int VAR_3 ;



 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum ParseState FUNC_10(
 struct uvd *VAR_8,
 struct usbvideo_frame *VAR_9,
 long *VAR_10)
{
 unsigned char *VAR_11, *VAR_12, *VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17, VAR_18=0, VAR_19;
 int VAR_20, VAR_21;
 static unsigned char VAR_22[352*2];

 switch (VAR_8->videosize) {
 case 130:
 case 129:
 case 128:
  VAR_20 = FUNC_5(VAR_8->videosize);
  VAR_21 = FUNC_6(VAR_8->videosize);
  break;
 default:
  FUNC_8("ibmcam_model2_320x240_parse_lines: Wrong mode.");
  return VAR_7;
 }

 VAR_19 = (VAR_8->vpic.colour) >> 8;
 VAR_15 = FUNC_5(VAR_9->request) * VAR_3;

 VAR_14 = VAR_20 * 2;
 FUNC_7(VAR_14 <= sizeof(VAR_22));


 if (FUNC_4(&VAR_8->dp) < VAR_14)
  return VAR_7;


 FUNC_3(&VAR_8->dp, VAR_22, VAR_14);







 if ((VAR_9->curline + 2) >= FUNC_6(VAR_9->request))
  return VAR_6;

 VAR_12 = VAR_22;
 VAR_13 = VAR_22 + VAR_20;
 VAR_11 = VAR_9->data + (VAR_15 * VAR_9->curline);


 for (VAR_16 = 0; VAR_16 < FUNC_5(VAR_9->request); VAR_16++) {
  int VAR_23, VAR_24, VAR_25, VAR_26;

  VAR_17 = VAR_16 & (~1);


  if ((VAR_4 & VAR_1) && (FUNC_0(VAR_8)->has_hdr)) {
   if (FUNC_0(VAR_8)->has_hdr == 1) {
    VAR_26 = 0;
    VAR_25 = 0xFF;
    VAR_24 = 0xFF;
   } else {
    VAR_26 = 0xFF;
    VAR_25 = 0xFF;
    VAR_24 = 0;
   }
   FUNC_0(VAR_8)->has_hdr = 0;
   goto make_pixel;
  }







  if (((VAR_9->curline + 2) >= VAR_21) || (VAR_16 >= VAR_20)) {
   const int VAR_27 = VAR_16 * VAR_3;




   FUNC_9(VAR_11, 0, VAR_15 - VAR_27);
   break;
  }
  VAR_24 = VAR_12[VAR_16];
  VAR_25 = VAR_13[VAR_17 + 1];
  VAR_26 = VAR_13[VAR_17 + 0];

  VAR_23 = (VAR_24 + VAR_25 + VAR_26) / 3;

  if (VAR_4 & VAR_2)
   VAR_24 = VAR_25 = VAR_26 = VAR_23;
  else if (VAR_19 != 128) {


   VAR_24 -= VAR_23;
   VAR_25 -= VAR_23;
   VAR_26 -= VAR_23;


   VAR_24 = (VAR_24 * VAR_19) / 128;
   VAR_25 = (VAR_25 * VAR_19) / 128;
   VAR_26 = (VAR_26 * VAR_19) / 128;


   VAR_24 += VAR_23;
   VAR_25 += VAR_23;
   VAR_26 += VAR_23;


   FUNC_1(VAR_24, 0, 255);
   FUNC_1(VAR_25, 0, 255);
   FUNC_1(VAR_26, 0, 255);
  }

 make_pixel:
  FUNC_2(VAR_9, VAR_16, VAR_9->curline, VAR_24, VAR_25, VAR_26);
 }






 VAR_9->curline += 2;
 *VAR_10 += VAR_15 * 2;
 VAR_9->deinterlace = VAR_0;

 if (VAR_18 || (VAR_9->curline >= FUNC_6(VAR_9->request)))
  return VAR_6;
 else
  return VAR_5;
}
