
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int sizes; int* width; int* height; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_se401*,int ,int) ;
 int FUNC_1 (int,struct usb_se401*,int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_se401 *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0x03;
 int VAR_10 = VAR_7;
 int VAR_11 = VAR_6;







 while (VAR_8 < VAR_5->sizes && !(VAR_5->width[VAR_8] == VAR_6 &&
      VAR_5->height[VAR_8] == VAR_7))
  VAR_8++;
 while (VAR_8 < VAR_5->sizes) {
  if (VAR_5->width[VAR_8] == VAR_6 * 2 &&
    VAR_5->height[VAR_8] == VAR_7 * 2) {
   VAR_10 = VAR_5->height[VAR_8];
   VAR_11 = VAR_5->width[VAR_8];
   VAR_9 = 0x40;
  }
  if (VAR_5->width[VAR_8] == VAR_6 * 4 &&
    VAR_5->height[VAR_8] == VAR_7 * 4) {
   VAR_10 = VAR_5->height[VAR_8];
   VAR_11 = VAR_5->width[VAR_8];
   VAR_9 = 0x42;
  }
  VAR_8++;
 }

 FUNC_1(1, VAR_5, VAR_4, VAR_11, ((void*)0), 0);
 FUNC_1(1, VAR_5, VAR_3, VAR_10, ((void*)0), 0);
 FUNC_0(VAR_5, VAR_2, VAR_9);

 if (VAR_9 == 0x03)
  VAR_5->format = VAR_0;
 else
  VAR_5->format = VAR_1;
}
