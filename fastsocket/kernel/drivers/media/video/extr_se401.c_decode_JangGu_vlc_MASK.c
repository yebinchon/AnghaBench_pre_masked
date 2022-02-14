
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int dummy; } ;


 int FUNC_0 (struct usb_se401*,int) ;

__attribute__((used)) static inline void FUNC_1(struct usb_se401 *VAR_0,
   unsigned char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 VAR_1 += 4;
 while (VAR_4 < VAR_3) {
  VAR_8 = 8;
  while (VAR_8 && VAR_2) {
   VAR_9 = ((*VAR_1) >> (VAR_8-1))&1;
   if (!VAR_5) {
    if (VAR_9) {
     VAR_6++;
    } else {
     if (!VAR_6)
      FUNC_0(VAR_0, 0);
     else {
      VAR_5 = 2;
      VAR_7 = 0;
     }
    }
   } else {
    if (VAR_5 == 2) {
     if (!VAR_9)
      VAR_7 = -(1 << VAR_6) + 1;
     VAR_5--;
    }
    VAR_6--;
    VAR_7 += VAR_9 << VAR_6;
    if (!VAR_6) {
     FUNC_0(VAR_0, VAR_7);
     VAR_5 = 0;
    }
   }
   VAR_8--;
   VAR_2--;
  }
  VAR_4++;
  VAR_1++;
 }
}
