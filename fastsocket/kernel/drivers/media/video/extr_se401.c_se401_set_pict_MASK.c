
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_picture {scalar_t__ palette; int hue; scalar_t__ brightness; int whiteness; } ;
struct usb_se401 {scalar_t__ palette; int hue; int rgain; int bgain; scalar_t__ brightness; int enhance; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_se401*) ;
 int FUNC_1 (struct usb_se401*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct usb_se401 *VAR_1, struct video_picture *VAR_2)
{
 if (VAR_2->palette != VAR_0)
  return 1;
 VAR_1->palette = VAR_2->palette;
 if (VAR_2->hue != VAR_1->hue) {
  VAR_1->rgain = VAR_2->hue >> 10;
  VAR_1->bgain = 0x40-(VAR_2->hue >> 10);
  VAR_1->hue = VAR_2->hue;
 }
 if (VAR_2->brightness != VAR_1->brightness)
  FUNC_1(VAR_1, VAR_2->brightness);

 if (VAR_2->whiteness >= 32768)
  VAR_1->enhance = 1;
 else
  VAR_1->enhance = 0;
 FUNC_0(VAR_1);
 FUNC_0(VAR_1);
 return 0;
}
