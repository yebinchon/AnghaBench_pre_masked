
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int cwidth; int cheight; size_t curframe; struct se401_frame* frame; int readcount; int framecount; int error; } ;
struct se401_scratch {unsigned char* data; int length; int offset; } ;
struct se401_frame {unsigned char* data; int curpix; scalar_t__ grabstate; unsigned char* curline; int curlinepix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct usb_se401 *VAR_4,
      struct se401_scratch *VAR_5)
{
 unsigned char *VAR_6 = VAR_5->data;
 int VAR_7 = VAR_5->length;
 int VAR_8 = VAR_5->offset;
 int VAR_9 = VAR_4->cwidth * VAR_4->cheight;
 struct se401_frame *VAR_10 = &VAR_4->frame[VAR_4->curframe];
 unsigned char *VAR_11 = VAR_10->data, *VAR_12, *VAR_13;
 int VAR_14 = VAR_4->cwidth;
 int VAR_15 = 0, VAR_16;
 int VAR_17 = VAR_14 * 3, VAR_18;


 if (VAR_10->curpix == 0) {
  if (VAR_10->grabstate == VAR_2)
   VAR_10->grabstate = VAR_1;

  VAR_10->curline = VAR_11 + VAR_17;
  VAR_10->curlinepix = 0;
 }

 if (VAR_8 != VAR_10->curpix) {

  VAR_10->curpix = 0;
  VAR_4->error++;
  return;
 }


 if (VAR_10->curpix + VAR_7 > VAR_9)
  VAR_7 = VAR_9-VAR_10->curpix;

 if (VAR_4->cheight % 4)
  VAR_15 = 1;
 VAR_16 = VAR_10->curpix / VAR_4->cwidth+VAR_15;

 VAR_12 = VAR_10->curline;
 VAR_13 = VAR_12 + VAR_17;
 if (VAR_13 >= VAR_11+VAR_9 * 3)
  VAR_13 = VAR_12;
 while (VAR_7) {
  if (VAR_10->curlinepix >= VAR_14) {
   VAR_10->curlinepix -= VAR_14;
   VAR_16 = VAR_10->curpix / VAR_14 + VAR_15;
   VAR_12 += VAR_17*2;
   VAR_13 += VAR_17*2;
   if (VAR_12 >= VAR_11+VAR_9 * 3) {
    VAR_10->curlinepix++;
    VAR_12 -= 3;
    VAR_13 -= 3;
    VAR_7--;
    VAR_6++;
    VAR_10->curpix++;
   }
   if (VAR_13 >= VAR_11+VAR_9*3)
    VAR_13 = VAR_12;
  }
  if (VAR_16 & 1) {
   if (VAR_10->curlinepix & 1) {
    *(VAR_12 + 2) = *VAR_6;
    *(VAR_12 - 1) = *VAR_6;
    *(VAR_13 + 2) = *VAR_6;
    *(VAR_13 - 1) = *VAR_6;
   } else {
    *(VAR_12 + 1) =
     (*(VAR_12 + 1) + *VAR_6) / 2;
    *(VAR_12-2) =
     (*(VAR_12 - 2) + *VAR_6) / 2;
    *(VAR_13 + 1) = *VAR_6;
    *(VAR_13 - 2) = *VAR_6;
   }
  } else {
   if (VAR_10->curlinepix & 1) {
    *(VAR_12 + 1) =
     (*(VAR_12 + 1) + *VAR_6) / 2;
    *(VAR_12 - 2) =
     (*(VAR_12 - 2) + *VAR_6) / 2;
    *(VAR_13 + 1) = *VAR_6;
    *(VAR_13 - 2) = *VAR_6;
   } else {
    *VAR_12 = *VAR_6;
    *(VAR_12 - 3) = *VAR_6;
    *VAR_13 = *VAR_6;
    *(VAR_13 - 3) = *VAR_6;
   }
  }
  VAR_10->curlinepix++;
  VAR_12 -= 3;
  VAR_13 -= 3;
  VAR_7--;
  VAR_6++;
  VAR_10->curpix++;
 }
 VAR_10->curline = VAR_12;

 if (VAR_10->curpix >= VAR_9) {

  VAR_11 += VAR_17;
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
   VAR_11--;
   *VAR_11 = *(VAR_11 + VAR_17);
  }

  for (VAR_18 = 0; VAR_18 < VAR_4->cheight; VAR_18++) {
   *VAR_11 = *(VAR_11 + 3);
   *(VAR_11 + 1) = *(VAR_11 + 4);
   *(VAR_11 + 2) = *(VAR_11 + 5);
   VAR_11 += VAR_17;
  }
  VAR_10->curpix = 0;
  VAR_10->grabstate = VAR_0;
  VAR_4->framecount++;
  VAR_4->readcount++;
  if (VAR_4->frame[(VAR_4->curframe + 1) &
      (VAR_3 - 1)].grabstate == VAR_2) {
   VAR_4->curframe = (VAR_4->curframe+1) &
       (VAR_3-1);
  }
 }
}
