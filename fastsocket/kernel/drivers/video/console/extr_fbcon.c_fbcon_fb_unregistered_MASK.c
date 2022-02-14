
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int node; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int ** VAR_8 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = VAR_9->node;
 for (VAR_10 = VAR_3; VAR_10 <= VAR_5; VAR_10++) {
  if (VAR_1[VAR_10] == VAR_11)
   VAR_1[VAR_10] = -1;
 }

 if (VAR_11 == VAR_4) {
  VAR_4 = -1;

  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_8[VAR_10] != ((void*)0)) {
    VAR_4 = VAR_10;
    break;
   }
  }
 }

 if (VAR_4 != -1) {
  for (VAR_10 = VAR_3; VAR_10 <= VAR_5; VAR_10++) {
   if (VAR_1[VAR_10] == -1)
    VAR_1[VAR_10] = VAR_4;
  }
 }

 if (VAR_7 == VAR_11)
  VAR_7 = -1;

 if (!VAR_6)
  FUNC_0(&VAR_2);

 return 0;
}
