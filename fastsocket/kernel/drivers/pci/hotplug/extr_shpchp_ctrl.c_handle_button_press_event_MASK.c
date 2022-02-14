
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slot {int state; TYPE_1__* hpc_ops; int work; struct controller* ctrl; } ;
struct controller {int dummy; } ;
struct TYPE_2__ {int (* set_attention_status ) (struct slot*,int ) ;int (* green_led_off ) (struct slot*) ;int (* green_led_on ) (struct slot*) ;int (* green_led_blink ) (struct slot*) ;int (* get_power_status ) (struct slot*,int *) ;} ;




 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (struct controller*,char*,int ) ;
 int FUNC_2 (struct controller*,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct slot*) ;
 int FUNC_5 (struct slot*,int *) ;
 int FUNC_6 (struct slot*) ;
 int FUNC_7 (struct slot*,int ) ;
 int FUNC_8 (struct slot*) ;
 int FUNC_9 (struct slot*) ;
 int FUNC_10 (struct slot*,int ) ;
 int FUNC_11 (struct slot*) ;

__attribute__((used)) static void FUNC_12(struct slot *VAR_1)
{
 u8 VAR_2;
 struct controller *VAR_3 = VAR_1->ctrl;

 switch (VAR_1->state) {
 case 128:
  VAR_1->hpc_ops->get_power_status(VAR_1, &VAR_2);
  if (VAR_2) {
   VAR_1->state = 132;
   FUNC_1(VAR_3, "PCI slot #%s - powering off due to "
      "button press.\n", FUNC_4(VAR_1));
  } else {
   VAR_1->state = 131;
   FUNC_1(VAR_3, "PCI slot #%s - powering on due to "
      "button press.\n", FUNC_4(VAR_1));
  }

  VAR_1->hpc_ops->green_led_blink(VAR_1);
  VAR_1->hpc_ops->set_attention_status(VAR_1, 0);

  FUNC_3(&VAR_1->work, 5*VAR_0);
  break;
 case 132:
 case 131:





  FUNC_1(VAR_3, "Button cancel on Slot(%s)\n",
     FUNC_4(VAR_1));
  FUNC_0(&VAR_1->work);
  if (VAR_1->state == 132)
   VAR_1->hpc_ops->green_led_on(VAR_1);
  else
   VAR_1->hpc_ops->green_led_off(VAR_1);
  VAR_1->hpc_ops->set_attention_status(VAR_1, 0);
  FUNC_1(VAR_3, "PCI slot #%s - action canceled due to "
     "button press\n", FUNC_4(VAR_1));
  VAR_1->state = 128;
  break;
 case 130:
 case 129:





  FUNC_1(VAR_3, "Button ignore on Slot(%s)\n",
     FUNC_4(VAR_1));
  FUNC_11(VAR_1);
  break;
 default:
  FUNC_2(VAR_3, "Not a valid state\n");
  break;
 }
}
