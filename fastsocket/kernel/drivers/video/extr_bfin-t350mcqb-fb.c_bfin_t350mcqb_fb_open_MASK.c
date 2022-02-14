
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct bfin_t350mcqbfb_info* par; } ;
struct bfin_t350mcqbfb_info {int lq043_open_cnt; int lock; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bfin_t350mcqbfb_info*) ;
 int FUNC_2 (struct bfin_t350mcqbfb_info*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct fb_info *VAR_1, int VAR_2)
{
 struct bfin_t350mcqbfb_info *VAR_3 = VAR_1->par;

 FUNC_8(&VAR_3->lock);
 VAR_3->lq043_open_cnt++;

 if (VAR_3->lq043_open_cnt <= 1) {

  FUNC_3();
  FUNC_0();

  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
  FUNC_5();


  FUNC_7(VAR_0);
  FUNC_4();
  FUNC_6();
 }

 FUNC_9(&VAR_3->lock);

 return 0;
}
