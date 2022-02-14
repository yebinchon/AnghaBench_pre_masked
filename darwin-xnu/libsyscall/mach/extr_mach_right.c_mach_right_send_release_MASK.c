
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mrs_name; } ;
typedef TYPE_1__ mach_right_send_t ;
typedef int kern_return_t ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 () ;

void
FUNC_3(mach_right_send_t VAR_3)
{
 kern_return_t VAR_4 = VAR_0;

 VAR_4 = FUNC_1(FUNC_2(), VAR_3.mrs_name,
   VAR_2, -1);
 switch (VAR_4) {
 case 0:
  break;
 case 128:
  VAR_4 = FUNC_1(FUNC_2(), VAR_3.mrs_name,
    VAR_1, -1);
  FUNC_0("release dead name", VAR_4);
  break;
 default:
  FUNC_0("release send right", VAR_4);
 }
}
