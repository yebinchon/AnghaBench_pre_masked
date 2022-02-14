
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_device {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_device* FUNC_0 (void*) ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (void*,int) ;

u8
FUNC_3(void *VAR_2, int VAR_3, u16 VAR_4)
{
 struct nouveau_device *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->card_type >= VAR_1)
  return FUNC_2(VAR_2, 0x601000 + VAR_4);

 if (VAR_4 == 0x03c0 || VAR_4 == 0x03c1 ||
     VAR_4 == 0x03c2 || VAR_4 == 0x03da ||
     VAR_4 == 0x03d4 || VAR_4 == 0x03d5)
  return FUNC_2(VAR_2, 0x601000 + (VAR_3 * 0x2000) + VAR_4);

 if (VAR_4 == 0x03c2 || VAR_4 == 0x03cc ||
     VAR_4 == 0x03c4 || VAR_4 == 0x03c5 ||
     VAR_4 == 0x03ce || VAR_4 == 0x03cf) {
  if (VAR_5->card_type < VAR_0)
   VAR_3 = 0;
  return FUNC_2(VAR_2, 0x0c0000 + (VAR_3 * 0x2000) + VAR_4);
 }

 FUNC_1(VAR_2, "unknown vga port 0x%04x\n", VAR_4);
 return 0x00;
}
