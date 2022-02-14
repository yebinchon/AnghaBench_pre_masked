
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int node; } ;







 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct fb_info *VAR_1)
{
 switch (VAR_0) {
 case 129:
  FUNC_0("fb%d: unblank\n", VAR_1->node);
  FUNC_2(0x01, 0x00, 0x20);
  FUNC_1(0x17, 0x80, 0x80);
  break;
 case 131:
  FUNC_0("fb%d: blank\n", VAR_1->node);
  FUNC_2(0x01, 0x20, 0x20);
  FUNC_1(0x17, 0x80, 0x80);
  break;
 case 130:
 case 132:
 case 128:
  FUNC_0("fb%d: sync down\n", VAR_1->node);
  FUNC_2(0x01, 0x20, 0x20);
  FUNC_1(0x17, 0x00, 0x80);
  break;
 }
 return 0;
}
