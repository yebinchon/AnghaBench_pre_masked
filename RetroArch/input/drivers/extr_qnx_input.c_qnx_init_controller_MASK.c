
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qnx_input_t ;
struct TYPE_3__ {int port; int device; int index; int id; scalar_t__* analog1; scalar_t__* analog0; scalar_t__ buttons; scalar_t__ buttonCount; scalar_t__ analogCount; scalar_t__ type; scalar_t__ handle; } ;
typedef TYPE_1__ qnx_input_device_t ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(qnx_input_t *VAR_0, qnx_input_device_t* VAR_1)
{
   if (!VAR_0)
      return;





   VAR_1->type = 0;
   VAR_1->analogCount = 0;
   VAR_1->buttonCount = 0;
   VAR_1->buttons = 0;
   VAR_1->analog0[0] = 0;
   VAR_1->analog0[1] = 0;
   VAR_1->analog0[2] = 0;
   VAR_1->analog1[0] = 0;
   VAR_1->analog1[1] = 0;
   VAR_1->analog1[2] = 0;
   VAR_1->port = -1;
   VAR_1->device = -1;
   VAR_1->index = -1;

   FUNC_0(VAR_1->id, 0, sizeof(VAR_1->id));
}
