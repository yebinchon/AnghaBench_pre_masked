
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_se401 {size_t curframe; int cwidth; int vlcdatapos; int* vlcdata; int cheight; TYPE_1__* frame; int error; int readcount; int framecount; } ;
struct se401_scratch {unsigned char* data; int length; } ;
struct TYPE_2__ {int curpix; scalar_t__ grabstate; scalar_t__ data; scalar_t__ curline; scalar_t__ curlinepix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_se401*,int*,int,int) ;
 int FUNC_1 (int*,unsigned char*,int) ;

__attribute__((used)) static inline void FUNC_2(struct usb_se401 *VAR_4,
      struct se401_scratch *VAR_5)
{
 unsigned char *VAR_6 = VAR_5->data;
 int VAR_7 = VAR_5->length;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12;
 int VAR_13 = 0;


 if (!VAR_4->frame[VAR_4->curframe].curpix) {
  VAR_4->frame[VAR_4->curframe].curlinepix = 0;
  VAR_4->frame[VAR_4->curframe].curline =
      VAR_4->frame[VAR_4->curframe].data+
      VAR_4->cwidth * 3 - 1;
  if (VAR_4->frame[VAR_4->curframe].grabstate == VAR_2)
   VAR_4->frame[VAR_4->curframe].grabstate = VAR_1;
  VAR_4->vlcdatapos = 0;
 }
 while (VAR_13 < VAR_7) {
  VAR_12 = 1024 - VAR_4->vlcdatapos;
  if (VAR_12+VAR_13 > VAR_7)
   VAR_12 = VAR_7-VAR_13;
  FUNC_1(VAR_4->vlcdata+VAR_4->vlcdatapos, VAR_6+VAR_13, VAR_12);
  VAR_4->vlcdatapos += VAR_12;
  VAR_11 = 0;
  if (VAR_4->vlcdatapos >= 4) {
   VAR_8 = VAR_4->vlcdata[3] + (VAR_4->vlcdata[2] << 8);
   VAR_9 = VAR_4->vlcdata[1] +
     ((VAR_4->vlcdata[0] & 0x3f) << 8);
   VAR_10 = VAR_4->vlcdata[0] & 0xc0;
   VAR_11 = ((VAR_8 + 47) >> 4) << 1;
   if (VAR_11 > 1024) {
    VAR_4->vlcdatapos = 0;
    VAR_13 = VAR_7;
    VAR_11 = 0;
    VAR_4->error++;
    VAR_4->frame[VAR_4->curframe].curpix = 0;
   }
  }
  if (VAR_11 && VAR_4->vlcdatapos >= VAR_11) {
   FUNC_0(VAR_4, VAR_4->vlcdata, VAR_8,
        VAR_11);
   VAR_4->frame[VAR_4->curframe].curpix += VAR_9 * 3;
   VAR_13 += VAR_12-(VAR_4->vlcdatapos-VAR_11);
   VAR_4->vlcdatapos = 0;
   if (VAR_4->frame[VAR_4->curframe].curpix >= VAR_4->cwidth * VAR_4->cheight * 3) {
    if (VAR_4->frame[VAR_4->curframe].curpix == VAR_4->cwidth * VAR_4->cheight * 3) {
     if (VAR_4->frame[VAR_4->curframe].grabstate == VAR_1) {
      VAR_4->frame[VAR_4->curframe].grabstate = VAR_0;
      VAR_4->framecount++;
      VAR_4->readcount++;
     }
     if (VAR_4->frame[(VAR_4->curframe + 1) & (VAR_3 - 1)].grabstate == VAR_2)
      VAR_4->curframe = (VAR_4->curframe + 1) & (VAR_3 - 1);
    } else
     VAR_4->error++;
    VAR_4->frame[VAR_4->curframe].curpix = 0;
    VAR_13 = VAR_7;
   }
  } else
   VAR_13 += VAR_12;
 }
}
