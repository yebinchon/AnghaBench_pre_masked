
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hue; int colour; } ;
struct uvd {int debug; TYPE_2__* dev; int dp; TYPE_1__ vpic; } ;
struct usbvideo_frame {int header; int curline; int request; int deinterlace; } ;
typedef int lineBuffer ;
typedef enum ParseState { ____Placeholder_ParseState } ParseState ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int const,int const) ;
 int FUNC_1 (struct usbvideo_frame*,int,int,int,int,int) ;
 int FUNC_2 (int *,unsigned char*,unsigned int) ;
 unsigned int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int,int,int,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum ParseState FUNC_10(
 struct uvd *VAR_6,
 struct usbvideo_frame *VAR_7,
 long *VAR_8)
{
 unsigned char *VAR_9;
 const unsigned char *VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 const int VAR_13 = (VAR_6->vpic.hue - 0x8000) >> 10;
 const int VAR_14 = (VAR_2 - 128) / 4;
 const int VAR_15 = 128;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20=0, VAR_21=0, VAR_22;
 static unsigned char VAR_23[640*3];
 int VAR_24;

 VAR_22 = (VAR_6->vpic.colour - 0x8000) >> 8;
 FUNC_0(VAR_22, -VAR_15, VAR_15+1);

 VAR_12 = FUNC_4(VAR_7->request) * VAR_1;


 switch (VAR_7->header) {



 case 0x0308:
  VAR_20 = 640;
  VAR_21 = 480;
  break;
 case 0x0208:
  VAR_20 = 320;
  VAR_21 = 240;
  break;
 case 0x020A:
  VAR_20 = 160;
  VAR_21 = 120;
  break;



 case 0x0328:
 case 0x0368:
 case 0x0228:
 case 0x0268:
 case 0x02CA:
 case 0x02EA:

  FUNC_9("Unsupported mode $%04lx", VAR_7->header);
  return VAR_4;
 default:

  FUNC_9("Strange frame->header=$%08lx", VAR_7->header);
  return VAR_4;
 }







 if ((VAR_7->curline + 1) >= VAR_21) {
  if (VAR_6->debug >= 3)
   FUNC_8(&VAR_6->dev->dev,
     "Reached line %d. (frame is done)\n",
     VAR_7->curline);
  return VAR_4;
 }


 VAR_11 = 3 * VAR_20;
 FUNC_7(VAR_11 <= sizeof(VAR_23));


 if (FUNC_3(&VAR_6->dp) < VAR_11)
  return VAR_5;


 FUNC_2(&VAR_6->dp, VAR_23, VAR_11);

 VAR_9 = VAR_23;
 VAR_10 = VAR_9 + VAR_20;


 VAR_19 = (int)FUNC_5(VAR_7->request) - (int)(VAR_7->curline) - 1;
 FUNC_0(VAR_19, 0, FUNC_5(VAR_7->request)-1);


 for (VAR_24 = 0; VAR_24 < 2; VAR_24++) {
  for (VAR_16 = 0; VAR_16 < FUNC_4(VAR_7->request); VAR_16++) {
   int VAR_25;
   int VAR_26, VAR_27, VAR_28;

   if (VAR_16 >= VAR_20) {
    FUNC_1(VAR_7, VAR_16, VAR_19, 0, 0, 0);
    continue;
   }


   VAR_25 = VAR_9[(VAR_24 == 0) ? VAR_16 : (VAR_16*2 + 1)];


   VAR_17 = VAR_10[(VAR_16/2)*4] + VAR_13;
   VAR_18 = VAR_10[(VAR_16/2)*4 + 2] + VAR_14;


   if (VAR_22 != 0) {

    VAR_17 = 128 + ((VAR_15 + VAR_22) * (VAR_17 - 128)) / VAR_15;
    VAR_18 = 128 + ((VAR_15 + VAR_22) * (VAR_18 - 128)) / VAR_15;
   }


   FUNC_6(VAR_25, VAR_17, VAR_18, VAR_26, VAR_27, VAR_28);
   FUNC_1(VAR_7, VAR_16, VAR_19, VAR_26, VAR_27, VAR_28);
  }


  if (VAR_19 == 0)
   break;


  VAR_19--;
  VAR_9 = VAR_23 + VAR_20;
 }
 VAR_7->deinterlace = VAR_0;







 VAR_7->curline += 2;
 *VAR_8 += 2 * VAR_12;

 if (VAR_7->curline >= FUNC_5(VAR_7->request)) {
  if (VAR_6->debug >= 3) {
   FUNC_8(&VAR_6->dev->dev,
     "All requested lines (%ld.) done.\n",
     FUNC_5(VAR_7->request));
  }
  return VAR_4;
 } else
  return VAR_3;
}
