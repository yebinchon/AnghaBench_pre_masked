
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvbios_init {struct nouveau_bios* bios; } ;
struct nouveau_bios {int dummy; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;


 int FUNC_0 (struct nouveau_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static u16
FUNC_3(struct nvbios_init *VAR_0)
{
 struct nouveau_bios *VAR_1 = VAR_0->bios;
 struct bit_entry VAR_2;
 u16 VAR_3 = 0x0000;

 if (!FUNC_0(VAR_1, 'M', &VAR_2)) {
  if (VAR_2.version == 1 && VAR_2.length >= 5)
   VAR_3 = FUNC_1(VAR_1, VAR_2.offset + 3);
  if (VAR_2.version == 2 && VAR_2.length >= 3)
   VAR_3 = FUNC_1(VAR_1, VAR_2.offset + 1);
 }

 if (VAR_3 == 0x0000)
  FUNC_2("ram restrict table not found\n");
 return VAR_3;
}
