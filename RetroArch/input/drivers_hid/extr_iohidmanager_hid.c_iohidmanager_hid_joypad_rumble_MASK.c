
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int * slots; } ;
typedef TYPE_1__ iohidmanager_hid_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;


 int FUNC_0 (int *,unsigned int,int,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, unsigned VAR_1,
      enum retro_rumble_effect VAR_2, uint16_t VAR_3)
{
   iohidmanager_hid_t *VAR_4 = (iohidmanager_hid_t*)VAR_0;
   if (!VAR_4)
      return 0;
   return FUNC_0(&VAR_4->slots[VAR_1], VAR_1, VAR_2, VAR_3);
}
