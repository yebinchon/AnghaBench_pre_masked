
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_window {int width; int height; int flags; } ;
struct uvd {int ifaceAltActive; int curframe; TYPE_1__* frame; int dp; scalar_t__ user_data; } ;
struct konicawc {int speed; int size; int lastframe; } ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_3__ {scalar_t__ seqRead_Index; scalar_t__ seqRead_Length; scalar_t__ curline; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct uvd*) ;
 int FUNC_4 (struct uvd*) ;
 int FUNC_5 (struct uvd*) ;
 int** VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_6(struct uvd *VAR_6, struct video_window *VAR_7)
{
 struct konicawc *VAR_8 = (struct konicawc *)VAR_6->user_data;
 int VAR_9 = VAR_8->speed;
 int VAR_10;
 int VAR_11 = VAR_7->width;
 int VAR_12 = VAR_7->height;
 int VAR_13 = VAR_7->flags;

 if(VAR_11 > 0 && VAR_12 > 0) {
  FUNC_0(2, "trying to find size %d,%d", VAR_11, VAR_12);
  for(VAR_10 = 0; VAR_10 <= VAR_1; VAR_10++) {
   if((VAR_3[VAR_10].width == VAR_11) && (VAR_3[VAR_10].height == VAR_12))
    break;
  }
 } else {
  VAR_10 = VAR_8->size;
 }

 if(VAR_10 > VAR_1) {
  FUNC_0(1, "couldn't find size %d,%d", VAR_11, VAR_12);
  return -VAR_0;
 }

 if(VAR_13 > 0) {
  FUNC_0(1, "trying to set fps to %d", VAR_13);
  VAR_9 = FUNC_2(VAR_10, VAR_13);
  FUNC_0(1, "find_fps returned %d (%d)", VAR_9, VAR_4[VAR_10][VAR_9]);
 }

 if(VAR_9 > VAR_2)
  return -VAR_0;

 FUNC_0(1, "setting size to %d speed to %d", VAR_10, VAR_9);
 if((VAR_10 == VAR_8->size) && (VAR_9 == VAR_8->speed)) {
  FUNC_0(1, "Nothing to do");
  return 0;
 }
 FUNC_0(0, "setting to  %dx%d @ %d fps", VAR_3[VAR_10].width,
      VAR_3[VAR_10].height, VAR_4[VAR_10][VAR_9]/3);

 FUNC_5(VAR_6);
 VAR_6->ifaceAltActive = VAR_5[VAR_9];
 FUNC_0(1, "new interface = %d", VAR_6->ifaceAltActive);
 VAR_8->speed = VAR_9;

 if(VAR_8->size != VAR_10) {
  VAR_8->size = VAR_10;
  FUNC_3(VAR_6);
 }



 FUNC_1(&VAR_6->dp);
 VAR_8->lastframe = -2;
 if(VAR_6->curframe != -1) {
  VAR_6->frame[VAR_6->curframe].curline = 0;
  VAR_6->frame[VAR_6->curframe].seqRead_Length = 0;
  VAR_6->frame[VAR_6->curframe].seqRead_Index = 0;
 }

 FUNC_4(VAR_6);
 return 0;
}
