
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbduxsub {int numOfInBuffers; int numOfOutBuffers; scalar_t__ pwm_cmd_running; scalar_t__ ao_cmd_running; scalar_t__ ai_cmd_running; TYPE_2__** dux_commands; TYPE_2__** dac_commands; TYPE_2__** inBuffer; TYPE_2__** insnBuffer; TYPE_2__* urbPwm; TYPE_2__** urbOut; TYPE_2__** urbIn; scalar_t__ probed; TYPE_1__* interface; } ;
struct TYPE_6__ {struct TYPE_6__** transfer_buffer; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct usbduxsub*) ;
 int FUNC_6 (struct usbduxsub*) ;
 int FUNC_7 (struct usbduxsub*) ;

__attribute__((used)) static void FUNC_8(struct usbduxsub *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;
 FUNC_0(&VAR_0->interface->dev, "comedi_: tiding up\n");


 if (VAR_0->interface)
  FUNC_4(VAR_0->interface, ((void*)0));

 VAR_0->probed = 0;

 if (VAR_0->urbIn) {
  if (VAR_0->ai_cmd_running) {
   VAR_0->ai_cmd_running = 0;
   FUNC_5(VAR_0);
  }
  for (VAR_1 = 0; VAR_1 < VAR_0->numOfInBuffers; VAR_1++) {
   FUNC_1(VAR_0->urbIn[VAR_1]->transfer_buffer);
   VAR_0->urbIn[VAR_1]->transfer_buffer = ((void*)0);
   FUNC_3(VAR_0->urbIn[VAR_1]);
   FUNC_2(VAR_0->urbIn[VAR_1]);
   VAR_0->urbIn[VAR_1] = ((void*)0);
  }
  FUNC_1(VAR_0->urbIn);
  VAR_0->urbIn = ((void*)0);
 }
 if (VAR_0->urbOut) {
  if (VAR_0->ao_cmd_running) {
   VAR_0->ao_cmd_running = 0;
   FUNC_6(VAR_0);
  }
  for (VAR_1 = 0; VAR_1 < VAR_0->numOfOutBuffers; VAR_1++) {
   if (VAR_0->urbOut[VAR_1]->transfer_buffer) {
    FUNC_1(VAR_0->
          urbOut[VAR_1]->transfer_buffer);
    VAR_0->urbOut[VAR_1]->transfer_buffer =
        ((void*)0);
   }
   if (VAR_0->urbOut[VAR_1]) {
    FUNC_3(VAR_0->urbOut[VAR_1]);
    FUNC_2(VAR_0->urbOut[VAR_1]);
    VAR_0->urbOut[VAR_1] = ((void*)0);
   }
  }
  FUNC_1(VAR_0->urbOut);
  VAR_0->urbOut = ((void*)0);
 }
 if (VAR_0->urbPwm) {
  if (VAR_0->pwm_cmd_running) {
   VAR_0->pwm_cmd_running = 0;
   FUNC_7(VAR_0);
  }
  FUNC_1(VAR_0->urbPwm->transfer_buffer);
  VAR_0->urbPwm->transfer_buffer = ((void*)0);
  FUNC_3(VAR_0->urbPwm);
  FUNC_2(VAR_0->urbPwm);
  VAR_0->urbPwm = ((void*)0);
 }
 FUNC_1(VAR_0->inBuffer);
 VAR_0->inBuffer = ((void*)0);
 FUNC_1(VAR_0->insnBuffer);
 VAR_0->insnBuffer = ((void*)0);
 FUNC_1(VAR_0->inBuffer);
 VAR_0->inBuffer = ((void*)0);
 FUNC_1(VAR_0->dac_commands);
 VAR_0->dac_commands = ((void*)0);
 FUNC_1(VAR_0->dux_commands);
 VAR_0->dux_commands = ((void*)0);
 VAR_0->ai_cmd_running = 0;
 VAR_0->ao_cmd_running = 0;
 VAR_0->pwm_cmd_running = 0;
}
