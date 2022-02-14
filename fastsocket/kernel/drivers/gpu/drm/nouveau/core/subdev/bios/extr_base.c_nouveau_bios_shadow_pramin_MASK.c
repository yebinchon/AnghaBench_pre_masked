
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_device {scalar_t__ card_type; } ;
struct nouveau_bios {int size; scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 struct nouveau_device* FUNC_1 (struct nouveau_bios*) ;
 int FUNC_2 (struct nouveau_bios*,int,int,int) ;
 int FUNC_3 (struct nouveau_bios*,int) ;
 int FUNC_4 (struct nouveau_bios*,int) ;
 int FUNC_5 (struct nouveau_bios*,int,int) ;
 int FUNC_6 (struct nouveau_bios*,int,int ) ;

__attribute__((used)) static void
FUNC_7(struct nouveau_bios *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = 0;
 int VAR_5;

 if (VAR_3->card_type >= VAR_1) {
  u64 VAR_6 = (u64)(FUNC_4(VAR_2, 0x619f04) & 0xffffff00) << 8;
  if (!VAR_6) {
   VAR_6 = (u64)FUNC_4(VAR_2, 0x001700) << 16;
   VAR_6 += 0xf0000;
  }

  VAR_4 = FUNC_2(VAR_2, 0x001700, 0xffffffff, VAR_6 >> 16);
 }


 if (FUNC_3(VAR_2, 0x700000) != 0x55 ||
     FUNC_3(VAR_2, 0x700001) != 0xaa)
  goto out;

 VAR_2->size = FUNC_3(VAR_2, 0x700002) * 512;
 if (!VAR_2->size)
  goto out;

 VAR_2->data = FUNC_0(VAR_2->size, VAR_0);
 if (VAR_2->data) {
  for (VAR_5 = 0; VAR_5 < VAR_2->size; VAR_5++)
   FUNC_5(VAR_2, VAR_5, FUNC_3(VAR_2, 0x700000 + VAR_5));
 }

out:
 if (VAR_3->card_type >= VAR_1)
  FUNC_6(VAR_2, 0x001700, VAR_4);
}
