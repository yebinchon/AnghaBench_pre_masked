
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_info*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_3)
{
 u8 VAR_4 = 0;
 int VAR_5 = 10, VAR_6 = 0;

 do {
  VAR_4 = FUNC_0(VAR_3);
  VAR_4 &= VAR_2;
  if (VAR_4 != VAR_2)
   break;

  if (FUNC_1(1))
   return -VAR_1;

  VAR_5--;
 } while (VAR_5);

 if (VAR_4 == VAR_2)
  VAR_6 = -VAR_0;

 return VAR_6;
}
