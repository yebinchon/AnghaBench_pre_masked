
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* work_interval_t ;
typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {int create_flags; int wi_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 () ;

int
FUNC_2(work_interval_t VAR_6, mach_port_t *VAR_7)
{
 if (VAR_7 == ((void*)0)) {
  VAR_5 = VAR_0;
  return -1;
 }

 if (VAR_6 == ((void*)0)) {
  *VAR_7 = VAR_2;
  VAR_5 = VAR_0;
  return -1;
 }

 if ((VAR_6->create_flags & VAR_4) == 0) {
  *VAR_7 = VAR_2;
  VAR_5 = VAR_0;
  return -1;
 }

 mach_port_t VAR_8 = VAR_6->wi_port;

 kern_return_t VAR_9 = FUNC_0(FUNC_1(), VAR_8,
                                       VAR_3, 1);

 if (VAR_9 != VAR_1) {
  *VAR_7 = VAR_2;
  VAR_5 = VAR_0;
  return -1;
 }

 *VAR_7 = VAR_8;

 return 0;
}
