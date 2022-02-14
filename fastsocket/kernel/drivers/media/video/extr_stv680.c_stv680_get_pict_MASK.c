
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_picture {int depth; int palette; int hue; int contrast; int colour; int whiteness; int brightness; } ;
struct usb_stv {int depth; int palette; int hue; int contrast; int colour; int whiteness; int brightness; } ;



__attribute__((used)) static int FUNC_0 (struct usb_stv *VAR_0, struct video_picture *VAR_1)
{


 VAR_1->brightness = VAR_0->brightness;
 VAR_1->whiteness = VAR_0->whiteness;
 VAR_1->colour = VAR_0->colour;
 VAR_1->contrast = VAR_0->contrast;
 VAR_1->hue = VAR_0->hue;
 VAR_1->palette = VAR_0->palette;
 VAR_1->depth = VAR_0->depth;
 return 0;
}
