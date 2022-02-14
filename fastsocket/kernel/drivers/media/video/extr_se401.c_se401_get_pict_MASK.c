
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_picture {int whiteness; int colour; int contrast; int hue; int depth; int palette; int brightness; } ;
struct usb_se401 {int rgain; int palette; scalar_t__ enhance; int brightness; } ;



__attribute__((used)) static int FUNC_0(struct usb_se401 *VAR_0, struct video_picture *VAR_1)
{
 VAR_1->brightness = VAR_0->brightness;
 if (VAR_0->enhance)
  VAR_1->whiteness = 32768;
 else
  VAR_1->whiteness = 0;

 VAR_1->colour = 65535;
 VAR_1->contrast = 65535;
 VAR_1->hue = VAR_0->rgain << 10;
 VAR_1->palette = VAR_0->palette;
 VAR_1->depth = 3;
 return 0;
}
