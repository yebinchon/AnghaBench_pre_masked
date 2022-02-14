
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mrs_name; } ;
typedef TYPE_1__ mach_right_send_t ;
typedef int kern_return_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 () ;

mach_right_send_t
FUNC_3(mach_right_send_t VAR_4)
{
 kern_return_t VAR_5 = VAR_0;
 mach_right_send_t VAR_6 = VAR_3;

 VAR_5 = FUNC_1(FUNC_2(), VAR_4.mrs_name,
   VAR_2, 1);
 switch (VAR_5) {
 case 0:
  VAR_6 = VAR_4;
  break;
 case 128:
  VAR_6.mrs_name = VAR_1;
  break;
 case 129:



 default:
  FUNC_0("retain send right", VAR_5);
 }

 return VAR_6;
}
