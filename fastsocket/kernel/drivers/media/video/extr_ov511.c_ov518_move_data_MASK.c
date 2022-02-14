
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {int maxwidth; int maxheight; size_t curframe; int minwidth; int minheight; struct ov511_frame* frame; TYPE_1__* dev; scalar_t__ packet_numbering; } ;
struct timeval {int dummy; } ;
struct ov511_frame {scalar_t__ scanstate; int bytes_recvd; int rawwidth; int width; int rawheight; int height; scalar_t__ grabstate; int snapshot; int compressed; scalar_t__ rawdata; int framenum; int wq; scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,int,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_5 (struct timeval*) ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__,unsigned char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void
FUNC_8(struct usb_ov511 *VAR_8, unsigned char *VAR_9, int VAR_10)
{
 int VAR_11 = FUNC_1(VAR_8->maxwidth, VAR_8->maxheight);
 struct ov511_frame *VAR_12 = &VAR_8->frame[VAR_8->curframe];
 struct timeval *VAR_13;


 if (VAR_8->packet_numbering)
  --VAR_10;



 if ((!(VAR_9[0] | VAR_9[1] | VAR_9[2] | VAR_9[3] | VAR_9[5])) && VAR_9[6]) {
  if (VAR_7) {
   FUNC_4(&VAR_8->dev->dev,
     "ph: %2x %2x %2x %2x %2x %2x %2x %2x\n",
     VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3], VAR_9[4], VAR_9[5],
     VAR_9[6], VAR_9[7]);
  }

  if (VAR_12->scanstate == VAR_4) {
   FUNC_2(4, "Detected frame end/start");
   goto eof;
  } else {

   FUNC_2(4, "Frame start, framenum = %d", VAR_8->curframe);
   goto sof;
  }
 } else {
  goto check_middle;
 }

eof:
 VAR_13 = (struct timeval *)(VAR_12->data
       + FUNC_0(VAR_8->maxwidth, VAR_8->maxheight));
 FUNC_5(VAR_13);

 FUNC_2(4, "Frame end, curframe = %d, hw=%d, vw=%d, recvd=%d",
  VAR_8->curframe,
  (int)(VAR_9[9]), (int)(VAR_9[10]), VAR_12->bytes_recvd);



 VAR_12->rawwidth = VAR_12->width;
 VAR_12->rawheight = VAR_12->height;


 FUNC_3(VAR_12->rawwidth, VAR_8->minwidth, VAR_8->maxwidth);
 FUNC_3(VAR_12->rawheight, VAR_8->minheight, VAR_8->maxheight);


 FUNC_3(VAR_12->bytes_recvd, 8, VAR_11);

 if (VAR_12->scanstate == VAR_4) {
  int VAR_14;

  VAR_12->grabstate = VAR_0;
  FUNC_7(&VAR_12->wq);



  VAR_14 = (VAR_8->curframe + 1) % VAR_3;
  if (VAR_8->frame[VAR_14].grabstate == VAR_2
      || VAR_8->frame[VAR_14].grabstate == VAR_1) {
   VAR_8->curframe = VAR_14;
   VAR_8->frame[VAR_14].scanstate = VAR_5;
   VAR_12 = &VAR_8->frame[VAR_14];
  } else {
   if (VAR_12->grabstate == VAR_0) {
    FUNC_2(4, "** Frame done **");
   } else {
    FUNC_2(4, "Frame not ready? state = %d",
           VAR_8->frame[VAR_14].grabstate);
   }

   VAR_8->curframe = -1;
   FUNC_2(4, "SOF dropped (no active frame)");
   return;
  }
 }
sof:
 FUNC_2(4, "Starting capture on frame %d", VAR_12->framenum);
 VAR_12->scanstate = VAR_4;
 VAR_12->bytes_recvd = 0;
 VAR_12->compressed = 1;

check_middle:

 if (VAR_12->scanstate != VAR_4) {
  FUNC_2(4, "scanstate: no SOF yet");
  return;
 }


 if (VAR_6 == 2) {
  VAR_12->bytes_recvd += VAR_10;
  if (VAR_12->bytes_recvd <= VAR_11)
   FUNC_6(VAR_12->rawdata + VAR_12->bytes_recvd - VAR_10, VAR_9, VAR_10);
  else
   FUNC_2(3, "Raw data buffer overrun!! (%d)",
    VAR_12->bytes_recvd - VAR_11);
 } else {
  int VAR_15, VAR_16 = 0, VAR_17, VAR_18 = 0;

  while (VAR_16 < VAR_10) {
   VAR_17 = 1;
   for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
    if (VAR_9[VAR_16 + VAR_15]) {
     VAR_17 = 0;
     break;
    }
   }

   if (VAR_17) {

   } else {
    if (VAR_12->bytes_recvd + VAR_18 + 8 <= VAR_11)
    {
     FUNC_6(VAR_12->rawdata
      + VAR_12->bytes_recvd + VAR_18,
      VAR_9 + VAR_16, 8);
     VAR_18 += 8;
    } else {
     FUNC_2(3, "Raw data buffer overrun!!");
    }
   }
   VAR_16 += 8;
  }
  VAR_12->bytes_recvd += VAR_18;
 }
}
