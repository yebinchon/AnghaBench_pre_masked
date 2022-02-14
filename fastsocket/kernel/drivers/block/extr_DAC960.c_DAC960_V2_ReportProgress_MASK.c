
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int EphemeralProgressMessage; int ControllerNumber; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int FUNC_0 (char*,TYPE_1__*,unsigned char*,unsigned int,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(DAC960_Controller_T *VAR_0,
         unsigned char *VAR_1,
         unsigned int VAR_2,
         unsigned long VAR_3,
         unsigned long VAR_4)
{
  VAR_0->EphemeralProgressMessage = 1;
  FUNC_0("%s in Progress: Logical Drive %d (/dev/rd/c%dd%d) "
    "%d%% completed\n", VAR_0,
    VAR_1,
    VAR_2,
    VAR_0->ControllerNumber,
    VAR_2,
    (100 * (VAR_3 >> 7)) / (VAR_4 >> 7));
  VAR_0->EphemeralProgressMessage = 0;
}
