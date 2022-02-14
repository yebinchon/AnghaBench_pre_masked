
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_call_t ;
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







 int FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

thread_call_t
FUNC_2(thread_call_func_t VAR_8,
                              thread_call_param_t VAR_9,
                              int VAR_10,
                              thread_call_options_t VAR_11)
{
 thread_call_t VAR_12 = FUNC_1(VAR_8, VAR_9);

 switch (VAR_10) {
  case 131:
   VAR_12->tc_index = VAR_0;
   break;
  case 133:
   VAR_12->tc_index = VAR_5;
   break;
  case 132:
  case 134:
   VAR_12->tc_index = VAR_1;
   break;
  case 128:
   VAR_12->tc_index = VAR_4;
   break;
  case 130:
   VAR_12->tc_index = VAR_2;
   break;
  case 129:
   VAR_12->tc_index = VAR_3;
   break;
  default:
   FUNC_0("Invalid thread call qos value: %d", VAR_10);
   break;
 }

 if (VAR_11 & VAR_7)
  VAR_12->tc_flags |= VAR_6;



 return VAR_12;
}
