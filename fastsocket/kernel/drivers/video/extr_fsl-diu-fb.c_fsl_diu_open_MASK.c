
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfb_info {int count; int index; } ;
struct fb_info {int var; struct mfb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_1, int VAR_2)
{
 struct mfb_info *VAR_3 = VAR_1->par;
 int VAR_4 = 0;

 FUNC_4(&VAR_0);
 VAR_3->count++;
 if (VAR_3->count == 1) {
  FUNC_3("open plane index %d\n", VAR_3->index);
  FUNC_0(&VAR_1->var, VAR_1);
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4 < 0)
   VAR_3->count--;
  else {
   VAR_4 = FUNC_1(VAR_1);
   if (VAR_4 < 0)
    VAR_3->count--;
  }
 }

 FUNC_5(&VAR_0);
 return VAR_4;
}
