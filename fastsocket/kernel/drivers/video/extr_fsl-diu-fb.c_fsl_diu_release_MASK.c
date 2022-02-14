
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfb_info {scalar_t__ count; int index; } ;
struct fb_info {struct mfb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_1, int VAR_2)
{
 struct mfb_info *VAR_3 = VAR_1->par;
 int VAR_4 = 0;

 FUNC_2(&VAR_0);
 VAR_3->count--;
 if (VAR_3->count == 0) {
  FUNC_1("release plane index %d\n", VAR_3->index);
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0)
   VAR_3->count++;
 }
 FUNC_3(&VAR_0);
 return VAR_4;
}
