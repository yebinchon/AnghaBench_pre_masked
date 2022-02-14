
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct fb_info *VAR_6 = VAR_5;

 if (VAR_3 || VAR_2)
  FUNC_2(VAR_6);
 if (VAR_2)
  FUNC_1(VAR_6);
 if (VAR_3)
  VAR_3 = 0;
 if (VAR_2)
  VAR_2 = 0;
 if (VAR_1) {
  FUNC_0();
  VAR_1 = 0;
 }
 return VAR_0;
}
