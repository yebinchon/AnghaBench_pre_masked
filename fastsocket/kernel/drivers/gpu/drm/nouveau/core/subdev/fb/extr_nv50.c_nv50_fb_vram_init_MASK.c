
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int size; int stolen; int ranks; int type; } ;
struct nouveau_fb {TYPE_1__ ram; int vram; } ;
struct nouveau_device {int chipset; } ;
struct nouveau_bios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nouveau_bios* FUNC_0 (struct nouveau_device*) ;
 int FUNC_1 (struct nouveau_bios*) ;
 int FUNC_2 (int *,int const,int,int) ;
 int FUNC_3 (struct nouveau_fb*) ;
 struct nouveau_device* FUNC_4 (struct nouveau_fb*) ;
 int FUNC_5 (struct nouveau_fb*,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_fb *VAR_7)
{
 struct nouveau_device *VAR_8 = FUNC_4(VAR_7);
 struct nouveau_bios *VAR_9 = FUNC_0(VAR_8);
 const u32 VAR_10 = ( 256 * 1024) >> 12;
 const u32 VAR_11 = (1024 * 1024) >> 12;
 u32 VAR_12, VAR_13 = 0;
 int VAR_14;

 VAR_7->ram.size = FUNC_5(VAR_7, 0x10020c);
 VAR_7->ram.size = (VAR_7->ram.size & 0xffffff00) |
         ((VAR_7->ram.size & 0x000000ff) << 32);

 VAR_12 = (VAR_7->ram.size >> 12) - VAR_10 - VAR_11;
 switch (VAR_8->chipset) {
 case 0xaa:
 case 0xac:
 case 0xaf:
  VAR_14 = FUNC_2(&VAR_7->vram, VAR_10, VAR_12, 1);
  if (VAR_14)
   return VAR_14;

  VAR_7->ram.type = VAR_6;
  VAR_7->ram.stolen = (u64)FUNC_5(VAR_7, 0x100e10) << 12;
  break;
 default:
  switch (FUNC_5(VAR_7, 0x100714) & 0x00000007) {
  case 0: VAR_7->ram.type = VAR_0; break;
  case 1:
   if (FUNC_1(VAR_9) == VAR_2)
    VAR_7->ram.type = VAR_2;
   else
    VAR_7->ram.type = VAR_1;
   break;
  case 2: VAR_7->ram.type = VAR_3; break;
  case 3: VAR_7->ram.type = VAR_4; break;
  case 4: VAR_7->ram.type = VAR_5; break;
  default:
   break;
  }

  VAR_14 = FUNC_2(&VAR_7->vram, VAR_10, VAR_12,
          FUNC_3(VAR_7) >> 12);
  if (VAR_14)
   return VAR_14;

  VAR_7->ram.ranks = (FUNC_5(VAR_7, 0x100200) & 0x4) ? 2 : 1;
  VAR_13 = FUNC_5(VAR_7, 0x100320);
  break;
 }

 return VAR_13;
}
