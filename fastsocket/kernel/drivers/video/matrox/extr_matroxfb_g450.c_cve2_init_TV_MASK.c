
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mavenregs {int dummy; } ;
struct matrox_fb_info {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct matrox_fb_info*,int,int) ;

__attribute__((used)) static void FUNC_2(struct matrox_fb_info *VAR_0,
    const struct mavenregs *VAR_1)
{
 int VAR_2;

 FUNC_0(0x80);
 FUNC_0(0x82); FUNC_0(0x83);
 FUNC_0(0x84); FUNC_0(0x85);

 FUNC_1(VAR_0, 0x3E, 0x01);

 for (VAR_2 = 0; VAR_2 < 0x3E; VAR_2++) {
  FUNC_0(VAR_2);
 }
 FUNC_1(VAR_0, 0x3E, 0x00);
}
