
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unset; } ;






 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const* const) ;

__attribute__((used)) static int FUNC_1(char const *VAR_1, int VAR_2, int VAR_3)
{
 static char const * const VAR_4[] = {
  "atariosa.rom", "atari_osa.rom", "atari_os_a.rom",
  "atariosb.rom", "atari_osb.rom", "atari_os_b.rom",
  ((void*)0),
  "atarixlxe.rom", "atarixl.rom", "atari_xlxe.rom", "atari_xl_xe.rom",
  ((void*)0),
  "atari5200.rom", "atar5200.rom", "5200.rom", "5200.bin", "atari_5200.rom",
  ((void*)0),
  "ataribasic.rom", "ataribas.rom", "basic.rom", "atari_basic.rom",
  ((void*)0)
 };
 static struct { int const len; int const id; int const offset; } const VAR_5[] = {
   { 0x2800, 130, 0 },
   { 0x4000, 128, 7 },
   { 0x800, 131, 12 },
   { 0x2000, 129, 18 }
 };
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
  if (VAR_2 == VAR_5[VAR_6].len
      && (!VAR_3 || VAR_0[VAR_6].unset)) {

   char const * const *VAR_7 = VAR_4 + VAR_5[VAR_6].offset;
   do {
    if (FUNC_0(VAR_1, *VAR_7) == 0)
     return VAR_5[VAR_6].id;
   } while (*++VAR_7 != ((void*)0));
  }
 }
 return -1;
}
