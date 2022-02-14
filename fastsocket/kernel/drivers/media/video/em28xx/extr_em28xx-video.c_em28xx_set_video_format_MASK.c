
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_fmt {int dummy; } ;
struct em28xx {unsigned int width; unsigned int height; int vscale; int hscale; struct em28xx_fmt* format; } ;


 int VAR_0 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (struct em28xx*) ;
 struct em28xx_fmt* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct em28xx*,unsigned int,unsigned int,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_1, unsigned int VAR_2,
       unsigned VAR_3, unsigned VAR_4)
{
 struct em28xx_fmt *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_1->format = VAR_5;
 VAR_1->width = VAR_3;
 VAR_1->height = VAR_4;


 FUNC_3(VAR_1, VAR_1->width, VAR_1->height, &VAR_1->hscale, &VAR_1->vscale);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
