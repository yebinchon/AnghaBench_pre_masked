
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** port_array; scalar_t__ statctrl_base; } ;
struct TYPE_4__ {unsigned char ctrlreg_value; } ;
typedef TYPE_2__ SLMP_INFO ;



__attribute__((used)) static void FUNC_0(SLMP_INFO * VAR_0)
{
 unsigned char *VAR_1 = (unsigned char *)VAR_0->statctrl_base;
 *VAR_1 = VAR_0->port_array[0]->ctrlreg_value;
}
