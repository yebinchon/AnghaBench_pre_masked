
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int node; } ;


 int* VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7;

 VAR_7 = VAR_4->node;
 FUNC_0(VAR_4);

 if (VAR_2 == -1) {
  for (VAR_6 = VAR_1; VAR_6 <= VAR_3; VAR_6++) {
   if (VAR_0[VAR_6] == VAR_7) {
    VAR_2 = VAR_7;
    break;
   }
  }

  if (VAR_2 != -1)
   VAR_5 = FUNC_1(1);
 } else {
  for (VAR_6 = VAR_1; VAR_6 <= VAR_3; VAR_6++) {
   if (VAR_0[VAR_6] == VAR_7)
    FUNC_2(VAR_6, VAR_7, 0);
  }
 }

 return VAR_5;
}
