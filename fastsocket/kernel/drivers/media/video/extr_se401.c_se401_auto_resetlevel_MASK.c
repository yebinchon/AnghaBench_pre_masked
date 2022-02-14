
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int resetlevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_se401*,int ) ;
 int FUNC_1 (struct usb_se401*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct usb_se401 *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8 = VAR_5->resetlevel;




 FUNC_0(VAR_5, VAR_1);
 FUNC_0(VAR_5, VAR_2);
 FUNC_0(VAR_5, VAR_3);
 FUNC_0(VAR_5, VAR_4);
 VAR_6 = 256*FUNC_0(VAR_5, VAR_1) +
     FUNC_0(VAR_5, VAR_2);
 VAR_7 = 256*FUNC_0(VAR_5, VAR_3) +
     FUNC_0(VAR_5, VAR_4);


 if (VAR_7 > 10) {
  while (VAR_7 >= 10 && VAR_5->resetlevel < 63) {
   VAR_5->resetlevel++;
   VAR_7 /= 2;
  }
 } else if (VAR_6 > 20) {
  while (VAR_6 >= 20 && VAR_5->resetlevel > 0) {
   VAR_5->resetlevel--;
   VAR_6 /= 2;
  }
 }
 if (VAR_5->resetlevel != VAR_8)
  FUNC_1(VAR_5, VAR_0, VAR_5->resetlevel);

 return;
}
