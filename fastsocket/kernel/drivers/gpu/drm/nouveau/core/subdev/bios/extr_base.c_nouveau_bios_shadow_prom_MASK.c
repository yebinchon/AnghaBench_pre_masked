
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nouveau_device {scalar_t__ card_type; } ;
struct nouveau_bios {int size; scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 struct nouveau_device* FUNC_1 (struct nouveau_bios*) ;
 int FUNC_2 (struct nouveau_bios*,int,int,int) ;
 int FUNC_3 (struct nouveau_bios*,int) ;
 int FUNC_4 (struct nouveau_bios*,int,int) ;
 int FUNC_5 (struct nouveau_bios*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_bios *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5;
 u16 VAR_6;
 int VAR_7;


 if (VAR_3->card_type >= VAR_1)
  VAR_4 = 0x088050;
 else
  VAR_4 = 0x001850;
 VAR_5 = FUNC_2(VAR_2, VAR_4, 0x00000001, 0x00000000);






 VAR_7 = 16;
 do {
  if (FUNC_3(VAR_2, 0x300000) == 0x55)
   break;
 } while (VAR_7--);

 if (!VAR_7 || FUNC_3(VAR_2, 0x300001) != 0xaa)
  goto out;


 VAR_6 = FUNC_3(VAR_2, 0x300018) |
        FUNC_3(VAR_2, 0x300019) << 8;
 if (FUNC_3(VAR_2, 0x300000 + VAR_6) != 'P' ||
     FUNC_3(VAR_2, 0x300001 + VAR_6) != 'C' ||
     FUNC_3(VAR_2, 0x300002 + VAR_6) != 'I' ||
     FUNC_3(VAR_2, 0x300003 + VAR_6) != 'R')
  goto out;


 VAR_2->size = FUNC_3(VAR_2, 0x300002) * 512;
 if (!VAR_2->size)
  goto out;

 VAR_2->data = FUNC_0(VAR_2->size, VAR_0);
 if (VAR_2->data) {
  for (VAR_7 = 0; VAR_7 < VAR_2->size; VAR_7++)
   FUNC_4(VAR_2, VAR_7, FUNC_3(VAR_2, 0x300000 + VAR_7));
 }

out:

 FUNC_5(VAR_2, VAR_4, VAR_5);
}
