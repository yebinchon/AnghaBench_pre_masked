
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int boolean_t ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;



 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(uint64_t VAR_8, boolean_t VAR_9)
{
 switch (VAR_8) {
  case 128:
   if (VAR_9) {
    FUNC_2(FUNC_1(VAR_5, VAR_6) | VAR_3,
     FUNC_4()->p_pid, 0, 0, 0, 0);
   } else {
    FUNC_2(FUNC_1(VAR_5, VAR_6) | VAR_2,
     FUNC_4()->p_pid, 0, 0, 0, 0);
   }
   FUNC_8(VAR_9);
   break;

  case 130:
   if (VAR_9) {
    FUNC_2(FUNC_3(VAR_4, VAR_7) | VAR_3,
     FUNC_4()->p_pid, 0, 0, 0, 0);
   } else {
    FUNC_2(FUNC_3(VAR_4, VAR_7) | VAR_2,
     FUNC_4()->p_pid, 0, 0, 0, 0);
   }
   FUNC_7(VAR_9);
   break;

  case 129:
   if (VAR_9) {
    FUNC_2(FUNC_0(VAR_1, VAR_0) | VAR_3,
     FUNC_4()->p_pid, 0, 0, 0, 0);
   } else {
    FUNC_2(FUNC_0(VAR_1, VAR_0) | VAR_2,
     FUNC_4()->p_pid, 0, 0, 0, 0);
   }



   break;

  default:
   FUNC_6("Unknown option to system_override_callouts(): %llu\n", VAR_8);
 }
}
