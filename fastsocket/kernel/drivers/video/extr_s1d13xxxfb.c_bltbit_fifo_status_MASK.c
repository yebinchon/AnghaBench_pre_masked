
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_info {int par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u8
FUNC_1(struct fb_info *VAR_4)
{
 u8 VAR_5;

 VAR_5 = FUNC_0(VAR_4->par, VAR_3);


 if (VAR_5 & VAR_0)
  return 16;


 if (VAR_5 & VAR_1)
  return 0;


 if (VAR_5 & VAR_2)
  return 1;

 return 0;
}
