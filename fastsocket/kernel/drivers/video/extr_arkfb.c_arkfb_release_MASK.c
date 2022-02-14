
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct arkfb_info* par; } ;
struct arkfb_info {int ref_count; int open_lock; int dac; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_2, int VAR_3)
{
 struct arkfb_info *VAR_4 = VAR_2->par;

 FUNC_1(&(VAR_4->open_lock));
 if (VAR_4->ref_count == 0) {
  FUNC_2(&(VAR_4->open_lock));
  return -VAR_1;
 }

 if (VAR_4->ref_count == 1) {
  FUNC_3(&(VAR_4->state));
  FUNC_0(VAR_4->dac, VAR_0);
 }

 VAR_4->ref_count--;
 FUNC_2(&(VAR_4->open_lock));

 return 0;
}
