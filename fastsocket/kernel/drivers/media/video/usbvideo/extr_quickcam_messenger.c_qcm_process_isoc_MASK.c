
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame_num; } ;
struct uvd {int curframe; TYPE_1__ stats; int dp; scalar_t__ user_data; } ;
struct usbvideo_frame {scalar_t__ scanstate; int curline; int seqRead_Length; int frameState; scalar_t__ data; } ;
struct rgb {int b2; int g2; int r2; int b; int g; int r; } ;
struct qcm {int size; int height; int width; scalar_t__ scratch; } ;
struct bayL1 {int b; int g; } ;
struct bayL0 {int r; int g; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int *) ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct uvd *VAR_4, struct usbvideo_frame *VAR_5)
{
 struct qcm *VAR_6 = (struct qcm *) VAR_4->user_data;
 int VAR_7;
 struct rgb *VAR_8;
 struct rgb *VAR_9;
 struct bayL0 *VAR_10;
 struct bayL1 *VAR_11;
 int VAR_12,VAR_13,VAR_14,VAR_15;
 FUNC_4(VAR_5 != ((void*)0));

 switch (VAR_6->size) {
 case 129:
  VAR_12 = 162; VAR_13 = 124; VAR_14 = 1; VAR_15 = 2;
  break;
 case 128:
 default:
  VAR_12 = 324; VAR_13 = 248; VAR_14 = 2; VAR_15 = 4;
  break;
 }

 if (VAR_5->scanstate == VAR_3) {
  while (FUNC_3(&VAR_4->dp) >=
    4 + (VAR_12*VAR_15 + VAR_14)) {
   if ((FUNC_1(&VAR_4->dp, 0) == 0x00) &&
       (FUNC_1(&VAR_4->dp, 1) == 0xff) &&
       (FUNC_1(&VAR_4->dp, 2) == 0x00) &&
       (FUNC_1(&VAR_4->dp, 3) == 0xff)) {
    VAR_5->curline = 0;
    VAR_5->scanstate = VAR_2;
    VAR_5->frameState = VAR_1;
    FUNC_0(&VAR_4->dp, 4);





    FUNC_0(&VAR_4->dp,
       (VAR_12*VAR_15 + VAR_14));
    break;
   }
   FUNC_0(&VAR_4->dp, 1);
  }
 }

 if (VAR_5->scanstate == VAR_3)
  return;






 while ( VAR_5->curline < VAR_6->height &&
  (FUNC_3(&VAR_4->dp) >= VAR_12*2)) {


  FUNC_2(&VAR_4->dp, VAR_6->scratch, VAR_12*2);
  VAR_10 = (struct bayL0 *) VAR_6->scratch;
  VAR_11 = (struct bayL1 *) (VAR_6->scratch + VAR_12);

  VAR_8 = (struct rgb *)
    ( VAR_5->data + (VAR_6->width*3*VAR_5->curline));

  VAR_9 = VAR_8 + (VAR_6->width/2);

  for (VAR_7=0; VAR_7 < VAR_6->width; VAR_7+=2) {
   VAR_8->r = VAR_10->r;
   VAR_8->g = VAR_10->g;
   VAR_8->b = VAR_11->b;

   VAR_8->r2 = VAR_10->r;
   VAR_8->g2 = VAR_11->g;
   VAR_8->b2 = VAR_11->b;

   VAR_9->r = VAR_10->r;
   VAR_9->g = VAR_11->g;
   VAR_9->b = VAR_11->b;

   VAR_9->r2 = VAR_10->r;
   VAR_9->g2 = VAR_11->g;
   VAR_9->b2 = VAR_11->b;

   VAR_8++;
   VAR_9++;

   VAR_10++;
   VAR_11++;
  }

  VAR_5->seqRead_Length += VAR_6->width*3*2;
  VAR_5->curline += 2;
 }

 if (VAR_5->curline == VAR_6->height) {
  VAR_5->frameState = VAR_0;
  VAR_5->curline = 0;
  VAR_4->curframe = -1;
  VAR_4->stats.frame_num++;
 }
}
