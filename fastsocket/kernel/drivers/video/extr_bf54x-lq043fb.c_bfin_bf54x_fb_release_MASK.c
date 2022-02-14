
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct bfin_bf54xfb_info* par; } ;
struct bfin_bf54xfb_info {scalar_t__ lq043_open_cnt; int lock; scalar_t__ lq043_mmap; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_1, int VAR_2)
{
 struct bfin_bf54xfb_info *VAR_3 = VAR_1->par;

 FUNC_3(&VAR_3->lock);

 VAR_3->lq043_open_cnt--;
 VAR_3->lq043_mmap = 0;

 if (VAR_3->lq043_open_cnt <= 0) {

  FUNC_1(0);
  FUNC_0();
  FUNC_2(VAR_0);
 }

 FUNC_4(&VAR_3->lock);

 return 0;
}
