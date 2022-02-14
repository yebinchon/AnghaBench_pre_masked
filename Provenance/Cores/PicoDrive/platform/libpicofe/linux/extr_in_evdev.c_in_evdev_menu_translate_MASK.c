
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_pdata {int kmap_size; TYPE_2__* key_map; } ;
struct TYPE_6__ {int kc_first; int kc_last; TYPE_1__* drv; } ;
typedef TYPE_3__ in_evdev_t ;
struct TYPE_5__ {int pbtn; int key; } ;
struct TYPE_4__ {struct in_pdata* pdata; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;

__attribute__((used)) static int FUNC_0(void *VAR_3, int VAR_4, char *VAR_5)
{
 in_evdev_t *VAR_6 = VAR_3;
 const struct in_pdata *VAR_7 = VAR_6->drv->pdata;
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_4 < 0)
 {

  VAR_4 = -VAR_4;
  for (VAR_9 = 0; VAR_9 < VAR_7->kmap_size; VAR_9++)
   if (VAR_7->key_map[VAR_9].pbtn == VAR_4) {
    int VAR_10 = VAR_7->key_map[VAR_9].key;

    if (VAR_6->kc_first <= VAR_10 && VAR_10 <= VAR_6->kc_last)
     return VAR_10;
   }
 }
 else
 {
  for (VAR_9 = 0; VAR_9 < VAR_7->kmap_size; VAR_9++) {
   if (VAR_7->key_map[VAR_9].key == VAR_4) {
    VAR_8 = VAR_7->key_map[VAR_9].pbtn;
    break;
   }
  }

  if (VAR_5 != ((void*)0) && (unsigned int)VAR_4 < VAR_0 &&
      VAR_2[VAR_4] != ((void*)0) && VAR_2[VAR_4][1] == 0)
  {
   char VAR_11 = VAR_2[VAR_4][0];
   if ('A' <= VAR_11 && VAR_11 <= 'Z')
    VAR_11 = 'a' + VAR_11 - 'A';
   VAR_8 |= VAR_1;
   *VAR_5 = VAR_11;
  }
 }

 return VAR_8;
}
