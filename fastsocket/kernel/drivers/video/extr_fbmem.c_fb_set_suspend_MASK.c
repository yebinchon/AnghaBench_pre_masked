
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int state; } ;
struct fb_event {struct fb_info* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct fb_event*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;

void FUNC_3(struct fb_info *VAR_4, int VAR_5)
{
 struct fb_event VAR_6;

 if (!FUNC_1(VAR_4))
  return;
 VAR_6.info = VAR_4;
 if (VAR_5) {
  FUNC_0(VAR_3, &VAR_6);
  VAR_4->state = VAR_1;
 } else {
  VAR_4->state = VAR_0;
  FUNC_0(VAR_2, &VAR_6);
 }
 FUNC_2(VAR_4);
}
