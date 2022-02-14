
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {int dummy; } ;
struct usbvideo_frame {int dummy; } ;


 int FUNC_0 (struct uvd*,struct usbvideo_frame*,int,int,char const) ;

__attribute__((used)) static void FUNC_1(struct uvd *VAR_0, struct usbvideo_frame *VAR_1,
       int VAR_2, int VAR_3, const char *VAR_4)
{
 while (*VAR_4) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, *VAR_4);
  VAR_4++;
  VAR_2 += 4;
 }
}
