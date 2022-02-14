
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmiofb_par {unsigned int* pseudo_palette; } ;
struct fb_info {struct tmiofb_par* par; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      struct fb_info *VAR_6)
{
 struct tmiofb_par *VAR_7 = VAR_6->par;

 if (VAR_1 < FUNC_0(VAR_7->pseudo_palette)) {
  VAR_7->pseudo_palette[VAR_1] =
   ((VAR_2 & 0xf800)) |
   ((VAR_3 & 0xfc00) >> 5) |
   ((VAR_4 & 0xf800) >> 11);
  return 0;
 }

 return -VAR_0;
}
