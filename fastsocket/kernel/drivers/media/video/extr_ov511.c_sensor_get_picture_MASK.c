
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_picture {int whiteness; int hue; int colour; int brightness; int contrast; } ;
struct usb_ov511 {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct usb_ov511*,int *) ;
 int FUNC_3 (struct usb_ov511*,int *) ;
 int FUNC_4 (struct usb_ov511*,int *) ;
 int FUNC_5 (struct usb_ov511*,int *) ;

__attribute__((used)) static int
FUNC_6(struct usb_ov511 *VAR_0, struct video_picture *VAR_1)
{
 int VAR_2;

 FUNC_1(4, "sensor_get_picture");




 VAR_2 = FUNC_3(VAR_0, &(VAR_1->contrast));
 if (FUNC_0(VAR_2))
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, &(VAR_1->brightness));
 if (FUNC_0(VAR_2))
  return VAR_2;

 VAR_2 = FUNC_5(VAR_0, &(VAR_1->colour));
 if (FUNC_0(VAR_2))
  return VAR_2;

 VAR_2 = FUNC_4(VAR_0, &(VAR_1->hue));
 if (FUNC_0(VAR_2))
  return VAR_2;

 VAR_1->whiteness = 105 << 8;

 return 0;
}
