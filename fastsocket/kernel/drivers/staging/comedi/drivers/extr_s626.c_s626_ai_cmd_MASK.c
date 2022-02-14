
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct enc_private {int (* SetEnable ) (struct comedi_device*,struct enc_private*,int ) ;} ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ irq; int minor; } ;
struct comedi_cmd {int scan_begin_src; int flags; int const start_src; int convert_src; int stop_src; int start_arg; int stop_arg; int convert_arg; int scan_begin_arg; } ;
struct TYPE_4__ {int ai_cmd_running; int ai_continous; scalar_t__ base_addr; int ai_sample_count; scalar_t__ ai_convert_count; } ;
struct TYPE_3__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct comedi_device*,int *) ;






 int VAR_11 ;

 int FUNC_3 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_12 ;
 struct enc_private* VAR_13 ;
 int FUNC_4 (char*,int ) ;
 int * VAR_14 ;
 int FUNC_5 (int *,struct comedi_cmd*) ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,int ) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (struct comedi_device*,struct enc_private*,int) ;
 int FUNC_10 (struct comedi_device*,struct enc_private*,int ) ;
 int FUNC_11 (struct comedi_device*,struct enc_private*,int ) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16)
{

 uint8_t VAR_17[16];
 struct comedi_cmd *VAR_18 = &VAR_16->async->cmd;
 struct enc_private *VAR_19;
 int VAR_20;

 FUNC_0("s626_ai_cmd: entering command function\n");

 if (VAR_12->ai_cmd_running) {
  FUNC_4("s626_ai_cmd: Another ai_cmd is running %d\n",
         VAR_15->minor);
  return -VAR_2;
 }

 FUNC_12(0, VAR_12->base_addr + VAR_8);


 FUNC_12(VAR_6 | VAR_5, VAR_12->base_addr + VAR_9);


 FUNC_6(VAR_15);



 VAR_12->ai_cmd_running = 0;


 if (VAR_18 == ((void*)0)) {
  FUNC_0("s626_ai_cmd: NULL command\n");
  return -VAR_3;
 } else {
  FUNC_0("s626_ai_cmd: command recieved!!!\n");
 }

 if (VAR_15->irq == 0) {
  FUNC_3(VAR_15,
        "s626_ai_cmd: cannot run command without an irq");
  return -VAR_4;
 }

 FUNC_5(VAR_17, VAR_18);
 VAR_12->ai_cmd_running = 1;
 VAR_12->ai_convert_count = 0;

 switch (VAR_18->scan_begin_src) {
 case 132:
  break;
 case 128:

  VAR_19 = &VAR_13[5];
  VAR_20 = FUNC_8((int *)&VAR_18->scan_begin_arg,
     VAR_18->flags & VAR_11);


  FUNC_9(VAR_15, VAR_19, VAR_20);
  VAR_19->SetEnable(VAR_15, VAR_19, VAR_0);

  FUNC_0("s626_ai_cmd: scan trigger timer is set with value %d\n",
        VAR_20);

  break;
 case 133:

  if (VAR_18->start_src != 133)
   FUNC_7(VAR_15, VAR_18->scan_begin_arg);

  FUNC_0("s626_ai_cmd: External scan trigger is set!!!\n");

  break;
 }

 switch (VAR_18->convert_src) {
 case 129:
  break;
 case 128:

  VAR_19 = &VAR_13[4];
  VAR_20 = FUNC_8((int *)&VAR_18->convert_arg,
     VAR_18->flags & VAR_11);


  FUNC_9(VAR_15, VAR_19, VAR_20);
  VAR_19->SetEnable(VAR_15, VAR_19, VAR_1);

  FUNC_0
      ("s626_ai_cmd: convert trigger timer is set with value %d\n",
       VAR_20);
  break;
 case 133:

  if (VAR_18->scan_begin_src != 133
      && VAR_18->start_src == 133)
   FUNC_7(VAR_15, VAR_18->convert_arg);

  FUNC_0("s626_ai_cmd: External convert trigger is set!!!\n");

  break;
 }

 switch (VAR_18->stop_src) {
 case 134:

  VAR_12->ai_sample_count = VAR_18->stop_arg;
  VAR_12->ai_continous = 0;
  break;
 case 130:

  VAR_12->ai_continous = 1;
  VAR_12->ai_sample_count = 0;
  break;
 }

 FUNC_2(VAR_15, VAR_17);

 switch (VAR_18->start_src) {
 case 129:




  FUNC_1(VAR_10, VAR_7);

  FUNC_0("s626_ai_cmd: ADC triggered\n");
  VAR_16->async->inttrig = ((void*)0);
  break;
 case 133:

  FUNC_7(VAR_15, VAR_18->start_arg);

  FUNC_0("s626_ai_cmd: External start trigger is set!!!\n");

  VAR_16->async->inttrig = ((void*)0);
  break;
 case 131:
  VAR_16->async->inttrig = VAR_14;
  break;
 }


 FUNC_12(VAR_5 | VAR_6, VAR_12->base_addr + VAR_8);

 FUNC_0("s626_ai_cmd: command function terminated\n");

 return 0;
}
