
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, struct fb_info *VAR_3)
{
 if (VAR_2)
  *(unsigned int *) VAR_0 |= VAR_1;
 else
  *(unsigned int *) VAR_0 &= ~VAR_1;
 return 0;
}
