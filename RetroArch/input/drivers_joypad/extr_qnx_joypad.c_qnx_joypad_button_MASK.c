
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int * devices; } ;
typedef TYPE_1__ qnx_input_t ;
struct TYPE_4__ {int buttons; } ;
typedef TYPE_2__ qnx_input_device_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_2, uint16_t VAR_3)
{
   qnx_input_device_t* VAR_4 = ((void*)0);
   qnx_input_t *VAR_5 = (qnx_input_t*)FUNC_0();

   if (!VAR_5 || VAR_2 >= VAR_0)
      return 0;

   VAR_4 = (qnx_input_device_t*)&VAR_5->devices[VAR_2];

   if(VAR_2 < VAR_1 && VAR_3 <= 19)
      return (VAR_4->buttons & (1 << VAR_3)) != 0;

   return 0;
}
