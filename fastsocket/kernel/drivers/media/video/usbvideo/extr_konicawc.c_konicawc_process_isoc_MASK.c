
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int frame_num; } ;
struct uvd {int curframe; TYPE_2__ stats; int dp; TYPE_1__* dev; scalar_t__ user_data; } ;
struct usbvideo_frame {int curline; int seqRead_Length; int frameState; scalar_t__ data; int scanstate; } ;
struct konicawc {int maxline; int yplanesz; int lastframe; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct uvd *VAR_3, struct usbvideo_frame *VAR_4)
{
 struct konicawc *VAR_5 = (struct konicawc *)VAR_3->user_data;
 int VAR_6 = VAR_5->maxline;
 int VAR_7 = VAR_5->yplanesz;

 FUNC_5(VAR_4 != ((void*)0));

 FUNC_0(5, "maxline = %d yplanesz = %d", VAR_6, VAR_7);
 FUNC_0(3, "Frame state = %d", VAR_4->scanstate);

 if(VAR_4->scanstate == VAR_2) {
  int VAR_8 = 0;
  int VAR_9;
  int VAR_10 = 0;
  FUNC_0(3, "Searching for marker, queue len = %d", FUNC_4(&VAR_3->dp));
  while(FUNC_4(&VAR_3->dp) >= 4) {
   if ((FUNC_2(&VAR_3->dp, 0) == 0x00) &&
       (FUNC_2(&VAR_3->dp, 1) == 0xff) &&
       (FUNC_2(&VAR_3->dp, 2) == 0x00) &&
       (FUNC_2(&VAR_3->dp, 3) < 0x80)) {
    VAR_9 = FUNC_2(&VAR_3->dp, 3);
    if(VAR_5->lastframe >= 0) {
     VAR_10 = (0x80 + VAR_9 - VAR_5->lastframe) & 0x7F;
     VAR_10--;
     if(VAR_10) {
      FUNC_6(&VAR_3->dev->dev,
        "Dropped %d frames "
        "(%d -> %d)\n",
        VAR_10,
        VAR_5->lastframe,
        VAR_9);
     }
    }
    VAR_5->lastframe = VAR_9;
    VAR_4->curline = 0;
    VAR_4->scanstate = VAR_1;
    FUNC_1(&VAR_3->dp, 4);
    break;
   }
   FUNC_1(&VAR_3->dp, 1);
   VAR_8++;
  }
  if(VAR_8)
   FUNC_0(2, "dropped %d bytes looking for new frame", VAR_8);
 }

 if(VAR_4->scanstate == VAR_2)
  return;







 while ( VAR_4->curline < VAR_6 && (FUNC_4(&VAR_3->dp) >= 384)) {

  FUNC_3(&VAR_3->dp, VAR_4->data + (VAR_4->curline * 256), 256);

  FUNC_3(&VAR_3->dp, VAR_4->data + VAR_7 + (VAR_4->curline * 64), 64);

  FUNC_3(&VAR_3->dp, VAR_4->data + (5 * VAR_7)/4 + (VAR_4->curline * 64), 64);
  VAR_4->seqRead_Length += 384;
  VAR_4->curline++;
 }

 if (VAR_4->curline == VAR_6) {
  FUNC_0(5, "got whole frame");

  VAR_4->frameState = VAR_0;
  VAR_4->curline = 0;
  VAR_3->curframe = -1;
  VAR_3->stats.frame_num++;
 }
}
