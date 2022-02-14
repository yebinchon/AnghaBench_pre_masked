
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int header_count; } ;
struct uvd {scalar_t__ curframe; int debug; TYPE_2__ stats; TYPE_1__* dev; int dp; int videosize; struct usbvideo_frame* frame; } ;
struct usbvideo_frame {int header; scalar_t__ curline; int scanstate; } ;
struct TYPE_7__ {int has_hdr; int camera_model; } ;
typedef TYPE_3__ ibmcam_t ;
typedef enum ParseState { ____Placeholder_ParseState } ParseState ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 TYPE_3__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,int) ;
 int const FUNC_3 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct uvd*,int,int) ;

__attribute__((used)) static enum ParseState FUNC_8(struct uvd *VAR_10)
{
 struct usbvideo_frame *VAR_11;
 ibmcam_t *VAR_12;

 if ((VAR_10->curframe) < 0 || (VAR_10->curframe >= VAR_5)) {
  FUNC_6("ibmcam_find_header: Illegal frame %d.", VAR_10->curframe);
  return VAR_8;
 }
 VAR_12 = FUNC_0(VAR_10);
 FUNC_4(VAR_12 != ((void*)0));
 VAR_11 = &VAR_10->frame[VAR_10->curframe];
 VAR_12->has_hdr = 0;
 switch (VAR_12->camera_model) {
 case 132:
 {
  const int VAR_13 = 4;
  while (FUNC_3(&VAR_10->dp) >= VAR_13) {
   if ((FUNC_2(&VAR_10->dp, 0) == 0x00) &&
       (FUNC_2(&VAR_10->dp, 1) == 0xFF) &&
       (FUNC_2(&VAR_10->dp, 2) == 0x00))
   {





    VAR_11->header = FUNC_2(&VAR_10->dp, 3);
    if ((VAR_11->header == VAR_1) ||
        (VAR_11->header == VAR_2) ||
        (VAR_11->header == VAR_3))
    {




     FUNC_1(&VAR_10->dp, VAR_13);
     VAR_12->has_hdr = 1;
     break;
    }
   }

   FUNC_1(&VAR_10->dp, 1);
  }
  break;
 }
 case 131:
case 129:
 {
  int VAR_14 = 0;
  switch (VAR_10->videosize) {
  case 128:
   VAR_14 = 10;
   break;
  default:
   VAR_14 = 2;
   break;
  }
  while (FUNC_3(&VAR_10->dp) >= VAR_14) {
   if ((FUNC_2(&VAR_10->dp, 0) == 0x00) &&
       (FUNC_2(&VAR_10->dp, 1) == 0xFF))
   {



    FUNC_1(&VAR_10->dp, VAR_14);
    VAR_12->has_hdr = 1;
    VAR_11->header = VAR_2;
    break;
   }

   FUNC_1(&VAR_10->dp, 1);
  }
  break;
 }
 case 130:
 {
  const int VAR_15 = 4;
  while (FUNC_3(&VAR_10->dp) >= VAR_15) {
   if ((FUNC_2(&VAR_10->dp, 0) == 0x00) &&
       (FUNC_2(&VAR_10->dp, 1) == 0xFF) &&
       (FUNC_2(&VAR_10->dp, 2) != 0xFF))
   {




    unsigned long VAR_16, VAR_17;

    VAR_16 = FUNC_2(&VAR_10->dp, 2);
    VAR_17 = FUNC_2(&VAR_10->dp, 3);
    VAR_11->header = (VAR_16 << 8) | VAR_17;



    FUNC_1(&VAR_10->dp, VAR_15);
    VAR_12->has_hdr = 1;
    break;
   }

   FUNC_1(&VAR_10->dp, 1);
  }
  break;
 }
 default:
  break;
 }
 if (!VAR_12->has_hdr) {
  if (VAR_10->debug > 2)
   FUNC_5(&VAR_10->dev->dev,
     "Skipping frame, no header\n");
  return VAR_8;
 }


 VAR_12->has_hdr = 1;
 VAR_10->stats.header_count++;
 VAR_11->scanstate = VAR_4;
 VAR_11->curline = 0;

 if (VAR_6 & VAR_0) {
  FUNC_7(VAR_10, 1, 1);
  return VAR_9;
 }
 return VAR_7;
}
