
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ac_max_uA; int (* set_charge ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 static int VAR_7;
 int VAR_8 = VAR_6->ac_max_uA;

 if (VAR_6->set_charge) {
  if (VAR_4 > 0) {
   FUNC_0(VAR_3, "charger on (AC)\n");
   VAR_6->set_charge(VAR_0);
  } else if (VAR_5 > 0) {
   FUNC_0(VAR_3, "charger on (USB)\n");
   VAR_6->set_charge(VAR_1);
  } else {
   FUNC_0(VAR_3, "charger off\n");
   VAR_6->set_charge(0);
  }
 } else if (VAR_2) {
  if (VAR_4 > 0) {
   FUNC_3(VAR_2, VAR_8, VAR_8);
   if (!VAR_7) {
    FUNC_0(VAR_3, "charger on (AC)\n");
    FUNC_2(VAR_2);
    VAR_7 = 1;
   }
  } else {
   if (VAR_7) {
    FUNC_0(VAR_3, "charger off\n");
    FUNC_1(VAR_2);
    VAR_7 = 0;
   }
  }
 }
}
