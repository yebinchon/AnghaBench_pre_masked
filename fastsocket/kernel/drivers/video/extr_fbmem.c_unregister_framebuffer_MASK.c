
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ addr; } ;
struct fb_info {int node; TYPE_2__* fbops; int modelist; TYPE_1__ pixmap; } ;
struct fb_event {struct fb_info* info; } ;
struct TYPE_4__ {int (* fb_destroy ) (struct fb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct fb_event*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct fb_info*) ;
 int VAR_7 ;
 int ** VAR_8 ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (struct fb_info*) ;

int
FUNC_9(struct fb_info *VAR_9)
{
 struct fb_event VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_11 = VAR_9->node;
 if (!VAR_8[VAR_11]) {
  VAR_12 = -VAR_0;
  goto done;
 }


 if (!FUNC_6(VAR_9))
  return -VAR_1;
 VAR_10.info = VAR_9;
 VAR_12 = FUNC_4(VAR_2, &VAR_10);
 FUNC_8(VAR_9);

 if (VAR_12) {
  VAR_12 = -VAR_0;
  goto done;
 }

 if (VAR_9->pixmap.addr &&
     (VAR_9->pixmap.flags & VAR_5))
  FUNC_5(VAR_9->pixmap.addr);
 FUNC_3(&VAR_9->modelist);
 VAR_8[VAR_11]=((void*)0);
 VAR_7--;
 FUNC_2(VAR_9);
 FUNC_1(VAR_6, FUNC_0(VAR_4, VAR_11));
 VAR_10.info = VAR_9;
 FUNC_4(VAR_3, &VAR_10);


 if (VAR_9->fbops->fb_destroy)
  VAR_9->fbops->fb_destroy(VAR_9);
done:
 return VAR_12;
}
