
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct fb_videomode {int console; int framebuffer; } ;
struct fb_info {int node; } ;
struct fb_event {struct fb_videomode* data; struct fb_info* info; } ;
struct fb_con2fbmap {int console; int framebuffer; } ;
struct fb_blit_caps {int console; int framebuffer; } ;
 int * VAR_0 ;
 int FUNC_0 (struct fb_info*,int) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_info*,struct fb_videomode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct fb_info*,struct fb_videomode*) ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (struct fb_info*) ;
 int FUNC_11 (struct fb_info*) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct notifier_block *VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 struct fb_event *VAR_5 = VAR_4;
 struct fb_info *VAR_6 = VAR_5->info;
 struct fb_videomode *VAR_7;
 struct fb_con2fbmap *VAR_8;
 struct fb_blit_caps *VAR_9;
 int VAR_10, VAR_11 = 0;





 if (VAR_1 && !(VAR_3 == 140 ||
      VAR_3 == 138))
  goto done;

 switch(VAR_3) {
 case 128:
  FUNC_11(VAR_6);
  break;
 case 130:
  FUNC_9(VAR_6);
  break;
 case 135:
  FUNC_6(VAR_6);
  break;
 case 134:
  FUNC_10(VAR_6);
  break;
 case 133:
  VAR_7 = VAR_5->data;
  VAR_11 = FUNC_5(VAR_6, VAR_7);
  break;
 case 139:
  VAR_10 = VAR_6->node;
  VAR_11 = FUNC_2(VAR_10);
  break;
 case 140:
  VAR_11 = FUNC_1(VAR_6);
  break;
 case 138:
  VAR_11 = FUNC_3(VAR_6);
  break;
 case 129:
  VAR_8 = VAR_5->data;
  VAR_11 = FUNC_12(VAR_8->console - 1,
         VAR_8->framebuffer, 1);
  break;
 case 137:
  VAR_8 = VAR_5->data;
  VAR_8->framebuffer = VAR_0[VAR_8->console - 1];
  break;
 case 141:
  FUNC_0(VAR_6, *(int *)VAR_5->data);
  break;
 case 132:
  FUNC_7(VAR_6);
  break;
 case 136:
  VAR_9 = VAR_5->data;
  FUNC_4(VAR_6, VAR_9);
  break;
 case 131:
  VAR_10 = VAR_6->node;
  FUNC_8(VAR_10);
  break;
 }
done:
 return VAR_11;
}
