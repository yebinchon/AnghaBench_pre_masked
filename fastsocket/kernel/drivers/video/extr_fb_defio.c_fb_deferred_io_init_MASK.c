
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int deferred_work; TYPE_1__* fbops; struct fb_deferred_io* fbdefio; } ;
struct fb_deferred_io {scalar_t__ delay; int pagelist; int lock; } ;
struct TYPE_2__ {int fb_mmap; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fb_info *VAR_3)
{
 struct fb_deferred_io *VAR_4 = VAR_3->fbdefio;

 FUNC_0(!VAR_4);
 FUNC_3(&VAR_4->lock);
 VAR_3->fbops->fb_mmap = VAR_1;
 FUNC_1(&VAR_3->deferred_work, VAR_2);
 FUNC_2(&VAR_4->pagelist);
 if (VAR_4->delay == 0)
  VAR_4->delay = VAR_0;
}
