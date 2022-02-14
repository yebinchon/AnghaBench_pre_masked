
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_info {int par; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8
FUNC_3(struct fb_info *VAR_1, u8 VAR_2, int VAR_3)
{
 while (FUNC_1(VAR_1->par, VAR_0) & VAR_2) {
  FUNC_2(10);
  if (!--VAR_3) {
   FUNC_0("wait_bitclear timeout\n");
   break;
  }
 }

 return VAR_3;
}
