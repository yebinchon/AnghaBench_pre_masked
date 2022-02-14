
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keyboard_state; } ;
typedef TYPE_1__ qnx_input_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static bool FUNC_1(qnx_input_t *VAR_2, unsigned VAR_3)
{
    unsigned VAR_4 = VAR_1[(enum retro_key)VAR_3];
    return VAR_3 < VAR_0 && FUNC_0(VAR_2->keyboard_state, VAR_4);
}
