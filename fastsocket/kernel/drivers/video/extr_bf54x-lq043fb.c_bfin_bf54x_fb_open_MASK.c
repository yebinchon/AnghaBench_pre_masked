
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct bfin_bf54xfb_info* par; } ;
struct bfin_bf54xfb_info {int lq043_open_cnt; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bfin_bf54xfb_info*) ;
 int FUNC_4 (struct bfin_bf54xfb_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_2, int VAR_3)
{
 struct bfin_bf54xfb_info *VAR_4 = VAR_2->par;

 FUNC_6(&VAR_4->lock);
 VAR_4->lq043_open_cnt++;

 if (VAR_4->lq043_open_cnt <= 1) {

  FUNC_2(0);
  FUNC_0();

  FUNC_3(VAR_4);
  FUNC_4(VAR_4);


  FUNC_5(VAR_0);
  FUNC_2(FUNC_1() | VAR_1);
 }

 FUNC_7(&VAR_4->lock);

 return 0;
}
