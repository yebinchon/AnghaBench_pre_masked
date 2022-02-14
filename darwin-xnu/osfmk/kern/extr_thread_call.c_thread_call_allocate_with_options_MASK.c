
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
typedef int thread_call_priority_t ;
typedef int thread_call_param_t ;
typedef int thread_call_options_t ;
typedef int thread_call_func_t ;
struct TYPE_4__ {int tc_flags; int tc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

thread_call_t
FUNC_2(
  thread_call_func_t VAR_9,
  thread_call_param_t VAR_10,
  thread_call_priority_t VAR_11,
  thread_call_options_t VAR_12)
{
 thread_call_t VAR_13 = FUNC_1(VAR_9, VAR_10);

 switch (VAR_11) {
  case 132:
   VAR_13->tc_index = VAR_0;
   break;
  case 131:
   VAR_13->tc_index = VAR_1;
   break;
  case 128:
   VAR_13->tc_index = VAR_4;
   break;
  case 129:
   VAR_13->tc_index = VAR_3;
   break;
  case 130:
   VAR_13->tc_index = VAR_2;
   break;
  default:
   FUNC_0("Invalid thread call pri value: %d", VAR_11);
   break;
 }

 if (VAR_12 & VAR_6) {
     VAR_13->tc_flags |= VAR_5;
 }
 if (VAR_12 & VAR_7) {
     VAR_13->tc_flags |= VAR_8 | VAR_5;
 }

 return VAR_13;
}
