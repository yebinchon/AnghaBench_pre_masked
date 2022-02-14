
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_picture {scalar_t__ palette; scalar_t__ brightness; int depth; int hue; int contrast; int colour; int whiteness; } ;
struct usb_stv {scalar_t__ brightness; int chgbright; scalar_t__ palette; int depth; int hue; int contrast; int colour; int whiteness; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1 (struct usb_stv *VAR_1, struct video_picture *VAR_2)
{


 if (VAR_2->palette != VAR_0) {
  FUNC_0 (2, "STV(e): Palette set error in _set_pic");
  return 1;
 }

 if (VAR_1->brightness != VAR_2->brightness) {
  VAR_1->chgbright = 1;
  VAR_1->brightness = VAR_2->brightness;
 }

 VAR_1->whiteness = VAR_2->whiteness;
 VAR_1->colour = VAR_2->colour;
 VAR_1->contrast = VAR_2->contrast;
 VAR_1->hue = VAR_2->hue;
 VAR_1->palette = VAR_2->palette;
 VAR_1->depth = VAR_2->depth;

 return 0;
}
