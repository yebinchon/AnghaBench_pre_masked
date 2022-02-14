
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct menu_keymap {int pbtn; int key; } ;
struct in_sdl_state {scalar_t__ joy; TYPE_1__* drv; } ;
struct in_pdata {char** key_names; int jmap_size; int kmap_size; struct menu_keymap* key_map; struct menu_keymap* joy_map; } ;
struct TYPE_2__ {struct in_pdata* pdata; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 char** VAR_2 ;

__attribute__((used)) static int FUNC_0(void *VAR_3, int VAR_4, char *VAR_5)
{
 struct in_sdl_state *VAR_6 = VAR_3;
 const struct in_pdata *VAR_7 = VAR_6->drv->pdata;
 const char * const * VAR_8 = VAR_2;
 const struct menu_keymap *VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 if (VAR_7->key_names)
  VAR_8 = VAR_7->key_names;

 if (VAR_6->joy) {
  VAR_9 = VAR_7->joy_map;
  VAR_10 = VAR_7->jmap_size;
 } else {
  VAR_9 = VAR_7->key_map;
  VAR_10 = VAR_7->kmap_size;
 }

 if (VAR_4 < 0)
 {

  VAR_4 = -VAR_4;
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
   if (VAR_9[VAR_12].pbtn == VAR_4)
    return VAR_9[VAR_12].key;
 }
 else
 {
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   if (VAR_9[VAR_12].key == VAR_4) {
    VAR_11 = VAR_9[VAR_12].pbtn;
    break;
   }
  }

  if (VAR_5 != ((void*)0) && (unsigned int)VAR_4 < VAR_1 &&
      VAR_8[VAR_4] != ((void*)0) && VAR_8[VAR_4][1] == 0)
  {
   VAR_11 |= VAR_0;
   *VAR_5 = VAR_8[VAR_4][0];
  }
 }

 return VAR_11;
}
