
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_window {int width; int height; } ;
struct uvd {int curframe; TYPE_1__* frame; int dp; scalar_t__ user_data; } ;
struct qcm {int size; } ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_3__ {scalar_t__ seqRead_Index; scalar_t__ seqRead_Length; scalar_t__ curline; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct uvd*) ;
 int FUNC_5 (struct uvd*) ;
 int FUNC_6 (struct uvd*) ;

__attribute__((used)) static int FUNC_7(struct uvd *VAR_3, struct video_window *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = VAR_4->width;
 int VAR_9 = VAR_4->height;
 struct qcm *VAR_10 = (struct qcm *) VAR_3->user_data;

 if (VAR_8 > 0 && VAR_9 > 0) {
  FUNC_1(2, "trying to find size %d,%d", VAR_8, VAR_9);
  for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
   if ((VAR_2[VAR_6].width == VAR_8) &&
    (VAR_2[VAR_6].height == VAR_9))
    break;
  }
 } else
  VAR_6 = VAR_10->size;

 if (VAR_6 > VAR_1) {
  FUNC_1(1, "couldn't find size %d,%d", VAR_8, VAR_9);
  return -VAR_0;
 }

 if (VAR_6 == VAR_10->size) {
  FUNC_1(1, "Nothing to do");
  return 0;
 }

 FUNC_6(VAR_3);

 if (VAR_10->size != VAR_6) {
  VAR_7 = VAR_10->size;
  VAR_10->size = VAR_6;
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5) {
   FUNC_3("Couldn't set camera size, err=%d",VAR_5);

   VAR_10->size = VAR_7;
   return VAR_5;
  }
 }



 FUNC_2(&VAR_3->dp);
 if (VAR_3->curframe != -1) {
  VAR_3->frame[VAR_3->curframe].curline = 0;
  VAR_3->frame[VAR_3->curframe].seqRead_Length = 0;
  VAR_3->frame[VAR_3->curframe].seqRead_Index = 0;
 }

 FUNC_0(VAR_5, FUNC_5(VAR_3));
 return 0;
}
