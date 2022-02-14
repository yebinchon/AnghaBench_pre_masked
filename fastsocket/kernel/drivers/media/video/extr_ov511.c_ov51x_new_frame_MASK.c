
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int curframe; long maxwidth; long maxheight; struct ov511_frame* frame; int dev; } ;
struct ov511_frame {scalar_t__ grabstate; long width; long height; scalar_t__ snapshot; int scanstate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,long,...) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct usb_ov511 *VAR_4, int VAR_5)
{
 struct ov511_frame *VAR_6;
 int VAR_7;

 FUNC_0(4, "ov->curframe = %d, framenum = %d", VAR_4->curframe, VAR_5);

 if (!VAR_4->dev)
  return -1;



 if (VAR_4->curframe == -1) {
  VAR_7 = (VAR_5 - 1 + VAR_2) % VAR_2;
  if (VAR_4->frame[VAR_7].grabstate == VAR_1)
   VAR_5 = VAR_7;
 } else
  return 0;

 VAR_6 = &VAR_4->frame[VAR_5];

 FUNC_0(4, "framenum = %d, width = %d, height = %d", VAR_5,
        VAR_6->width, VAR_6->height);

 VAR_6->grabstate = VAR_0;
 VAR_6->scanstate = VAR_3;
 VAR_6->snapshot = 0;

 VAR_4->curframe = VAR_5;


 if (VAR_6->width > VAR_4->maxwidth)
  VAR_6->width = VAR_4->maxwidth;

 VAR_6->width &= ~7L;

 if (VAR_6->height > VAR_4->maxheight)
  VAR_6->height = VAR_4->maxheight;

 VAR_6->height &= ~3L;

 return 0;
}
