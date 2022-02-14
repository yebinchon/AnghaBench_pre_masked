
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame_num; } ;
struct uvd {int max_frame_size; int curframe; TYPE_1__ stats; int dp; } ;
struct usbvideo_frame {int seqRead_Length; int data; int frameState; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct uvd *VAR_1, struct usbvideo_frame *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1 != ((void*)0));
 FUNC_2(VAR_2 != ((void*)0));


 VAR_3 = FUNC_1(&VAR_1->dp);
 if (VAR_3 > 0) {
  int VAR_4;

  VAR_4 = VAR_1->max_frame_size - VAR_2->seqRead_Length;
  if (VAR_3 > VAR_4)
   VAR_3 = VAR_4;

  FUNC_0(
   &VAR_1->dp,
   VAR_2->data + VAR_2->seqRead_Length,
   VAR_4);
  VAR_2->seqRead_Length += VAR_4;
 }

 if (VAR_2->seqRead_Length >= VAR_1->max_frame_size) {
  VAR_2->frameState = VAR_0;
  VAR_1->curframe = -1;
  VAR_1->stats.frame_num++;
 }
}
