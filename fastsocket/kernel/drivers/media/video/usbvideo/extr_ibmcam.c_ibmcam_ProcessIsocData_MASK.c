
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_num; } ;
struct uvd {scalar_t__ videosize; int curframe; int max_frame_size; TYPE_1__ stats; int dp; } ;
struct usbvideo_frame {scalar_t__ scanstate; long seqRead_Length; int frameState; int data; int flags; } ;
typedef enum ParseState { ____Placeholder_ParseState } ParseState ;
struct TYPE_4__ {int camera_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct uvd*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct uvd*) ;
 int FUNC_3 (struct uvd*,struct usbvideo_frame*,long*) ;
 int FUNC_4 (struct uvd*,struct usbvideo_frame*,long*) ;
 int FUNC_5 (struct uvd*,struct usbvideo_frame*,long*) ;
 int FUNC_6 (struct uvd*,struct usbvideo_frame*,long*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_8(struct uvd *VAR_15,
       struct usbvideo_frame *VAR_16)
{
 enum ParseState VAR_17;
 long VAR_18 = 0;
 int VAR_19 = FUNC_0(VAR_15)->camera_model;

 while (1) {
  VAR_17 = VAR_14;
  if (FUNC_1(&VAR_15->dp) > 0) {
   if (VAR_16->scanstate == VAR_6) {
    VAR_17 = FUNC_2(VAR_15);
   } else if (VAR_16->scanstate == VAR_5) {
    if ((VAR_19 == VAR_2) &&
        ((VAR_15->videosize == VAR_11) ||
         (VAR_15->videosize == VAR_9) ||
         (VAR_15->videosize == VAR_10)))
    {
     VAR_17 = FUNC_3(
      VAR_15, VAR_16, &VAR_18);
    } else if (VAR_19 == VAR_4) {





     if ((VAR_15->videosize == VAR_11) ||
         (VAR_15->videosize == VAR_9) ||
         (VAR_15->videosize == VAR_10))
     {
      VAR_17 = FUNC_3(VAR_15, VAR_16, &VAR_18);
     } else if (VAR_15->videosize == VAR_8) {
      VAR_17 = FUNC_5(VAR_15, VAR_16, &VAR_18);
     } else {
      VAR_17 = FUNC_6(VAR_15, VAR_16, &VAR_18);
     }
    } else if (VAR_19 == VAR_3) {
     VAR_17 = FUNC_4(VAR_15, VAR_16, &VAR_18);
    } else {
     VAR_17 = FUNC_6(VAR_15, VAR_16, &VAR_18);
    }
   }
  }
  if (VAR_17 == VAR_12)
   continue;
  else if ((VAR_17 == VAR_13) || (VAR_17 == VAR_14))
   break;
  else
   return;
 }

 if (VAR_17 == VAR_13) {
  VAR_16->frameState = VAR_0;
  VAR_15->curframe = -1;
  VAR_15->stats.frame_num++;
  if ((VAR_19 == VAR_2) || (VAR_19 == VAR_4)) {

   VAR_16->flags |= VAR_7;
  }
 }


 VAR_16->seqRead_Length += VAR_18;
}
