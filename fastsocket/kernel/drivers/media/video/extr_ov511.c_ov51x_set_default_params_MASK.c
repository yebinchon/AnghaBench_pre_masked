
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {TYPE_1__* frame; int maxheight; int maxwidth; } ;
struct TYPE_2__ {scalar_t__ format; int depth; scalar_t__ bytes_read; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct usb_ov511*,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct usb_ov511 *VAR_5)
{
 int VAR_6;



 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5->frame[VAR_6].width = VAR_5->maxwidth;
  VAR_5->frame[VAR_6].height = VAR_5->maxheight;
  VAR_5->frame[VAR_6].bytes_read = 0;
  if (VAR_3)
   VAR_5->frame[VAR_6].format = VAR_3;
  else
   VAR_5->frame[VAR_6].format = VAR_2;

  VAR_5->frame[VAR_6].depth = FUNC_1(VAR_5->frame[VAR_6].format);
 }

 FUNC_0(3, "%dx%d, %s", VAR_5->maxwidth, VAR_5->maxheight,
        FUNC_3(VAR_4, VAR_5->frame[0].format));


 if (FUNC_2(VAR_5, VAR_5->maxwidth, VAR_5->maxheight,
      VAR_5->frame[0].format, 0) < 0)
  return -VAR_0;

 return 0;
}
