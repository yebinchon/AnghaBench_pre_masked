
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* work_interval_t ;
typedef int mach_port_t ;
struct TYPE_3__ {int create_flags; int wi_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

int
FUNC_2(work_interval_t VAR_3)
{
 if (VAR_3 == ((void*)0)) {
  VAR_2 = VAR_0;
  return -1;
 }

 if ((VAR_3->create_flags & VAR_1) == 0) {
  VAR_2 = VAR_0;
  return -1;
 }

 mach_port_t VAR_4 = VAR_3->wi_port;

 if (!FUNC_0(VAR_4)) {
  VAR_2 = VAR_0;
  return -1;
 }

 return FUNC_1(VAR_4);
}
