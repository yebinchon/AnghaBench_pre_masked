
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {int packet_size; int maxwidth; int maxheight; size_t curframe; int minwidth; int minheight; struct ov511_frame* frame; TYPE_1__* dev; } ;
struct timeval {int dummy; } ;
struct ov511_frame {int rawwidth; int rawheight; int bytes_recvd; scalar_t__ scanstate; scalar_t__ grabstate; int snapshot; unsigned char compressed; scalar_t__ rawdata; int wq; scalar_t__ data; } ;
typedef int in ;
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
 int FUNC_4 (int *,char*,int,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_5 (struct timeval*) ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__,unsigned char*,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void
FUNC_8(struct usb_ov511 *VAR_9, unsigned char *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 int VAR_14 = VAR_10[VAR_9->packet_size - 1];
 int VAR_15 = FUNC_1(VAR_9->maxwidth, VAR_9->maxheight);
 struct ov511_frame *VAR_16 = &VAR_9->frame[VAR_9->curframe];
 struct timeval *VAR_17;
 if (VAR_7) {
  FUNC_4(&VAR_9->dev->dev,
    "ph(%3d): %2x %2x %2x %2x %2x %2x %2x %2x %2x %2x %2x %2x\n",
    VAR_14, VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3], VAR_10[4], VAR_10[5], VAR_10[6],
    VAR_10[7], VAR_10[8], VAR_10[9], VAR_10[10], VAR_10[11]);
 }


 if ((VAR_10[0] | VAR_10[1] | VAR_10[2] | VAR_10[3] | VAR_10[4] | VAR_10[5] | VAR_10[6] | VAR_10[7]) ||
     (~VAR_10[8] & 0x08))
  goto check_middle;


 if (VAR_10[8] & 0x80) {
  VAR_17 = (struct timeval *)(VAR_16->data
        + FUNC_0(VAR_9->maxwidth, VAR_9->maxheight));
  FUNC_5(VAR_17);


  VAR_16->rawwidth = ((int)(VAR_10[9]) + 1) * 8;
  VAR_16->rawheight = ((int)(VAR_10[10]) + 1) * 8;

  FUNC_2(4, "Frame end, frame=%d, pnum=%d, w=%d, h=%d, recvd=%d",
   VAR_9->curframe, VAR_14, VAR_16->rawwidth, VAR_16->rawheight,
   VAR_16->bytes_recvd);


  FUNC_3(VAR_16->rawwidth, VAR_9->minwidth, VAR_9->maxwidth);
  FUNC_3(VAR_16->rawheight, VAR_9->minheight,
      VAR_9->maxheight);


  FUNC_3(VAR_16->bytes_recvd, 8, VAR_15);

  if (VAR_16->scanstate == VAR_4) {
   int VAR_18;

   VAR_16->grabstate = VAR_0;
   FUNC_7(&VAR_16->wq);



   VAR_18 = (VAR_9->curframe + 1) % VAR_3;
   if (VAR_9->frame[VAR_18].grabstate == VAR_2
       || VAR_9->frame[VAR_18].grabstate == VAR_1) {
    VAR_9->curframe = VAR_18;
    VAR_9->frame[VAR_18].scanstate = VAR_5;
   } else {
    if (VAR_16->grabstate == VAR_0) {
     FUNC_2(4, "** Frame done **");
    } else {
     FUNC_2(4, "Frame not ready? state = %d",
      VAR_9->frame[VAR_18].grabstate);
    }

    VAR_9->curframe = -1;
   }
  } else {
   FUNC_2(5, "Frame done, but not scanning");
  }



 } else {

  FUNC_2(4, "Frame start, framenum = %d", VAR_9->curframe);



  if (VAR_10[8] & 0x02) {
   VAR_16->snapshot = 1;
   FUNC_2(3, "snapshot detected");
  }

  VAR_16->scanstate = VAR_4;
  VAR_16->bytes_recvd = 0;
  VAR_16->compressed = VAR_10[8] & 0x40;
 }

check_middle:

 if (VAR_16->scanstate != VAR_4) {
  FUNC_2(5, "Not in a frame; packet skipped");
  return;
 }


 if (VAR_16->bytes_recvd == 0)
  VAR_13 = 9;
 else
  VAR_13 = 0;

 VAR_12 = VAR_11 - VAR_13 - 1;


 if (VAR_6 == 2) {
  VAR_16->bytes_recvd += VAR_11 - 1;
  if (VAR_16->bytes_recvd <= VAR_15)
   FUNC_6(VAR_16->rawdata + VAR_16->bytes_recvd - (VAR_11 - 1),
    VAR_10, VAR_11 - 1);
  else
   FUNC_2(3, "Raw data buffer overrun!! (%d)",
    VAR_16->bytes_recvd - VAR_15);
 } else if (!VAR_16->compressed && !VAR_8) {
  VAR_16->bytes_recvd += VAR_12;
  if (VAR_16->bytes_recvd <= VAR_15)
   FUNC_6(VAR_16->rawdata + VAR_16->bytes_recvd - VAR_12,
    VAR_10 + VAR_13, VAR_12);
  else
   FUNC_2(3, "Raw data buffer overrun!! (%d)",
    VAR_16->bytes_recvd - VAR_15);
 } else {
  int VAR_19, VAR_20 = 0, VAR_21, VAR_22 = 0;
  if (VAR_13) {
   VAR_16->bytes_recvd += 32 - VAR_13;
   FUNC_6(VAR_16->rawdata, VAR_10 + VAR_13, 32 - VAR_13);
   VAR_20 += 32;
  }

  while (VAR_20 < VAR_11 - 1) {
   VAR_21 = 1;
   for (VAR_19 = 0; VAR_19 < 32; VAR_19++) {
    if (VAR_10[VAR_20 + VAR_19]) {
     VAR_21 = 0;
     break;
    }
   }

   if (VAR_21) {

   } else {
    if (VAR_16->bytes_recvd + VAR_22 + 32 <= VAR_15)
    {
     FUNC_6(VAR_16->rawdata
      + VAR_16->bytes_recvd + VAR_22,
      VAR_10 + VAR_20, 32);
     VAR_22 += 32;
    } else {
     FUNC_2(3, "Raw data buffer overrun!!");
    }
   }
   VAR_20 += 32;
  }

  VAR_16->bytes_recvd += VAR_22;
 }
}
