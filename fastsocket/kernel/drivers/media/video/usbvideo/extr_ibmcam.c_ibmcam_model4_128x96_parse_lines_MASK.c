
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvd {int debug; TYPE_1__* dev; int dp; } ;
struct usbvideo_frame {int curline; int request; int deinterlace; } ;
typedef int lineBuffer ;
typedef enum ParseState { ____Placeholder_ParseState } ParseState ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbvideo_frame*,int,int,int,int,int) ;
 int FUNC_1 (int *,unsigned char*,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum ParseState FUNC_7(
 struct uvd *VAR_7,
 struct usbvideo_frame *VAR_8,
 long *VAR_9)
{
 const unsigned char *VAR_10, *VAR_11, *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15;
 const int VAR_16=128, VAR_17=96;
 static unsigned char VAR_18[128*5];

 VAR_15 = FUNC_3(VAR_8->request) * VAR_2;







 if ((VAR_8->curline + 1) >= VAR_17) {
  if (VAR_7->debug >= 3)
   FUNC_6(&VAR_7->dev->dev,
     "Reached line %d. (frame is done)\n",
     VAR_8->curline);
  return VAR_5;
 }







 VAR_13 = 5 * VAR_16;
 FUNC_5(VAR_13 <= sizeof(VAR_18));


 if (FUNC_2(&VAR_7->dp) < VAR_13)
  return VAR_6;


 FUNC_1(&VAR_7->dp, VAR_18, VAR_13);

 VAR_10 = VAR_18;
 VAR_11 = VAR_18 + 1;
 VAR_12 = VAR_18 + VAR_16*2 + VAR_16/2;
 for (VAR_14 = 0; VAR_14 < FUNC_3(VAR_8->request); VAR_14++) {
  int VAR_19, VAR_20, VAR_21;
  if (VAR_14 < VAR_16) {
   const int VAR_22 = VAR_14 * 2;
   VAR_20 = VAR_10[VAR_22];
   VAR_19 = VAR_11[VAR_22];
   VAR_21 = VAR_12[VAR_22];
   if (VAR_3 & VAR_1) {
    unsigned long VAR_23;
    VAR_23 = VAR_19 + VAR_20 + VAR_21;
    VAR_23 /= 3;
    if (VAR_23 > 0xFF)
     VAR_23 = 0xFF;
    VAR_19 = VAR_20 = VAR_21 = (unsigned char) VAR_23;
   }
  } else {
   VAR_19 = VAR_20 = VAR_21 = 0;
  }
  FUNC_0(VAR_8, VAR_14, VAR_8->curline, VAR_19, VAR_20, VAR_21);
 }
 VAR_8->deinterlace = VAR_0;
 VAR_8->curline++;
 *VAR_9 += VAR_15;

 if (VAR_8->curline >= FUNC_4(VAR_8->request)) {
  if (VAR_7->debug >= 3) {
   FUNC_6(&VAR_7->dev->dev,
     "All requested lines (%ld.) done.\n",
     FUNC_4(VAR_8->request));
  }
  return VAR_5;
 } else
  return VAR_4;
}
