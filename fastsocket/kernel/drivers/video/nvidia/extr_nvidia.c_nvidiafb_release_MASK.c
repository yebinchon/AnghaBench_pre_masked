
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int open_count; int initial_state; } ;
struct fb_info {struct nvidia_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvidia_par*,int *) ;
 int FUNC_1 (struct nvidia_par*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_1, int VAR_2)
{
 struct nvidia_par *VAR_3 = VAR_1->par;
 int VAR_4 = 0;

 if (!VAR_3->open_count) {
  VAR_4 = -VAR_0;
  goto done;
 }

 if (VAR_3->open_count == 1) {
  FUNC_0(VAR_3, &VAR_3->initial_state);
  FUNC_1(VAR_3);
 }

 VAR_3->open_count--;
done:
 return VAR_4;
}
