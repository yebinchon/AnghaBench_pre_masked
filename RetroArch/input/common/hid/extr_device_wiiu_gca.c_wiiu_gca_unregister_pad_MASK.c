
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int joypad_connection_t ;
struct TYPE_3__ {int ** pads; } ;
typedef TYPE_1__ hid_wiiu_gca_instance_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(hid_wiiu_gca_instance_t *VAR_0, int VAR_1)
{
   if(!VAR_0 || VAR_1 < 0 || VAR_1 >= 4 || VAR_0->pads[VAR_1] == ((void*)0))
      return;

   joypad_connection_t *VAR_2 = VAR_0->pads[VAR_1];
   VAR_0->pads[VAR_1] = ((void*)0);

   FUNC_0(VAR_2);
}
