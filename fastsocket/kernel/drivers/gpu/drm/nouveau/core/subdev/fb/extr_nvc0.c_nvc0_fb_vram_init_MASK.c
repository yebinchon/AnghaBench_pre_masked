
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int ranks; int size; int type; } ;
struct nouveau_fb {int vram; TYPE_1__ ram; } ;
struct nouveau_bios {int dummy; } ;


 struct nouveau_bios* FUNC_0 (struct nouveau_fb*) ;
 int FUNC_1 (struct nouveau_bios*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const,int,int) ;
 int FUNC_4 (struct nouveau_fb*,char*,int,...) ;
 int FUNC_5 (struct nouveau_fb*,int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_fb *VAR_0)
{
 struct nouveau_bios *VAR_1 = FUNC_0(VAR_0);
 const u32 VAR_2 = ( 256 * 1024) >> 12;
 const u32 VAR_3 = (1024 * 1024) >> 12;
 u32 VAR_4 = FUNC_5(VAR_0, 0x022438);
 u32 VAR_5 = FUNC_5(VAR_0, 0x022554);
 u32 VAR_6 = FUNC_5(VAR_0, 0x10f20c);
 u32 VAR_7, VAR_8;
 bool VAR_9 = 1;
 int VAR_10, VAR_11;

 FUNC_4(VAR_0, "0x100800: 0x%08x\n", FUNC_5(VAR_0, 0x100800));
 FUNC_4(VAR_0, "parts 0x%08x mask 0x%08x\n", VAR_4, VAR_5);

 VAR_0->ram.type = FUNC_1(VAR_1);
 VAR_0->ram.ranks = (FUNC_5(VAR_0, 0x10f200) & 0x00000004) ? 2 : 1;


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (!(VAR_5 & (1 << VAR_11))) {
   u32 VAR_12 = FUNC_5(VAR_0, 0x11020c + (VAR_11 * 0x1000));
   if (VAR_12 != VAR_6) {
    if (VAR_12 < VAR_6)
     VAR_6 = VAR_12;
    VAR_9 = 0;
   }

   FUNC_4(VAR_0, "%d: mem_amount 0x%08x\n", VAR_11, VAR_12);
   VAR_0->ram.size += (u64)VAR_12 << 20;
  }
 }


 if (VAR_9) {
  VAR_7 = VAR_2;
  VAR_8 = (VAR_0->ram.size >> 12) - VAR_2 - VAR_3;
  return FUNC_3(&VAR_0->vram, VAR_7, VAR_8, 1);
 }


 VAR_10 = FUNC_3(&VAR_0->vram, VAR_2, (VAR_6 << 8) * VAR_4, 1);
 if (VAR_10)
  return VAR_10;


 VAR_7 = (0x0200000000ULL >> 12) + (VAR_6 << 8);
 VAR_8 = (VAR_0->ram.size >> 12) - (VAR_6 << 8) - VAR_3;

 VAR_10 = FUNC_3(&VAR_0->vram, VAR_7, VAR_8, 0);
 if (VAR_10) {
  FUNC_2(&VAR_0->vram);
  return VAR_10;
 }

 return 0;
}
