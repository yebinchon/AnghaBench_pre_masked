
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int streaming; int cwidth; int cheight; int* width; int sizes; int* height; } ;


 int FUNC_0 (struct usb_se401*) ;
 int FUNC_1 (struct usb_se401*) ;

__attribute__((used)) static int FUNC_2(struct usb_se401 *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->streaming;

 if (VAR_0->cwidth == VAR_1 && VAR_0->cheight == VAR_2)
  return 0;


 if (!VAR_1 || !VAR_2)
  return 1;
 if ((VAR_1 & 1) || (VAR_2 & 1))
  return 1;
 if (VAR_1 > VAR_0->width[VAR_0->sizes-1])
  return 1;
 if (VAR_2 > VAR_0->height[VAR_0->sizes-1])
  return 1;


 if (VAR_3)
  FUNC_1(VAR_0);
 VAR_0->cwidth = VAR_1;
 VAR_0->cheight = VAR_2;
 if (VAR_3)
  FUNC_0(VAR_0);
 return 0;
}
