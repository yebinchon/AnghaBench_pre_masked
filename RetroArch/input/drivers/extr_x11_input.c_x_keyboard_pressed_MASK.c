
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; } ;
typedef TYPE_1__ x11_input_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;


 int* VAR_0 ;

__attribute__((used)) static bool FUNC_0(x11_input_t *VAR_1, unsigned VAR_2)
{
   int VAR_3 = VAR_0[(enum retro_key)VAR_2];
   return VAR_1->state[VAR_3 >> 3] & (1 << (VAR_3 & 7));
}
