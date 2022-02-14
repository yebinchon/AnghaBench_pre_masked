
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {int state; int work; struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int FUNC_0 (struct controller*) ;


 int VAR_0 ;


 int FUNC_1 (struct controller*) ;

 int FUNC_2 (int *) ;
 int FUNC_3 (struct controller*,char*,int ) ;
 int FUNC_4 (struct controller*,char*) ;
 int FUNC_5 (struct slot*,int *) ;
 int FUNC_6 (struct slot*) ;
 int FUNC_7 (struct slot*) ;
 int FUNC_8 (struct slot*) ;
 int FUNC_9 (struct slot*,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (struct slot*) ;
 int FUNC_12 (struct slot*) ;

__attribute__((used)) static void FUNC_13(struct slot *VAR_1)
{
 struct controller *VAR_2 = VAR_1->ctrl;
 u8 VAR_3;

 switch (VAR_1->state) {
 case 128:
  FUNC_5(VAR_1, &VAR_3);
  if (VAR_3) {
   VAR_1->state = 132;
   FUNC_3(VAR_2,
      "PCI slot #%s - powering off due to button "
      "press.\n", FUNC_11(VAR_1));
  } else {
   VAR_1->state = 131;
   FUNC_3(VAR_2,
      "PCI slot #%s - powering on due to button "
      "press.\n", FUNC_11(VAR_1));
  }

  if (FUNC_1(VAR_2))
   FUNC_6(VAR_1);
  if (FUNC_0(VAR_2))
   FUNC_9(VAR_1, 0);

  FUNC_10(&VAR_1->work, 5*VAR_0);
  break;
 case 132:
 case 131:





  FUNC_3(VAR_2, "Button cancel on Slot(%s)\n", FUNC_11(VAR_1));
  FUNC_2(&VAR_1->work);
  if (VAR_1->state == 132) {
   if (FUNC_1(VAR_2))
    FUNC_8(VAR_1);
  } else {
   if (FUNC_1(VAR_2))
    FUNC_7(VAR_1);
  }
  if (FUNC_0(VAR_2))
   FUNC_9(VAR_1, 0);
  FUNC_3(VAR_2, "PCI slot #%s - action canceled "
     "due to button press\n", FUNC_11(VAR_1));
  VAR_1->state = 128;
  break;
 case 130:
 case 129:





  FUNC_3(VAR_2, "Button ignore on Slot(%s)\n", FUNC_11(VAR_1));
  FUNC_12(VAR_1);
  break;
 default:
  FUNC_4(VAR_2, "Not a valid state\n");
  break;
 }
}
